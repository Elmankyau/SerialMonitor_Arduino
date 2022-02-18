void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()) // if there is data comming
  {
    String command = Serial.readStringUntil('\n'); // read string until meet newline character

    if(command == "what is your name?")
    {
      Serial.println("My name is Arduino UNO R3"); // send action to Serial Monitor
    }
    
    if(command == "who made you?")
    {
      Serial.println("Elman");
    }
     if(command == "tell me a joke")
    {
      Serial.println("Why did the golfer bring two pairs of pants?");
      Serial.println("In case he got a hole in one");
      
    }
  }
}
