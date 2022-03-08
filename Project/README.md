# SMART BLIND STICK
---
# Table of content
1. About Smart Blind Stick

    1.1 Description
    
    1.2 Identifying features
    
    1.3 State of art
    
    1.4 5W's & 1H and S.W.O.T analysis
    
2. Requirements

    2.1 High level requirements
    
    2.2 Low level requirements
    
3. Block Diagram and Blocks explaination

    3.1 Block Diagram
    
    3.2 Sensors
    
    3.3 Actuators & Others
    
    3.4 Micro controller 
    
4. Architecture

    4.1 Behavioural Flowchart diagram
    
5.  Test plan and Output

    5.1 High level test plan
    
    5.2 Low level test plan
    
6. Application

8. Future Scope
---

# 1. About Smart Blind Stick
---
## 1.1 Discription
The Project is an  smart blind stick . Traditionally visually impaired people used a stick to find out if any obstacles are present in front of them. But this stick is inefficient in various aspects and the person using it has to face several problems. The objective of this project is to provide the visually impaired a better navigational tool. The ultrasonic blind walking stick is way more advanced than the traditional walking stick as the use of sensors makes object detection easier.
  The Ultrasonic sensor used in it is used to detect the obstacle in front of blind person within 50cm area.Thus this system allows for obstacle detection. Then another feature of this stick is to detect water on the ground by using water sensor. This stick also indicate day or night vision for blind person by using LDR sensor.
  
## 1.2 Identifying Featurs
  * It shall Detect the obstacle in front of blind person
  * It shall detect the water or sliperry road 
  * Wheb blind person enters into dark It shall detect 
  
## 1.3 State of art
  * This system will help all blind person
  * Further enhancement can sovle all probems of blind person
  *  Secure the blind person from any accident
  
## 1.4 5W's & 1H & S.W.O.T Analysis

 ### WHAT
 * Smart blind stick
 ### WHO
 * For blind Peoples
 ### WHEN
 * When Blind person want's to go anywhere
 ### WHERE 
 * On road,home,malls whenever blind person wants to go
 ### WHY
 * To help blind peoples and prevent there life from accident
 ### HOW
 * When there is obstacles or when blind person are about to go in dark area the system will notify blind person by beeping buzzer
 
 ## S.W.O.T Analysis
 ![Screenshot (332)](https://user-images.githubusercontent.com/86889916/155831454-e81f40e1-9f2e-4f88-8a71-899120d26b58.png)

 
# 2. Requirements

### 2.1 High level Requirements
---
| ID | Description | Status (Implemented) |
| --- | --- | --- |
| HLR1 |System ought to be capable to detect obstacle | To be done |
| HLR2 | System ought to be capable to detect light intensity | To be done |
| HLR3 |System shall detect water(mud hole) in front of blind person  | To be done |
| HLR4 | Power supply shall provide properly | to be done |

### 2.2 Low Level Requirements
---
| ID | Low Level Requirements for H1|       |ID | Low Level Requirements for H2|
| -------- | -------------- | ---- |-------- | -------------- |
| H1L1 | According to distance set in ultrasonic sensor system shall beep buzzer when obstacle comes|       |H2L1 | According to value set in LDR sensor system shall vibrate motor when dark comes|
       



| ID | Low Level Requirements for H3|  |ID | Low Level Requirements for H4|
| -------- | -------------- | ---- | -------- | -------------- |
| H3L1 | According to Threeshold value set in water sensor system shall beep buzzer when water comes in front of blind person|  | H4L1 | switch button shall swtich ON/OFF system whenever needed  |

# 3. Block Diagram and Blocks explaination 
---
## 3.1 BLOCK DIAGRAM
![Smart blind stick 1](https://user-images.githubusercontent.com/86889916/155707909-2fe9a051-3c1c-428c-b059-1ac7f855e2f4.png)

## 3.2 SENSORS
### Ultrasonic sensor 1
To detect small size of obstacles : pit, staircase, or stone, as it located at the lower side of the stick. After detecting the small size of obstacles on ground, this sensor will send the signal to the Arduino, as result it will send a voice instruction for small obstacle available. And at the same time it will enable the buzzer for informing the blind person about presence of obstacles on ground.
### Ultrasonic sensor 2
To detect large size of obstacles : person,car,tree,bycicle etc as it located at the upper side of the stick. After detecting the large size of obstacles , this sensor will send the signal to the Arduino, as result it will send a voice instruction for large obstacle available. And at the same time it will enable the buzzer for informing the blind person about presence of obstacles on ground.
### LDR sensor 
Light Dependent Resistor, changes its resistances due to change of the light intensity. When the blind person enter into the dark area the vibration motor will automatically vibrate notifying the blind person.
### Water sensor
A water sensor is located at the base or bottom of the stick to have precaution against the wet surface which it can causing slipping on the floor and thus can hurt. When the water sensor comes in contact of the wet surface, it produces an electrical signal which triggers the Arduino controller. A voice instruction for wet surface is produced and also a buzzer is enabled for alarming against a wet floor.

## 3.3 ACTUATORS AND OTHERS
### Vibrational DC motor
 vibrational DC motors take electrical power through direct current, and convert this energy into mechanical vibration.this will vibrate when water sensor sends a signal.
### Buzzer
A buzzer or beeper is an audio signaling device, which may be mechanical, electromechanical, or piezoelectric (piezo for short). Typical uses of buzzers and beepers include alarm devices, timers, and confirmation of user input such as a mouse click or keystroke.
### Switch Button
This switch button uses for to ON/OFF the power supply(mainly 5V battery) to prevent excess usage of battery.This switch button not used in simulide becuase aurdino doesn't need exeternal power supply in simulide,but in actual hardware system the power supply is must so there is need of this switch.
 
## 3.4 MICRO CONTROLLER
 This is the brain of the system here we use Atmega328 every computation is done inside this controller it converts analog to digital and maps certain values, it controls LCD display, it sends PWM signals to Fan and Stepper motor.
 
# 4. Architecture
---
###  4.1 Behavioural Flowchart diagram 

 ![flochart2](https://user-images.githubusercontent.com/86889916/155742310-230b9c26-2e39-4691-8112-7bc930f4c08f.png)
 
# 5. Test plan and Output
---


## 5.1 HIGH LEVEL TEST PLAN 

| Test ID | Description | Input | Expected output | Actual Output | Passed or not |
| --- | --- | --- | --- | --- | --- |
| 01 | Detecting Dark Area/Water/obstacles from sensors  | pulse  | Output detected | output detected  |  ✅ |
| 02 | DC motor  | Signal from controller |  Vibration |  Vibration |   ✅ |
| 03 |  Switch | ON/OFF | ON/OFF when needed | ON/OFF when needed | ✅ |
| 04 | Buzzer 1 | signal from controller | Beep when needed | Beep when needed |  ✅ |
| 05 | Buzzer 2 | signal from controller | Beep when needed | Beep when needed |  ✅ |

## 5.2 LOW LEVEL TEST PLAN

| Test ID for Ultrasonic sensor| Description | Input | Expected Output | Actual  Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Trig pin | Pulse  | HIGH |  HIGH | ✅ |
| 02 | Echo pin | Pulse | HIGH | HIGH | ✅ |
| 03 | Obstacle |distance <= 50cm && distance >= 0cm |beep the buzzer 2 |beep the buzzer 2  | ✅ |



| Test ID for LDR sesnsor| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 |  send signal| analog signal | HIGH | HIGH | ✅ |
| 01 |  threeshold intensity| <=200 && >=0 | Beep the buzzer 1 | beep the buzzer 1 | ✅ |



| Test ID for Water sensor| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | send signal | analog signal | HIGH |  HIGH | ✅ |
| 02 | threeshold value | >=100 | Vibrate motor |  Vibrate motor | ✅ |
| 03 | threeshold value | <100 | dont't vibrate motor |  dont't vibrate motor | ✅ |

# 6. APPLICATION
---
* Help blind people to easily walk to destination.

* Help blind people to obstacle detection.

* Alert blind people about  water holes and water slippary roads.

# 7. FUTURE SCOPE
---
* GSM attachment can help in immidiate casuality help

* The stick can be made foldable and more compact with the use of nano tech electronics and micro fabrication techniques.

* The stick can be made rechargeable by the use of smaller size batteries with high backup capacities.

* GPS can help blind person to source & destination route information.


  
 
