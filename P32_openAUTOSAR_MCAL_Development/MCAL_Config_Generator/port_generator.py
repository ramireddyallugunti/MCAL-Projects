
# import built-in JSON module
# import built-in pathlib module for filesystem paths ,to work with file and directory paths
# import built-in jinja2 module for template rendering  
import json
from pathlib import Path
from jinja2 import Template


# pins present on the board.
PORT_PINS = {
    0: list(range(13)),
    1: list(range(3, 8)),
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


HEADER_TEMPLATE = """#ifndef PORT_CFG_H
#define PORT_CFG_H

#include "port_driver.h"

#define PORT_CONFIGURED_PIN_COUNT ({{ pins | length }}U)
extern const Port_ConfigType Port_Config;

#endif
"""

SOURCE_TEMPLATE = """#include "port_Cfg.h"

/* Generated automatically. Do not change this file manually. */
static const Port_PinConfigType Port_PinConfigs[] =
{
{% for pin in pins %}
    {
        .PortNumber = {{ pin.port }}U,
        .PinNumber = {{ pin.pin }}U,
        .Direction = {{ pin.direction }},
        .InitialMode = {{ pin.mode }},
        .InputMode = {{ pin.input_mode }},
        .OutputMode = {{ pin.output_mode }},
        .InitialLevel = {{ pin.level }},
        .DirectionChangeable = FALSE,
        .ModeChangeable = FALSE
    }{% if not loop.last %},{% endif %}
{% endfor %}
};

const Port_ConfigType Port_Config =
{
    .Pins = Port_PinConfigs,
    .PinCount = {{ pins | length }}U
};
"""


def ask_number(question, valid_values):

    while True:

        answer = input(question).strip()

        # Check whether the input contains only digits
        if answer.isdigit():

            number = int(answer)

            if number in valid_values:
                return number

            else:
                print("Invalid choice. Choose from:", sorted(valid_values))

        else:
            print("Please enter a valid number.")

def configure_pin(used_pins):

    print("\nAvailable ports:", sorted(PORT_PINS))

    port = ask_number("Enter port number: ", PORT_PINS.keys())

    # Find pins that are not configured yet
    available_pins = []

    for pin_number in PORT_PINS[port]:

        if (port, pin_number) not in used_pins:
            available_pins.append(pin_number)

    print("Available pins:", available_pins)

    if len(available_pins) == 0:
        print("All pins on this port are already configured.")
        return None

    pin = ask_number("Enter pin number: ", available_pins)

    # Check for input-only pins
    if port == 40 or (port == 20 and pin == 2):

        print("This pin supports input only.")
        direction = 0

    else:

        print("0 = Input, 1 = Output")
        direction = ask_number("Enter direction: ", [0, 1])

    # Default pin configuration
    config = {
        "port": port,
        "pin": pin,
        "direction": "PORT_PIN_IN",
        "mode": "PORT_GPIO",
        "input_mode": "PORT_INPUT_NOPULL",
        "output_mode": "PORT_OUTPUT_PUSHPULL",
        "level": "STD_LOW"
    }

    if direction == 0:

        print("0 = No pull")
        print("1 = Pull down")
        print("2 = Pull up")
        print("3 = Tristate")

        input_choice = ask_number("Enter input mode: ", [0, 1, 2, 3])

        input_modes = [
            "PORT_INPUT_NOPULL",
            "PORT_INPUT_PULLDOWN",
            "PORT_INPUT_PULLUP",
            "PORT_INPUT_TRISTATE"
        ]

        config["input_mode"] = input_modes[input_choice]

    else:

        config["direction"] = "PORT_PIN_OUT"

        print("0 = Push-pull")
        print("1 = Open-drain")

        output_choice = ask_number("Enter output type: ", [0, 1])

        if output_choice == 1:
            config["output_mode"] = "PORT_OUTPUT_OPENDRAIN"

        print("0 = LOW")
        print("1 = HIGH")

        level_choice = ask_number("Enter initial level: ", [0, 1])

        if level_choice == 1:
            config["level"] = "STD_HIGH"

    return config

def main():
    print("=== TC397 PORT Config Generator ===")   

    count = int(input("How many pins do you want to configure? "))
    configurations = []
    used_pins = set()

    while len(configurations) < count:

        current_pin = len(configurations) + 1
        print("\nConfiguring Pin", current_pin, "of", count)
        
        config = configure_pin(used_pins)

        if config is not None:
            configurations.append(config)
            used_pins.add((config["port"], config["pin"]))

        # Get the folder where the Python file is present
    root = Path(__file__).resolve().parent

    # Create the generated folder
    output_folder = root / "generated"
    output_folder.mkdir(exist_ok=True)

    # Save the configuration in JSON format
    json_data = {"pins": configurations}

    json_text = json.dumps(json_data, indent=4)

    json_file = root / "port.json"

    json_file.write_text(json_text, encoding="utf-8")

    # Generate port_Cfg.h
    header_template = Template(HEADER_TEMPLATE)

    header_code = header_template.render(pins=configurations)

    header_file = output_folder / "port_Cfg.h"

    header_file.write_text(header_code, encoding="utf-8")

    # Generate port_PBcfg.c
    source_template = Template(SOURCE_TEMPLATE)

    source_code = source_template.render(pins=configurations)

    source_file = output_folder / "port_PBcfg.c"

    source_file.write_text(source_code, encoding="utf-8")

    print("\nConfiguration files generated successfully.")


if __name__ == "__main__":
    main()


