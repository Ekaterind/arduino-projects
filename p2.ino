void setup() {
  // put your setup code here, to run once:
  pinMode(PC7,OUTPUT);
  pinMode(PA7,OUTPUT);
  pinMode(PA6,OUTPUT);
  pinMode(PB10,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:  
  if(digitalRead(PB10)){
    digitalWrite(PC7,HIGH);
    delay(500);
    digitalWrite(PC7,LOW);
    delay(500);
    digitalWrite(PA7,HIGH);
    delay(500);
    digitalWrite(PA7,LOW);
    delay(500);
  }else{
      digitalWrite(PA6,HIGH);
      delay(500);
      digitalWrite(PB6,LOW);
      delay(500);
  }
}