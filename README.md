# Aquaponics-Robotics-4-Project
This is a file of code that was used to create our aquaponics monitoring system that consist of the following:
* Temperature of the water
* Water level

  It also consist of a fish feeder that is autonomously and manually activated. This project is used to help the teachers and staff
help with taking care of the aquaponics system. This project will make their job easier by allowing them to monitor the aquaponics
system from their laptop /computer instead of going out and looking/taking tests for the system. This project is  specified
to the aquaponics system at our school, but it can be modififed if needed to suite the needs of others that use this project. 
## Getting Started
These are the supplies needed to recreate this project:
* ESP8266 which can be found here: [ESP8266 NodeMCU]( https://www.amazon.com/HiLetgo-Version-NodeMCU-Internet-Development/dp/B010O1G1ES/ref=sr_1_3?s=electronics&ie=UTF8&qid=1505504360&sr=1-3&keywords=esp8266)
* Temperature sensor which can be found here: [Temperature Sensor](https://www.sparkfun.com/products/11050)
* Arduino Uno which can be found here: [Arduino](https://www.amazon.com/MakerBest-Quality-Compatible-ATmega328P-Development/dp/B00Q6ZW4NO/ref=sr_1_7?s=electronics&ie=UTF8&qid=1505504649&sr=1-7&keywords=arduino+uno)
* Water level sensor which can be found here: [Waterh Level Sensor](https://www.amazon.com/uxcell-Pieces-ZP4510-Vertical-Switches/dp/B00FHAEBIA/ref=sr_1_3?s=industrial&ie=UTF8&qid=1505504811&sr=1-3&keywords=float+sensor)
* RTC "Real Time Clock" which can be found here: [RTC](https://www.amazon.com/DS3231-AT24C32-module-precision-Arduino/dp/B00HCB7VYS)

### Prerequisites
  For an IoT (Internet of Things) interface, we [Ubidots](https://ubidots.com/) to create a platform for the ESP8266 to send and receive
data from. This website allows you to customize your interface so that data can be shown in graphs or in tables. The website also allows you
to create  buttons that can be used to send HIGH or LOW values to the device. For example, we used a table to layout the temperatuer data
and we used a meter that consisted of values 1 - 5 in order to show the water level that the qauaponics system was at. We also used a button
to manually activate the fish feeder.

Here are the programs that will be needed:
* [Arduino IDE](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=1&cad=rja&uact=8&ved=0ahUKEwio8JOU_afWAhWGvLwKHVbQChoQFgglMAA&url=https%3A%2F%2Fwww.arduino.cc%2Fen%2FMain%2FSoftware&usg=AFQjCNHz_7o9OaPrjA55KOEPASoC8HSgK)

Here is the libraries needed in order to use the code:
* [Ubidots ESP8266 Library](https://github.com/ubidots/ubidots-esp8266-serial/archive/master.zip)
* [OneWire Library](https://github.com/PaulStoffregen/OneWire)
* [Dallas Temperature Library](https://github.com/milesburton/Arduino-Temperature-Control-Library)
* [Servo Library](https://github.com/arduino-libraries/Servo)

### Installing

