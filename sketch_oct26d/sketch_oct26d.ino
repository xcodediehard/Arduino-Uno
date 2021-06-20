int a = 10;
int b = 0;

void setup() {
  // put your setup code here, to run once:
DDRD = B00011110;
PORTD = B00011110;
}

void loop() {
  // put your main code here, to run repeatedly:
a= ~b;
PORTD = a;
}
