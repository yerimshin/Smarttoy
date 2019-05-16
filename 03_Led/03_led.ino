int incomingByte = 0;    // for incoming serial data

void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
    // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
  
    // read the incoming byte:
    incomingByte = Serial.read();
    if (incomingByte == '1')
    {
       digitalWrite(LED_BUILTIN, HIGH);
       Serial.print("on");
    }

    else if (incomingByte == '0')
    {
       digitalWrite(LED_BUILTIN, LOW);
    }
    
  }
}
