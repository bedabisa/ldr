int analogInPin = A0;
int led1        = D1;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(analogInPin);
  Serial.print("Nilai Sensor Cahaya = ");
  Serial.println(sensorValue);
  delay(200);
  
if(sensorValue <= 350){
    digitalWrite(led1, HIGH);
  }
  else{
    digitalWrite(led1, LOW);
  }
}
