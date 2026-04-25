The Traffic Light Circuit
To build this traffic light, you'll need an ESP8266 NodeMCU, three LEDs (one Red, one Yellow, one Green), three current-limiting resistors (~220-470 ohms), a breadboard, and jumper wires.

Here's how to connect everything:

Red LED:

Connect Pin D1 on your NodeMCU to one side of a resistor.

Connect the other side of the resistor to the anode (longer leg) of the Red LED.

Connect the cathode (shorter leg) of the Red LED to the Ground (GND) pin on your NodeMCU.

Yellow LED:

Connect Pin D2 on your NodeMCU to one side of a resistor.

Connect the other side of the resistor to the anode (longer leg) of the Yellow LED.

Connect the cathode (shorter leg) of the Yellow LED to Ground (GND).

Green LED:

Connect Pin D3 on your NodeMCU to one side of a resistor.

Connect the other side of the resistor to the anode (longer leg) of the Green LED.

Connect the cathode (shorter leg) of the Green LED to Ground (GND).

With these connections, the code logic controls each LED: the Green LED will light up for 5 seconds, followed by the Yellow for 2 seconds, and then the Red for 5 seconds, creating the classic traffic light sequence!
