
# 1. BLOCK DIAGRAM & BLOCK EXPLAINATION
---
## 1.1 BLOCK DIAGRAM
![Smart blind stick 1](https://user-images.githubusercontent.com/86889916/155707909-2fe9a051-3c1c-428c-b059-1ac7f855e2f4.png)

## 1.2 SENSORS
### Ultrasonic sensor 1
To detect small size of obstacles : pit, staircase, or stone, as it located at the lower side of the stick. After detecting the small size of obstacles on ground, this sensor will send the signal to the Arduino, as result it will send a voice instruction for small obstacle available. And at the same time it will enable the buzzer for informing the blind person about presence of obstacles on ground.
### Ultrasonic sensor 2
To detect large size of obstacles : person,car,tree,bycicle etc as it located at the upper side of the stick. After detecting the large size of obstacles , this sensor will send the signal to the Arduino, as result it will send a voice instruction for large obstacle available. And at the same time it will enable the buzzer for informing the blind person about presence of obstacles on ground.
### LDR sensor 
Light Dependent Resistor, changes its resistances due to change of the light intensity. When the blind person enter into the dark area the vibration motor will automatically vibrate notifying the blind person.
### Water sensor
A water sensor is located at the base or bottom of the stick to have precaution against the wet surface which it can causing slipping on the floor and thus can hurt. When the water sensor comes in contact of the wet surface, it produces an electrical signal which triggers the Arduino controller. A voice instruction for wet surface is produced and also a buzzer is enabled for alarming against a wet floor.

## 1.3 ACTUATORS AND OTHERS
### Vibrational DC motor
 vibrational DC motors take electrical power through direct current, and convert this energy into mechanical vibration.this will vibrate when water sensor sends a signal.
### Buzzer
A buzzer or beeper is an audio signaling device, which may be mechanical, electromechanical, or piezoelectric (piezo for short). Typical uses of buzzers and beepers include alarm devices, timers, and confirmation of user input such as a mouse click or keystroke.
### Switch Button
This switch button uses for to ON/OFF the power supply(mainly 5V battery) to prevent excess usage of battery.This switch button not used in simulide becuase aurdino doesn't need exeternal power supply in simulide,but in actual hardware system the power supply is must so there is need of this switch.
 
## 1.4 MICRO CONTROLLER
 This is the brain of the system here we use Atmega328 every computation is done inside this controller it converts analog to digital and maps certain values, it controls LCD display, it sends PWM signals to Fan and Stepper motor.

#  2. Architecture
  ## 2.1 Behavioural Diagram

 ![flochart2](https://user-images.githubusercontent.com/86889916/155742310-230b9c26-2e39-4691-8112-7bc930f4c08f.png)
 
 ## 2.2 Structural Diagram
 ![structural diagram](https://user-images.githubusercontent.com/86889916/157058695-2675a975-8a5c-48e6-92bd-6150e706aea2.png)

