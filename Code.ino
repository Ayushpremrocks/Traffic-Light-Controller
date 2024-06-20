// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);//for green led
  pinMode(3, OUTPUT);//for yellow led
  pinMode(2, OUTPUT);//for red led
}

void loop()
{
  digitalWrite(4, HIGH);//turn on green light
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);//turn off green light
  delay(1000); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(3, HIGH);//turn on yellow light
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);//turn off yellow light
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(2, HIGH);//turn on red light
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);//turn off red light
  delay(1000); // Wait for 1000 millisecond(s)
}