int sensorPin = A1; 
int sensorValue;  
int limit = 700; 

void setup() {
 Serial.begin(9600);
 pinMode(10, OUTPUT);
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.println("Analog Value : ");
 Serial.println(sensorValue);
 
 if (sensorValue>limit) {
 digitalWrite(10, LOW); 
 }
 else {
 digitalWrite(10, HIGH); 
 }
 
 delay(1000); 
}
