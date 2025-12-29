#include <SoftwareSerial.h>

SoftwareSerial mySerial(10,5);;

void setup() {

}

mySerial.begin(9600);

Serial.begin(9600);

pinMode(13, OUTPUT);//HELMET ALERT

pinMode(11, OUTPUT); //VEHICLE

pinMode(7, OUTPUT);//ALCOHOL ALERT

pinMode(3, OUTPUT);//VIBRATION ALERT

pinMode(12, INPUT); //ALCOHOL SENSOR

pinMode(8, INPUT); //VIBRION SENSOR

pinMode(4, INPUT); //HELMET SENSOR(IR)

void loop() {

int gasDetected = digitalRead(12);

int vibrationDetected = digitalRead(8);

int helmetDetected = digitalRead(4);

if (helmetDetected == 1) {

digitalWrite(13, LOW);

} else {

digitalWrite(11, LOW);//VEHICLE STOP

digitalWrite(13, HIGH);//HELMET ALERT

Serial.println("Please Wear Helmet"); }

if (gasDetected == 1) {

Serial.println("ALCOHOL ALERT");

// digitalWrite(7, HIGH);//ALCOHOL ALERT
digitalWrite(11, LOW);//VEHICLE STOP

for (int i = 0; i < 3; i++) {

digitalWrite(7, HIGH);//ALCOHOL ALERT

delay(50);

digitalWrite(7, LOW);

delay(50); }

} else {

digitalWrite(7, LOW);

if (helmetDetected == 1 && gasDetected == 0)

digitalWrite(11, HIGH); // VEHICLE ON

Serial.println("VEHICLE IS WORKING FINE");

digitalWrite(13, LOW); // HELMET ALERT OFF

}}

if (vibrationDetected == 1)

Serial.println("VIBRATION ALERT");

digitalWrite(11, LOW);//VEHICLE STOP

for (int i=1; i < 3; i++) {

}

digitalWrite(3, HIGH);//IMPACT ALERT delay(50);

digitalWrite(3, LOW);

delay(50);

SendMessage();

RecieveMessage();

delay(500);

}

void RecieveMessage() {mySerial.println("AT+CNMI=2,2,0,0,0");

delay(1000);

void SendMessage() {

mySerial.println("AT+CMGF=1");

delay(1000);

mySerial.println("AT+CMGS=\"+91xxxxxxxxxx\"\r");

delay(1000);

mySerial.println("Accident Detected: Vehicle ID: 38295");

delay(100);

mySerial.println((char) 26);

delay(1000);

}
