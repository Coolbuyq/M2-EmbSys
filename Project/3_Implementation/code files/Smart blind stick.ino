#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int speaker = 13;
const int ldrPin = A0; //define ldr sensor to pin A1 
const int waterSens = A1;//define water sensor to pin A1 
const int motor = 8;//define speaker to pin 8 
int SensorValue;//create sensor data variable 
int const trigPin = 10; 
int const echoPin = 9;

int const buzzPin = 7;

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  
Serial.begin(9600);

pinMode(speaker, OUTPUT);

pinMode(ldrPin, INPUT);

pinMode(motor, OUTPUT);     //set speaker as an output 
pinMode(waterSens, INPUT); //set water sensor as an input



pinMode(trigPin, OUTPUT);     //trig pin will have pulses output 
pinMode(echoPin, INPUT);       //echo pin should be input to get pulse width 
pinMode (buzzPin, OUTPUT);      // buzz pin is output to control buzzering
}
void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 200) {      //if dark detected then on the speaker

digitalWrite(speaker,HIGH);

Serial.print("Its DARK,Beep the buzzer : ");

Serial.println(ldrStatus);
delay(200);

}else {

digitalWrite(speaker, LOW);

Serial.print("Its BRIGHT,dont Beep the buzzer: "); // else don't beep the buzzer

Serial.println(ldrStatus);
delay(200);
}
int sensorValue = analogRead(waterSens);     //read the water sensor value

if (sensorValue >= 100) {

digitalWrite(motor, HIGH);        //if the sensor senses water then vibrate the motor
Serial.print("Water detected,vibrate the moto: ");

Serial.println(sensorValue);
delay(2000);
}
else{
digitalWrite(motor, LOW);
Serial.print("water not detected,dont vibrate the motor: ");

Serial.println(sensorValue);// else don't vibrate
delay(2000);

}     

        
        
// Duration will be the input pulse width and distance will be the distance to the obstacle in centimeters
int duration, distance;

//Output pulse with 1ms width on trigPin

digitalWrite(trigPin, HIGH);

delay(1);

digitalWrite(trigPin, LOW);

//Measure the pulse input in echo pin

duration=pulseIn(echoPin, HIGH);

//Distance is half the duration devided by 29.1(from datasheet)

distance=(duration/2)/29.1;
lcd.setCursor(0,1);
lcd.print(distance);
lcd.print("cm");

// if distance less than 0.5 meter and more than 0 (0 or less means over range)

if (distance <= 50 && distance >= 0) {

// Buzz

tone(buzzPin, 1200,1200);
delay(200);
tone(buzzPin,1200,800);

}else {

// Don't buzz

digitalWrite(buzzPin, LOW);
}
//Waiting 60ms won't hurt any one
delay(60);
}
