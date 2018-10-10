

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
    Serial.println("red color is turning on...");
    renkAyarla(0,0,0);
    renkAyarla(255,0,0);
  }
  if (receivedChar=='b') {
    for(int i = 0; i<30000; i=i+0.25){
    Serial.println("green color is turning on...");
    Serial.println("random color is turning on...");
    renkAyarla(255,0,0);
    delay(50);
    renkAyarla(0,0,0);
    delay(50);
    renkAyarla(255,0,0);
    delay(50);
    renkAyarla(0,0,0);
    delay(50);
    renkAyarla(255,0,0);
    delay(50);
    renkAyarla(0,0,0);
    delay(500);
    renkAyarla(0,0,255);
    delay(50);
    renkAyarla(0,0,0);
    delay(50);
    renkAyarla(0,0,255);
    delay(50);
    renkAyarla(0,0,0);
    delay(50);
    renkAyarla(0,0,255);
    delay(50);
    renkAyarla(0,0,0);
    delay(500);
    }
  }  
  if (receivedChar=='c') {
    Serial.println("blue color is turning on...");
    renkAyarla(0,0,0);
    renkAyarla(0,0,255);
    
  }  
 
   
   
  
 
   
  
 newData = false;
 }
 
}
void renkAyarla(int kirmizi, int yesil, int mavi)

{

 analogWrite(kirmiziPin, kirmizi);
 analogWrite(yesilPin, yesil);
 analogWrite(maviPin, mavi);
}
