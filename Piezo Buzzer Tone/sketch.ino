#define btn A2
#define bz 6
void setup() {
  // put your setup code here, to run once:
  pinMode(bz, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(btn) == LOW ){
    // work with tone 440 for 500ms
    tone(bz, 440, 500);  
    delay(1000);  // استنى ثانية

    // نغمة 600Hz
    tone(bz, 600, 500);
    delay(1000);

    // نغمة 800Hz
    tone(bz, 800, 500);
    delay(1000);

    // وقف البازر
    noTone(bz);
    delay(1000);
  }
}
