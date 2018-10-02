

const int kirmiziPin = 9;
const int yesilPin = 10;
const int maviPin = 11;
char receivedChar;
boolean newData = false;

void setup() {
;
 Serial.begin(9600);
 Serial.println("<Arduino is ready>");
}

void loop() {
 recvOneChar();
 showNewData();
}

void recvOneChar() {
 if (Serial.available() > 0) {
 receivedChar = Serial.read();
 newData = true;
 }
}

void showNewData() {
 if (newData == true) {
  if (receivedChar=='a') {
    Serial.println("kirmizi yakiliyor");
    renkAyarla(255,0,0);
  }
  if (receivedChar=='b') {
    Serial.println("yesil yakiliyor");
    renkAyarla(0,255,0);
    
  }  
  if (receivedChar=='c') {
    Serial.println("mavi yakiliyor");
    renkAyarla(0,0,255);
    
  }  
 
   
  
 newData = false;
 }
 
}
void renkAyarla(int kirmizi, int yesil, int mavi)

{
 kirmizi = 255 - kirmizi;
 yesil = 255 - yesil;
 mavi = 255 - mavi;
 analogWrite(kirmiziPin, kirmizi);
 analogWrite(yesilPin, yesil);
 analogWrite(maviPin, mavi);
}

