/*
based on Blink sketch example
but with ATtiny45(ATtiny85)
"original" sketch by niq_ro from Romania :D
http://www.tehnic.go.ro
http://nicuflorica.blogspot.ro/
http://arduinotehniq.blogspot.com/
*/

byte led1 = 2;   // phisical pin 7
byte led2 = 1;   // phisical pin 6
byte led3 = 0;   // phisical pin 5

int timp = 10000;
int pauza = 10000;
int timp1, timp2;
long timp0, pauza0;
int timp3 = 50;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     

  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
}

// the loop routine runs over and over again forever:
void loop() {
  
timp1 = analogRead(A3);  // read value from phisical pin 2
delay(5);
timp2 = analogRead(A2);  // read value from phisical pin 3
delay(5);

//timp0 = timp * timp1 /1023;
//timp0 = 1000 * timp1 /1023;
timp0 = analogRead(A3)/500;
if (timp0 < 25) timp0 = 25;

//pauza0 = pauza * timp2 /1023;
//pauza0 = 1000 * timp2 /1023;
pauza0 = timp2 / 4;
if (pauza0 < 25) pauza0 = 25;

  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(timp0);               // wait for a little
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(pauza0);               // wait for a litle
//delay(timp3);

  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(timp0);               // wait for a little
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(pauza0);               // wait for a litle
//  delay(timp3);

  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  delay(timp0);               // wait for a little
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(pauza0);               // wait for a litle
//  delay(timp3);

}
