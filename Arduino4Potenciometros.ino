
const int analogInPin1 = 0;
const int analogInPin2 = 1;
const int analogInPin3 = 2;
const int analogInPin4 = 3;

int sensVal1 = 0; //Valor de cada pot
int sensVal2 = 0;
int sensVal3= 0;
int sensVal4 = 0;


void setup() {

  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  sensVal1 = analogRead(analogInPin1);
  sensVal1 = map(sensVal1, 0, 1023, 0, 255);
  sensVal2 = analogRead(analogInPin2);
  sensVal2 = map(sensVal2, 0, 1023, 0, 255);
  sensVal3 = analogRead(analogInPin3);
  sensVal3 = map(sensVal3, 0, 1023, 0, 255);
  sensVal4 = analogRead(analogInPin4);
  sensVal4 = map(sensVal4, 0, 1023, 0, 255);
  // put your main code here, to run repeatedly:
 Serial.print(sensVal1);
 Serial.print(",");
 Serial.print(sensVal2);
 Serial.print(",");
 Serial.print(sensVal3);
 Serial.print(",");
 Serial.print(sensVal4);
delay(50000);
}
