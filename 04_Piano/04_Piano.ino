int incomingByte = 0;

int piezoPin = 12;

int Do = 262;

int re = 294;

int mi = 330;

int pa = 349;

int sol = 392;

int ra = 440;

int si = 494;

int doo = 523;

 

void setup() {

  Serial.begin(9600);

  pinMode(piezoPin, OUTPUT);

 

}

 

void loop() {

 if(Serial.available() > 0){

  

  incomingByte = Serial.read();

  

 

  if (incomingByte == '1')

  {

    tone(piezoPin,Do,1000);

  }

 

  if (incomingByte == '2')

  {

    tone(piezoPin,re,1000);

  }

  if (incomingByte == '3')

  {

    tone(piezoPin,mi,1000);

  }

   if (incomingByte == '4')

  {

    tone(piezoPin,pa,1000);

  }

   if (incomingByte == '5')

  {

    tone(piezoPin,sol,1000);

  }

    if (incomingByte == '6')

  {

    tone(piezoPin,ra,1000);

  }

    if (incomingByte == '7')

  {

    tone(piezoPin,si,1000);

  }

   if (incomingByte == '8')

  {

    tone(piezoPin,doo,1000);

  }

   if (incomingByte == '0')

  {

    noTone(piezoPin);

  }

 }

}
