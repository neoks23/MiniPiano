#include <Keypad.h>

int buzz_pin = 2;

const byte ROWS = 4; //four rows

const byte COLS = 4; //four columns

char keys[ROWS][COLS] = {

  {'c','d','e','f'},

  {'g','a','b','C'},

  {'D','E','F','G'},

  {'A','B','2','3'}   

};

byte rowPins[ROWS] = {13, 12, 11, 10}; //connect to the row pinouts of the keypad

byte colPins[COLS] = {9, 8, 7, 6}; //connect to the column pinouts of the keypad


Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup(){

      Serial.begin(9600);

     pinMode(buzz_pin, OUTPUT);

}

void loop(){

  char key = keypad.getKey();  //Variable to store pressed key


  if (keypad.getState() == HOLD || keypad.isPressed(key)){
    Serial.println(key); //Prints the key in serial monitor
    switch(key){
      case 'c':
        tone(buzz_pin, 25);
        break;
      case 'd':
        tone(buzz_pin, 50);
        break;
      case 'e':
        tone(buzz_pin, 75);
        break;
      case 'f':
        tone(buzz_pin, 100);
        break;
      case 'g':
        tone(buzz_pin, 125);
        break;
      case 'a':
        tone(buzz_pin, 150);
        break;
      case 'b':
        tone(buzz_pin, 175);
        break;
      case 'C':
        tone(buzz_pin, 200);
        break;
      case 'D':
        tone(buzz_pin, 225);
        break;
      case 'E':
        tone(buzz_pin, 250);
        break;
      case 'F':
        tone(buzz_pin, 275);
        break;
      case 'G':
        tone(buzz_pin, 300);
        break;
      case 'A':
        tone(buzz_pin, 325);
        break;
      case 'B':
        tone(buzz_pin, 350);
        break;
      case '2':
        tone(buzz_pin, 375);
        break;
      case '3':
        tone(buzz_pin, 400);
        break;
    }
    delay(50);
  }
  else{
    noTone(buzz_pin);
  }

}
