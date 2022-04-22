
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
