# Automated Traffic Light System (Proteus Simulation & Arduino)

An Automated Traffic Light System designed using Proteus simulation and Arduino. This project simulates a traffic light controller, which adjusts the signal timing based on real-time traffic patterns using an Arduino microcontroller.

## Features

- **Proteus Simulation:** Visual representation and simulation of the traffic light system.
- **Arduino-based Control:** Uses Arduino programming to control the traffic lights' timing and behavior.
- **Preset Signal Adjustment:** Traffic lights adjust dynamically based on preset conditions, simulating traffic flow optimization.

## Getting Started

### Prerequisites

- **Proteus Software:** To simulate the circuit and traffic light system.
- **Arduino IDE:** For writing and uploading the Arduino code.
- **Arduino Board (Optional):** For actual hardware implementation.
- **Libraries:** Arduino libraries required for simulation and programming.

### Installation

1. **Clone the repository:**

   ```bash
   git clone https://github.com/yourusername/automated-traffic-light-system.git
   ```

2. **Proteus Simulation:**
   - Open the `Automated Traffic Light System.pdsprj` file in Proteus to view and simulate the traffic light system circuit.
   - Modify the simulation parameters in Proteus as needed.

3. **Arduino Code:**
   - Open `traffic_light.ino` in the Arduino IDE.
   - Upload the code to your Arduino (if using actual hardware).
   
   The code controls the traffic lights using predetmined traffic conditions.

4. **Libraries:**
   - Install the Arduino library that contains Arduino Uno.

### Running the Simulation

1. Open the **Proteus simulation** and press **Run** to start simulating the traffic light system.
2. In the **Arduino IDE**, ensure the correct board and port are selected if uploading the code to an Arduino device.
3. You can modify signal timings, sensor intervals, or add more traffic sensors to adjust the system behavior.

## Example

For a simple 4-way intersection with signal cycles, the system operates with:
- Red, Yellow and Green light cycles.

```cpp
void setup() {
  // Initialize traffic light pins and sensors
  int Gotime = 6000; // 5 seconds
  int waitTime = 2000; // 5 seconds
  int Lane1[] = {11,10,9}; // Lane 1 Red, Yellow and Green
  int Lane2[] = {8,7,6}; // Lane 2 Red, Yellow and Green
  int Lane3[] = {5,4,3}; // Lane 3 Red, Yellow and Green
  int Lane4[] = {2,1,0}; // Lane 4 Red, Yellow and Green
}

void loop() {
  // Traffic light control logic
    digitalWrite(Lane1[2], HIGH);
    digitalWrite(Lane3[0], HIGH);
    digitalWrite(Lane4[0], HIGH);
    digitalWrite(Lane2[0], HIGH);
    delay(Gotime);
    digitalWrite(Lane1[2], LOW);
    digitalWrite(Lane3[0], LOW);
    digitalWrite(Lane1[1], HIGH);
    digitalWrite(Lane3[1], HIGH);
    delay(waitTime);
................................
}
```

## Contributing

1. Fork this repository.
2. Create a new branch (`git checkout -b feature/your-feature`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature/your-feature`).
5. Open a pull request.

## License

This is an open source project that can be edited, and upgraded pending approval.

---
