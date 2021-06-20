int pin[]={1,2,3};
void setup() {
  // put your setup code here, to run once:
  for(int i = 0;i<3;i++){
      pinMode(pin[i],OUTPUT);    
    }

}

void loop() {
  // put your main code here, to run repeatedly:
    for(int i = 0;i<3;i++){
      digitalWrite(pin[i], HIGH);
      delay(1000);  
          digitalWrite(pin[i], LOW);
      delay(1000); 
    }

    for(int i = 3;i<0;i--){ 
    }
}
