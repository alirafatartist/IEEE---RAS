#define bz 6
#define led 10
int dotTime = 200;
int dashTime = 600; // dashtime = 3 * dottime

void bzPlay(int t){
  tone(bz, 400, t);          // شغل البازر
  digitalWrite(led, HIGH);   // نوّر الليد
  delay(t);                  // مدة النقطة أو الشرطة
  digitalWrite(led, LOW);    // اطفي الليد
  noTone(bz);                // اطفي البازر
  delay(dotTime);            // مسافة بين عناصر نفس الحرف
}

void setup() {
  // put your setup code here, to run once:
  pinMode(bz, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //The word is "ALI"
  
  bzPlay(dotTime);
  bzPlay(dashTime);
  delay(dotTime * 2);

  bzPlay(dotTime);
  bzPlay(dashTime);
  bzPlay(dotTime);
  bzPlay(dotTime);
  delay(dotTime * 2);

  bzPlay(dotTime);
  bzPlay(dotTime);
  delay(dotTime * 4);
  noTone(bz);
}
