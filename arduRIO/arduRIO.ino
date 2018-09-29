



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
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    Serial.println("a geliyi");
  }
  if (receivedChar=='b') {
    
    Serial.println("b geliyi");
  }  
  if (receivedChar=='c') {
    
    Serial.println("c geliyi");
  }  
 
   
  
 newData = false;
 }
}

