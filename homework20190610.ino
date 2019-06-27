

void setup()
{
    pinMode(2, INPUT);
  Serial.begin(9600);
    pinMode(7, INPUT);
  Serial.begin(9600);
    

  pinMode(LED_BUILTIN, OUTPUT);
    
}

void loop()
{
   if (HIGH == digitalRead(2)) {
    Serial.println("Turn on");
    digitalWrite(LED_BUILTIN, HIGH);

  } else {
    Serial.println("Turn off");
    digitalWrite(LED_BUILTIN, LOW);
  } 
    
}
