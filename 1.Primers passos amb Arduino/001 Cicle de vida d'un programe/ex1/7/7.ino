
void setup() 
{
 
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
 {
 {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(13);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(13);                      // wait for a second
}
}

