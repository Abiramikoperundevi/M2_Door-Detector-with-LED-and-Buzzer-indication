# M2_Door-Detector-with-LED-and-Buzzer-indication


![HTB141ENXy6guuRkSnb4q6zu4XXaJ](https://user-images.githubusercontent.com/101585225/164284238-0689f3b4-c214-4c38-9c18-31a6094e98ff.jpg)

A detector is associated with following attributes:
```
 * ATMEGA328
 * VOLTMETER
 * LED
 * SWITCH
 * RESISTOR
 * BUZZER
 * FIXED VOLT
 * AMPMETER
```
### Write seperate functions to perform the following operations:
* Create an Simulation file for detecting the door is opened or not
* Add LED for the indication purpose.
* Here I use switch as the door sensor
* while the switch is open, the LED produce the glow
* And also add Buzzer for the indication purpose
* while the switch is open, the Buzzer produce the beep sound.
* If switch is closed means the LED will not glow and the buzzer does not produce the beep sound.
* I use the voltmeter for the purpose of shown how much of voltage is produce accross the buzzer and LED.
* Ampmeter is connected accross the switch (Fixed Volt) it will show the current value

## Guidelines
* Use Simulide software for simulation purpose and for coding purpose use the visual studio code.
* Return appropriate results from all the functions.
* Follow Modular programming and multifile approach
* Create Makefile with targets for compiling and testing, analysis and coverage.
* Follow best practices while writing the code.

# Badges

* Codacy - static code analysis

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/260bfa484cba44d8954573f43132f5cd)](https://www.codacy.com/gh/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication&amp;utm_campaign=Badge_Grade)


* Codiga - Static analysis

![Codiga Badge](https://api.codiga.io/project/32888/score/svg)

![Codiga Badge](https://api.codiga.io/project/32888/status/svg)

* cppcheck action

[![cppcheck-action](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/cppcheck-action.yml/badge.svg)](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/cppcheck-action.yml)

* Build - Windows

[![Build CI - Windows](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/Build_Windows.yml/badge.svg)](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/Build_Windows.yml)

* Build - Linux

[![Build CI -Linux](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/Build_Linux.yml/badge.svg)](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/Build_Linux.yml)

* Analysis

[![Analysis](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/Analysis.yml/badge.svg)](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/Analysis.yml)

* Git Inspector

[![Contribution Check - Git Inspector](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/git_inspector.yml/badge.svg)](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/git_inspector.yml)

* Valgrind

[![Valgrind](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/Valgrind.yml/badge.svg)](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/Valgrind.yml)

* Unit Testing

[![Unit testing](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/unit-test.yml/badge.svg)](https://github.com/Abiramikoperundevi/M2_Door-Detector-with-LED-and-Buzzer-indication/actions/workflows/unit-test.yml)

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`0_Abstract`       | Documents detailing about the project
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation and deoxygen document
`4_TestCases`      |test plans and procedures
`5_Report`         |Document consisting the evaluation sheet
`6_Output`         | Output images and Hexa files

# DOOR DETECTOR WITH LED AND BUZZER INDICATION
## IN ACTION

### SWITCH OFF AND DOOR IS CLOSED
![Switch OFF and Door is closed](https://user-images.githubusercontent.com/101585225/164526854-e9350580-3b7f-43dc-9cff-02d4bea04c64.png)

### SWITCH ON AND DOOR IS CLOSED

 ![Switch ON and Door is Closed](https://user-images.githubusercontent.com/101585225/164526957-d78c3f6f-284d-4e86-8372-6ecda0604d17.png)

### SWITCH ON AND DOOR IS OPEN
![Switch ON and Door is open](https://user-images.githubusercontent.com/101585225/164527049-573623b1-8cd6-4080-b715-057b51b2b9c3.png)


## Integrated Tools to GitHub
*  [Codacy](https://www.codacy.com/)

## GitHub Actions
* Build using Make for CI
* Unit tests with Cunit
* Static code analysis using cppcheck
* Dynamic Code analysis using Valgrind


## Learning Resources
1. [markdownCheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [markdownBasics](https://guides.github.com/features/mastering-markdown/)
3. [git inspector](https://github.com/ejwa/gitinspector.git)
4. [github workflow](https://docs.github.com/en/actions/learn-github-action)


