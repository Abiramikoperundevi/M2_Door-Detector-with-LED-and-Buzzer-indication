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
# WORKING PRINCIPLE :

After wiring and connecting all of the devices and connecting them to the switch,check all of the necessary setups to see if anything is missing. Following the connection setup, In the next step is to submit/upload the code to the microcontroller and power up the circuit. After upload the code,press the simulatation button once the system is turns ON,press the fixed volt to turn on.when the switch is open the led starts blinking which denotes the door is opened and when the switch is closed the buzzer turns on and make a sound which denotes the door is closed.

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
   
## Data Transistion Flow
![Data Transistion Flow](https://user-images.githubusercontent.com/101585225/164588898-d5ce0f45-8c1d-4ae0-8541-1eaffc334bd2.png)
# Steps to build the code
- Including required libraries.
- Then in main function assign pinB1 as input to do this we have to set logic = 0.
- To assign logic 0 in port B, we have to use DDRB (Data Direct Register) and to not disturb other pins we are using masking technique by assigning 1 to other pins by using -DDRB=DDRB&0b11111101 command which is binary representation of HEX value which represents second bit as low and others as high.
- To assign pinC6 as output to do this we have to set logic = 1.
- To assign logic 1 in port C ,we have to use DDRC (Data Direct Register) and to not disturb other pins we are using masking technique by assigning 0 to other pins by using DDRC=DDRC|0b01000000 command which is binary representation of HEX value which represents sixth bit as high and others as low.
- Then in while loop we have to continuosly monitor and compare value of pinB with given input and if switch is open the pinB will receive 0b00000010 input thus making the LED connected to port C high and glowing it.
- if switch is closed the pinB will not receive any input thus LED connected to port C gets low and it will not glow.
- To assign logic 0 in port B, we have to use DDRD (Data Direct Register) and to not disturb other pins we are using masking technique by assigning 1 to other pins by using -DDRD=0xff command which is binary representation of HEX value which represents second bit as low and others as high.
- To assign pinD1 as output to do this we have to set logic = 1.
- To assign logic 1 in port D ,we have to use DDDC (Data Direct Register) and to not disturb other pins we are using masking technique by assigning 0 to other pins by using DDRD=0x00 command which is binary representation of HEX value which represents sixth bit as high and others as low.
- Then in while loop we have to continuosly monitor and compare value of pinB with given input and if switch is open the pinB will receive 0xff input thus making the Buzzer connected to port D high and Produce the buzzer sound.
- if switch is closed the pinB will not receive any input thus Buzzer connected to port D gets low and it will not Produce any beep sound.

# Steps to run the simulation and Steps to verify the working of code.
- After wrinting the code in any interpreter in any language we have to compile that code file.
- After compiling code we have to generate and burn that file to a HEX file as microcontroller only understands values in 1 and 0.
- Then designing our circuit in an simulator and load that HEX file into our microcontroller and check/compare the generated output with expected one.




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

# SYSTEM ARCHITECTURE

![SYSTEM ARCITECTURE](https://user-images.githubusercontent.com/101585225/164519165-8dbd5f8f-1f6c-455a-bca1-ccf6498f11be.jpg)

# FLOW CHART

![Structural Diagram drawio](https://user-images.githubusercontent.com/101585225/164519321-6fce1e0c-de38-4448-aade-03e3927c006b.png)

# PROJECT OUTPUTS

## SWITCH OFF DOOR IS CLOSED
![Switch OFF and Door is closed](https://user-images.githubusercontent.com/101585225/164519560-6b2949d8-5775-4856-8d2e-71dbf038b003.png)

## SWITCH ON DOOR IS CLOSED
![Switch ON and Door is Closed](https://user-images.githubusercontent.com/101585225/164519644-34828199-7208-44a8-9e2b-ec5c243baa05.png)

## SWITCH ON DOOR IS OPEN
![Switch ON and Door is open](https://user-images.githubusercontent.com/101585225/164519736-b3238f2e-75c5-440c-ac87-4d459763fabd.png)

# M2-DOOR_DETECTOR_WITH_LED_AND_BUZZER_INDICATION

##  High level test plan
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Integrate Switch (as Door Sensor) with Microcontroller |  None | Succesful Integration |Succesful Integration|Requirement based |
|  H_02       |Integrate Buzzer with Microcontroller|  None | Succesful Integration |Succesful Integration|Requirement based |
|  H_03       |Integrate LED with Microcontroller|  None | Succesful Integration |Succesful Integration|Requirement based |


##  Low level test plan

| **Test ID** | **Description**       | **Exp I/P** | **Exp O/P** | **Actual Output** |**Type Of Test**  |   
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | Use Switch (as Door Sensor) to give input to the Aurdino|  -  | -|-|Requirement based |
|  L_02       | Detect the door is opened |  For simulation : Expected input for Door sensor is given with help of potentiometer  | LED Turns on|LED Turns on|Requirement based |
|  L_03       | To power the buzzer if the door is opened | The door is opened through the switch |Buzzer sound| Buzzer Sound |Requirement based    |

# ADVANTAGE :


* Energy saving 
* Hygiene control




# DISADVANTAGE :

* Maintenance
* cleaning





