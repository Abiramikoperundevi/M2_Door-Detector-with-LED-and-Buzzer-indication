# Introduction
## Door Detector with LED and Buzzer indication.

Door Detector acts as a security and indication system.It is avilable in the market in two piece form. One piece attaches on the door frame, and the other attaches parallel to the first piece on the door itself. The two parts create a closed circuit when the door is shut. As the door opens, the magnet and switch separate, breaking the circuit. When the circuit breaks, the sensor signals the central control panel and switch on the LED and Beep sound produced by Buzzer.In that it shows the voltage used by the circuit. 

![th (8)](https://user-images.githubusercontent.com/101585225/163981637-87d73a68-5b8d-4ec3-8676-2302d3e61eb4.jpg)

## Research:-
Door Detector with LED and Buzzer indication is a mini project which uses microcontroller ATmega328 and work as a indication system. 
 
# Softwares Used
* Visual Studio
* SimulIDE
* Aurdino IDE

# WORKING PRINCIPLE :

After wiring and connecting all of the devices and connecting them to the switch,check all of the necessary setups to see if anything is missing. Following the connection setup, In the next step is to submit/upload the code to the microcontroller and power up the circuit. After upload the code,press the simulatation button once the system is turns ON,press the fixed volt to turn on.when the switch is open the led starts blinking which denotes the door is opened and when the switch is closed the buzzer turns on and make a sound which denotes the door is closed.

## Component Description

### Power Supply:
- External source of power supply that powers all devices, switches and microcontroller

### Microcontroller:
- Performs all operations required by our system. Takes input the signals from the Fixed Voltage and gives output by turning on the LED and BUZZER

### Door Sensor
- A Door detector is a sensor designed to detect while the door is opened or not.

### Voltmeter
- A Voltmeter is and meter used to mesasure the voltage and potential difference bertween the two point and produce the count how much of voltage is used by the buzzer and LED for indication of the door opened or door closed

### LED
- Recieves signals from the switch used as Door Sensor and turn on when Door is Opened

### Buzzer
- Acts as a device to communicate with the user when door is opened

--------------------------------------

## SWOT

### Strengths
- Easy to understand the application and use it
- User friendly gadget
### Weakness 
- Implementation of existing system.
- More costlier gadget for common people

### Opportunities
- Used In Homes,Offices,High Buildings
- Can be used with other indicators also such as speaker.

### Threats
- Other sensors can be used which have greater efficiency.
- Many other similar applications available
----------------------------------------

 ## 4W's and 1'H :-
 ## Who:- 
   This tool is a helping hand for the people who have security concerns.
 ## Where:-
   Can be used at home,banks,hostels,organisations to keep a track on unknown entries.
 ## When:-
   Can be used to protect precious things.
 ## Why:-
   Designed for security systems.
 ## How:-
   By using C programming and SimulIDE.


# DETAIL REQUIREMENTS
## High Level Requirements-
|ID	        | Description	                                |Status
| :---         |     :---:      |          ---: |
|HL01	|To detect whether the door is opened or not	    |Implemented|
|HL02	|To provide warning in form of sound with help of Buzzer and Indicate using LED	    |Implemented|

## Low Level Requirements

| ID	       | DESCRIPTION    | STATUS        |
| :---         |     :---:      |          ---: |
|LLR1	       |  Interface switch(Door sensor) with ATMega328p |Implemented    |
|LLR2	       |Interface LED With ATMega328p   | Implemented  |
|LLR3	       |  Interface Buzzer with ATMega328p	   |Implemented   |

# ADVANTAGE :


* Energy saving 
* Hygiene control




# DISADVANTAGE :

* Maintenance
* cleaning
