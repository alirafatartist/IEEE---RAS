// First Method
#define l1 0
#define l2 1
#define l3 2
#define l4 3
#define l5 4
#define l6 5
#define l7 6

void setup() {
  // put your setup code here, to run once:
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  pinMode(l7, OUTPUT);
  digitalWrite(l1, HIGH); 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(l1, HIGH); 
digitalWrite(l7, LOW);
digitalWrite(l1, LOW);
delay(100);
digitalWrite(l2, HIGH);
delay(100);
digitalWrite(l3, HIGH);
digitalWrite(l2, LOW);
delay(100);
digitalWrite(l4, HIGH);
digitalWrite(l3, LOW);
delay(100);
digitalWrite(l5, HIGH);
digitalWrite(l4, LOW);
delay(100);
digitalWrite(l6, HIGH);
digitalWrite(l5, LOW);
delay(100);
digitalWrite(l7, HIGH);
digitalWrite(l6, LOW);
}

 // Second Method
int leds[]={0,1,2,3,4,5,6};
int ledcount = 7;

void setup(){
  for(int i = 0;i<ledcount;i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop(){

  // from right to left
  for(int i = 0; i<ledcount; i++){
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }

  // from left to right
    for (int i = ledcount - 1; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }
}