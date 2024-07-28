# Home-security-system
This project aims to create an IoT-based ecosystem that  detects intruders and other discrepancies at the door of a home with the help of sensors, and  thereby alert the owner of potential risks.

## Demo Video
<a href="https://drive.google.com/file/d/1lS3v3zLEF5gMKj5gfEhwvtU1Y9bMLXQP/view?usp=sharing">Click Here to watch a demo video</a>

## Introduction
IoT (Internet of Things) is a network of interconnected devices embedded with sensors and 
software that enable them to collect, exchange, and act on data. These devices can connect to 
the internet and communicate with each other, enabling automation, efficiency 
improvements, and new services across various industries and everyday life. One such use of 
IoT is in Home Security Systems. This project aims to create an IoT-based ecosystem that 
detects intruders and other discrepancies at the door of a home with the help of sensors, and 
thereby alert the owner of potential risks.This project makes use of sensors and Arduino Uno board in order to create an ecosystem. 
Furthermore, the various communication protocols were studied and can be used to integrate 
into the ecosystem as further scope. This report discusses, in detail, about all the components 
used, their role in the ecosystem and the results obtained while implementing the hardware 
components.

## Hardware components 
<li>Arduino Uno R3</li> 
<li>Vibration Sensor  </li>
<li> PIR Sensor  </li> 
<li> Bluetooth Module  </li>
<li> Ultrasonic Sensor  </li>
<li> Magnetic Reed Switch </li>
<li> Radio Frequency Identification (RFID)  </li>
<li>LED Lights  </li>
<li> Breadboard  </li>
<li>Buzzer </li>
<li> Resistor </li> 
<li> Jumper Wires</li>

## Software Used
<li>Arduino Uno IDE</li>
<li>Bluetooth app: Arduino Bluetooth Controller </li>

## Connections
All the components mentioned above are connected in accordance with the block diagram 
shown in Figure 1.8. This section provides further details of the pin connections. 
Firstly, the ultrasonic sensor consists of VCC, ground, echo and trigger. The VCC and 
ground are connected to the breadboard, the trigger pin is connected to the seventh pin and 
the echo pin is connected to the sixth pin of the Arduino Uno R3 board respectively. 
Secondly, the Passive infrared (PIR) Sensor consists of Vcc, ground, and output pins. The 
Vcc and ground are connected to the breadboard and the output pin is connected to the fifth 
pin of the Arduino Uno R3 board. 
Thirdly, the Radio Frequency identification (RFID) consists of SDA, SCK, MOSI, MISO, 
ground, 3.3V, and reset pins. The SDA is connected to the tenth pin, SCK is connected to 
the thirteenth pin, MOSI is connected to the eleventh pin, MISO connected to the twelfth 
pin, reset pin is connected to the ninth pin, ground is connected to the ground pin and 3.3 
V is connected to the 3.3 V pin in the Arduino Uno R3 pin respectively. 
Figure 1.8: Block Diagram 
14
Then, the Bluetooth module consists of Vcc, ground, TX0 and RX0 pins. The Vcc and 
ground are connected to the breadboard. The TX0 pin of Bluetooth module is connected to 
RX0 pin of the Arduino Uno R3. The RX0 pin of Bluetooth module is connected to TX0 
pin of the Arduino Uno R3. 
Furthermore, the magnetic reed switch consists of two terminals: positive and negative. 
The positive terminal is connected to the 3.3 V pin of Arduino and the negative terminal is 
connected to pin 8 of the Arduino Uno R3 board and to 330-ohm resistor. The negative 
terminal of the resistor is connected to the ground of the breadboard. 
Finally, the vibration sensor consists of three pins: Vcc, ground and output pin. The Vcc 
and ground are connected to the breadboard. The output pin is connected to the pin number 
2 of the Arduino Uno R3 board. 
On the output end, there are two LEDs that are used in the project. Each LED represents 
the working condition of the system: the red LED indicates presence of an intruder whereas 
the green LED is the normal state of the system. The positive terminal of the red LED is 
connected to the negative terminal of the resistor. The positive terminal of the resistor is 
connected to the fourth pin of the Arduino Uno R3 board. The negative of the red LED is 
grounded. Similarly, the positive terminal of the green LED is connected to the negative 
terminal of the resistor. The positive terminal of the resistor is connected to the third pin of 
the Arduino Uno R3 board. The negative of the green LED is grounded. 
There is also a buzzer connected in order to alert the user in case of intruder presence. 
The positive terminal of the buzzer is connected to the positive terminal of the resistor 
and the negative terminal is grounded. Overall, the components above connected in this 
particular manner provide the successful functioning of the system. 

## Conclusion 
Overall, this project is successful in making a working model of an IoT-based ecosystem that 
involves precise detection of movement and presence of intruders, an effective alarm system 
as well as a Bluetooth-based communication protocol that helps the user/owner to control the 
entire system with the help of an app on their own mobile device. With the presence of 
multiple sensors with different functions each, the security of the space will be very 
sophisticated, and the owner will be alerted immediately in case of breach. However, this 
project does hold some disadvantages that need to be modified as future scope. For example, 
the system can only be operated with the help of the mobile if the mobile is within 100 m of 
the Bluetooth module, which is very inconvenient provided the short range. That said, with 
the help of better equipment, the range of the system can be significantly increased. In 
conclusion, the project successfully demonstrates an Internet of Things (IoT)-based Home 
Security System. 
