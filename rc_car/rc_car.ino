#include <SoftwareSerial.h>

 

SoftwareSerial BTSerial(4, 5);

 

int in1 = 9;

int in2 = 6;

int in3 = 10;

int in4 = 11;

 

int RSpeed = 205;

int LSpeed = 222;

 

char data;

 

void setup() {

  BTSerial.begin(9600);

}

 

void loop() {

  if (BTSerial.available()) {

    data = BTSerial.read();

 

    if (data == 'f') { //직진

      analogWrite(in1, RSpeed);

      analogWrite(in2, 0);

      analogWrite(in3, 0);

      analogWrite(in4, LSpeed);

    }

    if (data == 'r') { //우회전

      analogWrite(in1, 190);

      analogWrite(in2, 0);

      analogWrite(in3, 0);

      analogWrite(in4, LSpeed);

    }

    if (data == 'l') { //좌회전

      analogWrite(in1, RSpeed);

      analogWrite(in2, 0);

      analogWrite(in3,0);

      analogWrite(in4, 190);

    }

    if (data == 'b') { //후진

      analogWrite(in1, 0);

      analogWrite(in2, RSpeed);

      analogWrite(in3, LSpeed);

      analogWrite(in4, 0);

    }

    if (data == 's') { //정지

      analogWrite(in1, 0);

      analogWrite(in2, 0);

      analogWrite(in3, 0);

      analogWrite(in4, 0);

    }

  }

} 
 
