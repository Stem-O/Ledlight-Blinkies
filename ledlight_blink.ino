int led_red = 0; // the red LED is connected to Pin 0 of the Arduino
int led_yellow = 1; // the yellow LED is connected to Pin 1 of the Arduino
int led_green = 2; // the green LED is connected to Pin 2 of the Arduino
int led_orange = 4; // the orange LED is connected to Pin 2 of the Arduino
int led_blue = 7; // the blue  LED is connected to Pin 2 of the Arduino
int led_white = 8; // the white LED is connected to Pin 2 of the Arduino

void setup() {
  // set up all the LEDs as OUTPUT
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_orange,OUTPUT);
    pinMode(led_blue,OUTPUT);
    pinMode(led_white,OUTPUT);
}

void loop() {
  
  //turn on white LED on and the other LEDs off
   digitalWrite(led_red, LOW); 
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, LOW);
   digitalWrite(led_orange, LOW);
    digitalWrite(led_blue, LOW);
   digitalWrite(led_white,HIGH);
  delay(2000); //wait 2 seconds
  
  //turn on blue LED on and the other LEDs off
   digitalWrite(led_red, LOW); 
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, LOW);
   digitalWrite(led_orange, LOW);
    digitalWrite(led_blue, HIGH);
  digitalWrite(led_white,LOW);
  delay(2000);    // wait 2 seconds
  
  //turn the orange LED on and the other LEDs off
   digitalWrite(led_red, LOW); 
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, LOW);
   digitalWrite(led_orange, HIGH);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_white,LOW);
  delay(2000);    // wait 2 seconds
  
  // turn the green LED on and the other LEDs off
  digitalWrite(led_red, LOW); 
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, HIGH);
    digitalWrite(led_orange,LOW);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_white,LOW);
  delay(2000);    // wait 2 seconds
  
  // turn the yellow LED on and the other LEDs off
  digitalWrite(led_red, LOW);   
  digitalWrite(led_yellow, HIGH);
  digitalWrite(led_green, LOW);
   digitalWrite(led_orange, LOW);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_white,LOW);
  delay(1000);   // wait 1 second
  
  // turn the red LED on and the other LEDs off
  digitalWrite(led_red, HIGH);  
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, LOW);
    digitalWrite(led_orange, LOW);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_white,LOW);
  delay(3000);  // wait 3 seconds        
}
