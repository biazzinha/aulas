void setup()
{
  pinMode(2, OUTPUT);//verde 1 carro 
  pinMode(3, OUTPUT);//amarelo 1 carro
  pinMode(4, OUTPUT);//vermelho 1 carro 
  pinMode(5, OUTPUT);//verde 1 pedestre
  pinMode(6, OUTPUT);//vermelho 1 pedestre
  pinMode(7, OUTPUT);//verde 2 carro
  pinMode(8, OUTPUT);//amarelo 2 carro
  pinMode(9, OUTPUT);//vermelho 2 carro
  pinMode(10, OUTPUT);//verde 2 pedestre
  pinMode(11, OUTPUT);//vermelho 2 pedestre
 
}

void loop()
{
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(8, LOW);
 digitalWrite(11, LOW);
  
 digitalWrite(2, HIGH);
 digitalWrite(6, HIGH);
  digitalWrite(4, LOW);
 digitalWrite(5, LOW);

  delay(3000);
    
 digitalWrite(2, LOW);
 digitalWrite(3, HIGH);

  delay(3000);

 digitalWrite(9, LOW);
 digitalWrite(10, LOW);
 digitalWrite(7, HIGH);
 digitalWrite(11, HIGH);
  
 digitalWrite(3, LOW);
 digitalWrite(6, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);

  delay (3000);
  
 digitalWrite(7, LOW);
 digitalWrite(8, HIGH);
  
  delay (3000);
}
