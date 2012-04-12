int ledPinEven = 2; 
int ledPinOdd = 3;
int buttonPin = 7;

int debugLedPin = 13;

int buttonState = LOW; 
boolean onFlag = false;

void setup(){
pinMode(ledPinEven, OUTPUT); 
pinMode(ledPinOdd, OUTPUT); 
pinMode(buttonPin, INPUT); 

pinMode(debugLedPin, OUTPUT); 
}  

void loop(){
  /*
digitalWrite(ledPinEven,HIGH);
digitalWrite(ledPinOdd,LOW); 
delay(1500); 
digitalWrite(ledPinEven,LOW); 
digitalWrite(ledPinOdd,HIGH);
delay(1500);
*/

buttonState = digitalRead(buttonPin);

if (buttonState == HIGH) {
  
  if (onFlag == false) {
    onFlag = true;
  } else {
    onFlag = false;
  }
} 

  if (onFlag == true) {
digitalWrite(debugLedPin,HIGH);

digitalWrite(ledPinEven,HIGH);
digitalWrite(ledPinOdd,LOW); 
delay(1500); 
digitalWrite(ledPinEven,LOW); 
digitalWrite(ledPinOdd,HIGH);
delay(1500);
  } else {
 digitalWrite(debugLedPin,LOW);
 

digitalWrite(ledPinOdd,LOW); 

digitalWrite(ledPinEven,LOW); 
  }
  
  delay(350);
}

