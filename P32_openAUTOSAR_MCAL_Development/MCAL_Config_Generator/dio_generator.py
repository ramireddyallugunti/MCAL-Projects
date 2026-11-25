
import json 
from pathlib import Path
from jinja2 import Template

PORT_PINS = {
    0: list(range(13)),
    1: list(range(3,8)),
    2: list(range(12)),
    10: list(range(9)),
    11: list(range(16)),
    12: [0, 1],
    13: [0, 1, 2, 3],
    14: list(range(11)),
    15: list(range(9)),
    20: [0, 1, 2, 3, 6, 7, 8, 9, 10, 11, 12, 13, 14],
    21: list(range(8)),
    22: list(range(12)),
    23: list(range(8)),
    32: list(range(8)),
    33: list(range(16)),
    34: [1, 2, 3, 4, 5],
    40: list(range(15)),

}

HEADER_TEMPLATE = """
#ifndef DIO_CFG_H
#define DIO_CFG_H
# include "dio_driver.h"

/* Generated DIO channels  */

{% for channel in channels %}
#define {{channel.name}} DIO_CHANNEL_ID({{channel.port}}U, {{channel.pin}}U)
{% endfor %}

# endif
"""


# Read a valid number from the user
def read_valid_number(message, valid_values):

    while True:

        value = input(message)

        if value.isdigit():

            number = int(value)

            if number in valid_values:
                return number

        print(f"Invalid input. Please enter a valid number from {valid_values}.")


# Configure the Dio Channel 
def configure_dio_channel(used_pins, used_names):

    print("\nAvailable ports:", sorted(PORT_PINS.keys()))

    port = read_valid_number("Enter the port number: ", PORT_PINS.keys())

    available_pins = []

    for pin in PORT_PINS[port]:

        if(port,pin) not in used_pins: # type: ignore
            
            available_pins.append(pin)

    if len(available_pins) == 0:
        print("All pins on this port are already configured. Please choose a different port.")
        return None
    print("Available pins:", available_pins)

    pin = read_valid_number("Enter the pin number: ", available_pins)

    while True:

        name = input("Enter channel name:").strip().upper()

        if not name.isidentifier():
            print("Invalid name. Please enter a valid identifier.")
            continue

        if name in used_names:
            print("This name is already used. Please choose a different name.")
            continue

        break

    channel = {
        "name": name,
        "port": port,
        "pin": pin
    }

    return channel


#Main function
def main():

    print(" == DIO Configuration Generator ==")

    count = read_valid_number("Enter the number of channels to configure: ", range(1, 100))

    channels = []

    used_pins = set()
    used_names = set()

    while len(channels) < count:

        print("\nConfiguring channel",len(channels) + 1)

        channel = configure_dio_channel(used_pins, used_names)

        if channel is not None:
            
            channels.append(channel)
            used_pins.add((channel["port"], channel["pin"]))
            used_names.add(channel["name"])

        # Get folder containing this Python file 
        root = Path(__file__).resolve().parent

        # Create generated folder
        output_folder = root / "generated"
        output_folder.mkdir(exist_ok=True)

        # Save JSON configuration
        json_file = root / "dio.json"

        with open(json_file, "w") as file:
            json.dump({"channels": channels}, file, indent=4)


        # Generate Dio_Cfg.h using jinja2 
        template = Template(HEADER_TEMPLATE)

        generated_code = template.render(channels=channels)

        header_file = output_folder / "Dio_Cfg.h"

        with open(header_file, "w") as file:
            file.write(generated_code)

        print("\nConfiguration files generated successfully.")

if __name__ == "__main__":
    main()
