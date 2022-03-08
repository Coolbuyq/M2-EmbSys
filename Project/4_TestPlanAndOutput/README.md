

# HIGH LEVEL TEST PLAN 

| Test ID | Description | Input | Expected output | Actual Output | Passed or not |
| --- | --- | --- | --- | --- | --- |
| 01 | Detecting Dark Area/Water/obstacles from sensors  | pulse  | Output detected | output detected  |  ✅ |
| 02 | DC motor  | Signal from controller |  Vibration |  Vibration |   ✅ |
| 03 |  Switch | ON/OFF | ON/OFF when needed | ON/OFF when needed | ✅ |
| 04 | Buzzer 1 | signal from controller | Beep when needed | Beep when needed |  ✅ |
| 05 | Buzzer 2 | signal from controller | Beep when needed | Beep when needed |  ✅ |

#  LOW LEVEL TEST PLAN

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


