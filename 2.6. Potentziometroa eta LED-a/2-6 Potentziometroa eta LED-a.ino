/* POTENTZIOMETROA
  Arduino UNOaren 0 pin analogikoan potentziometroaren irakurketa egin da.
  LED-a proportzioan piztu
  by Axpi
  This example code is in the public domain.
*/
int sensorPin = 0;
int balioa = 0;
int LED = 5;

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() {
  balioa = analogRead(sensorPin);
  Serial.print("Sentsorearen balioa=   ");
  Serial.println(balioa);
  
  balioa = map(balioa, 0, 1023, 0, 255);
  balioa = constrain(balioa, 0, 255);
  
  analogWrite(LED,balioa);
  delay(50);
}
