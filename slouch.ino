int flexSensor = A0;
  int Buzzer = D0;
  int Led = D4;
//const flexValueMin =0 ;
//const flexValueMax =360 ;
//R.S.Automation

void setup() {
  Serial.begin(9600);
  pinMode(Led, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop() {
 
  flexSensor = analogRead(A0);
  int bendRange= map (flexSensor,875,935,0,5);
  switch (bendRange) {
    case 0:  // Stading Straight
      Serial.println(flexSensor);
      digitalWrite(Buzzer, HIGH);
      digitalWrite(Led, HIGH);
      delay(1000);
      digitalWrite(Buzzer,LOW);
      digitalWrite(Led, LOW);
      delay(1000);
      break;
    case 1:  // bending in 200 degree
      Serial.println(flexSensor);
      digitalWrite(Buzzer, HIGH);
      digitalWrite(Led, HIGH);
      delay(500);
      digitalWrite(Buzzer, LOW);
      digitalWrite(Led, LOW);
      delay(500);
      break;
    case 2:  // 300 degree
      Serial.println(flexSensor);
      digitalWrite(Buzzer, HIGH);
      digitalWrite(Led, HIGH);
      delay(250);
      digitalWrite(Buzzer, LOW);
      digitalWrite(Led, LOW);
      delay(250);
      break;
    case 3:  // 
      Serial.println(flexSensor);
      digitalWrite(Buzzer, HIGH);
      digitalWrite(Led, HIGH);
      delay(125);
      digitalWrite(Buzzer, LOW);
      digitalWrite(Led, LOW);
      delay(125);
      break;
    case 4:  // 
      Serial.println(flexSensor);
      digitalWrite(Buzzer, HIGH);
      digitalWrite(Led, HIGH);
      delay(65);
      digitalWrite(Buzzer, LOW);
      digitalWrite(Led, LOW);
      delay(65);
      break;
    case 5:  // full bend
      Serial.println(flexSensor);
      digitalWrite(Buzzer, HIGH);
      digitalWrite(Led, HIGH);
      delay(20);
      digitalWrite(Buzzer, LOW);
      digitalWrite(Led, LOW);
      delay(20);
      break;

    
  }
  delay(10);  // delay for loop

}