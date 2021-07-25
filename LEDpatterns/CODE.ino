//************************Joshua's Workshop*********************//
//****************YTsubscribe @Joshua Kennedy*******************//

int myled[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int num_of_leds;
void setup() {
  num_of_leds = sizeof(myled) / sizeof(int);
  for (int j = 0; j < num_of_leds; j++) {
    pinMode(myled[j], OUTPUT);
  }
}

void loop() {
  for (int j = 0; j < num_of_leds; j++) {
    digitalWrite(myled[j], HIGH);
    delay(1000);
  }
  for (int j = num_of_leds; j > 0; j--) {
    digitalWrite(myled[j - 1], LOW);
    delay(1000);
  }
}


//--------------------------------------------------------------------//
//Replace the above void loop() function with one of the pattern  below//
//--------------------------------------------------------------------//

//
//void loop() {
//  for (int j = 0; j < num_of_leds; j++) {
//    digitalWrite(myled[j], HIGH);
//  }
//}

//TURN OFF ALL LEDs
//void loop() {
//  for (int j = 0; j < num_of_leds; j++) {
//    digitalWrite(myled[j], LOW);
//  }
//}

//LEFT TO RIGHT
//void loop() {
//  for (int j = 0; j < num_of_leds; j++) {
//    digitalWrite(myled[j], HIGH);
//    delay(1000);
//    digitalWrite(myled[j], LOW);
//  }
//}

//RIGHT TO LEFT
//void loop() {
//  for (int j = num_of_leds; j > 0; j--) {
//    digitalWrite(myled[j - 1], HIGH);
//    delay(1000);
//    digitalWrite(myled[j - 1], LOW);
//  }
//}

//LEFT TO RIGHT FILL
//void loop() {
//  for (int j = 0; j < num_of_leds; j++) {
//    digitalWrite(myled[j], HIGH);
//    delay(1000);
//  }
//  for (int j = num_of_leds; j > 0; j--) {
//    digitalWrite(myled[j - 1], LOW);
//    delay(1000);
//  }
//}

//RIGHT TO LEFT FILL
//void loop() {
//  ledonn();
//  delay(1000);
//  for (int j = 0; j < num_of_leds; j++) {
//    digitalWrite(myled[j], LOW);
//    delay(1000);
//  }
//  for (int j = num_of_leds; j > 0; j--) {
//    digitalWrite(myled[j - 1], HIGH);
//    delay(1000);
//  }
//  ledoff();
//}

//ALTERNATE LEDs
//void loop() {
//  for (int j = 0; j < num_of_leds; j = j + 2) {
//    digitalWrite(myled[j], HIGH);
//    digitalWrite(myled[j + 1], LOW);
//  }
//  delay(1000);
//  for (int j = 0; j < num_of_leds; j = j + 2) {
//    digitalWrite(myled[j], LOW);
//    digitalWrite(myled[j + 1], HIGH);
//  }
//  delay(1000);
//}

//OSCILLATING LEDs
//void loop() {   //osc
//  for (int j = 0; j < num_of_leds; j++) {
//    digitalWrite(myled[j], HIGH);
//    delay(1000);
//    digitalWrite(myled[j], LOW);
//  }
//  delay(1000);
//  for (int j = num_of_leds; j > 0; j--) {
//    digitalWrite(myled[j - 1], HIGH);
//    delay(1000);
//    digitalWrite(myled[j - 1], LOW);
//  }
//}

//INSIDE
//void loop() {
//  for (int j = 0; j < num_of_leds / 2; j++) {
//    digitalWrite(myled[j], HIGH);
//    digitalWrite(myled[num_of_leds - 1 - j], HIGH);
//    delay(1000);
//    digitalWrite(myled[j], LOW);
//    digitalWrite(myled[num_of_leds - 1 - j], LOW);
//  }
//}

//OUTSIDE
//void loop() 
//{
//  for (int j = (num_of_leds / 2) - 1; j >= 0 ; j--)
//  {
//    digitalWrite(myled[j], HIGH);
//    digitalWrite(myled[num_of_leds - 1 - j], HIGH);
//    delay(1000);
//    digitalWrite(myled[j], LOW);
//    digitalWrite(myled[num_of_leds - 1 - j], LOW);
//  }
//}

//LEFT TO RIGHT 3 LEDs
//void loop() {
//  for (int j = 0; j < num_of_leds + 3; j++) {
//    if (j <= num_of_leds) {
//      digitalWrite(myled[j], HIGH);
//    }
//    if (j > 2) {
//      digitalWrite(myled[j - 3], LOW);
//    }
//    delay(1000);
//  }
//}

//OSCILLATING 3 LEDs
//void loop() {
//  for (int j = 2; j < num_of_leds; j++) {
//    if (j == 2) {
//      digitalWrite(myled[0], HIGH);
//      digitalWrite(myled[1], HIGH);
//    }
//    digitalWrite(myled[j], HIGH);
//    digitalWrite(myled[j - 3], LOW);
//    delay(1000);
//  }
//  for (int j = num_of_leds - 4; j > -1; j--) {
//    digitalWrite(myled[j], HIGH);
//    digitalWrite(myled[j + 3], LOW);
//    delay(1000);
//  }
//}
