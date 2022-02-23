// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);//para os dois piscarem juntos, tem que colocar um embaixo do outro
  delay(200); 
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(200); 
}
