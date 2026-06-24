## Installation and Setup Instructions:

### 1\. Cloning the Repository
```bash 
git clone https://github.com/ReksAstaRaidn/esp32-pirmotionsensor.git
cd esp32-pirmotionsensor
```
### 2\. Open the Source Code with Arduino IDE or VSCode Extensions Platform.io
### 3\. Setup Your Board in Arduino IDE or VSCode and Upload it

## Components List:
Here is a summary description and quantity of each component needed for this project:

- ESP32
- Breadboard 
- PIR Motion Sensor (Motion Detector Module)
- Resistor 220 ohm x1
- Buzzer x1 (Any type will work, but i suggest an active buzzer as a sound effect is desired)
- Any color LED(s) for indication purposes. I propose using green or red colors.
- Wire M to M and M to F as much as u need

Ensure that the breadboard has both male and female headers to facilitate wiring connections easily and securely.

## Circuit Diagrams

### Wiring Connections:
- **Sensor to ESP32:**
  - VCC: Power Supply 5V or Vin from Breadboard 
  - Data: GPIO14 on the ESP32
  - GND: Ground at a connected GND pin to the breadboard’s ground

- **LED to ESP32:**
  - Anode (Positive) of LED connected directly to VCC
  - Cathode (Negative) through resistor to GPIO12

- **Buzzer to ESP32:**
  - Minus (Negative) of buzzer connected directly to GND
  - Plus (+ve) connected to GPIO25

### Schematic:
![Schematics Image]<img width="3000" height="4531" alt="circuit_image" src="https://github.com/user-attachments/assets/31ee81d3-b787-4237-a58b-36b622370d16" />
