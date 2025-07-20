#define Rledpin 11
#define Gledpin 7
#define Yledpin 3
#define buttonPin A0

void setup() {
  pinMode(Rledpin, OUTPUT);
  pinMode(Gledpin, OUTPUT);
  pinMode(Yledpin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(Rledpin, HIGH); 
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {  
    digitalWrite(Rledpin, LOW);          
    digitalWrite(Yledpin, HIGH);  
    delay(2000);       
    digitalWrite(Yledpin, LOW);  
    digitalWrite(Gledpin, HIGH);         
    delay(10000);                       
    digitalWrite(Gledpin, LOW);         
    digitalWrite(Yledpin, HIGH);  
    delay(2000);       
    digitalWrite(Yledpin, LOW);  
    digitalWrite(Rledpin, HIGH);                 
  }
}
