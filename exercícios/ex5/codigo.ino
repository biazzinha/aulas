int estadoBotao = 0;

void setup() {
  pinMode(13,OUTPUT);  
  pinMode(12,INPUT); 
}
 
void loop() {  
  estadoBotao = digitalRead(12);    
  
  if (estadoBotao == HIGH) {
    digitalWrite(13,LOW);
  } else {
    digitalWrite(13,HIGH);
  }       
}

