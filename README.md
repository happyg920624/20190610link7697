# 20190610link7697
序列埠(Serial Port) 
void setup()
{
   Serial.begin(9600);

    
}

void loop()
{
   Serial.print("第1筆資料");
  delay(1000);
  Serial.print("第2筆資料");
  delay(1000);
  Serial.print("第3筆資料");
  delay(1000);
  Serial.println("第4筆資料");
  delay(1000);
  Serial.println("第5筆資料");
  delay(1000);
  Serial.print("第6筆資料");
  delay(1000);

}
------------------------------------------------------
void setup()
{
   Serial.begin(9600);

    
}

void loop()
{
   Serial.print("第1筆資料");
  delay(1000);
  Serial.print("第2筆資料");
  delay(1000);
  Serial.print("第3筆資料");
  delay(1000);
  Serial.println("第4筆資料");
  delay(1000);
  Serial.println("第5筆資料");
  delay(1000);
  Serial.print("第6筆資料");
  delay(1000);

}
--------------------------------------
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
