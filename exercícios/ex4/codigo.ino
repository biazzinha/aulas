int estadoBotao = 0;

void setup() {
  pinMode(12,OUTPUT);  
  pinMode(8,INPUT); 
}
 
void loop() {  
  estadoBotao = digitalRead(8);          
   
  if (estadoBotao == HIGH) {
    digitalWrite(12,HIGH);
  } else {
    digitalWrite(12,LOW);      
  }       
}

