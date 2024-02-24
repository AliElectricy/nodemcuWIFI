WiFi Setup with ESP8266



This code is designed for an ESP8266 microcontroller using the Arduino framework. It facilitates the setup of WiFi connection by scanning for available networks, allowing the user to input the SSID and password through the Serial Monitor.

Prerequisites

Arduino IDE installed

ESP8266 board package installed in Arduino IDE



Libraries Used

ESP8266WiFi.h: For WiFi functionalities.

ESP8266WebServer.h: For handling web server functionalities (not used in this example).

DNSServer.h: For handling DNS functionalities (not used in this example).


How to Use

Open the Arduino IDE.

Install the ESP8266 board package if not already installed (File -> Preferences -> Additional Boards Manager URLs).

Select the appropriate ESP8266 board from the Tools -> Board menu.

Upload the code to the ESP8266.



Functionality

Scans for available WiFi networks and prints their SSIDs to the Serial Monitor.

Prompts the user to enter the SSID and password through the Serial Monitor.

Attempts to connect to the specified WiFi network.

Prints "WiFi connected" to the Serial Monitor when the connection is successful.



Usage

Open the Serial Monitor after uploading the code.

View the list of available WiFi networks.

Enter the desired SSID when prompted.

Enter the corresponding password when prompted.

Monitor the Serial Monitor for the "WiFi connected" message indicating a successful connection.



Important Notes

Ensure that the correct ESP8266 board is selected in the Arduino IDE.

The Serial Monitor baud rate is set to 115200.

Author:


Ali poorhoseini
