#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int counter = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
  lcd.write("HELLO WORLD");
  digitalWrite(4,HIGH);
  //lcd.autoscroll();
}

void loop() {
  if (counter == 24) {
    digitalWrite(4, HIGH);
  } else if (counter == 12) {
    digitalWrite(4, LOW);
  } else if (counter == 39) {
    counter = -1;
  }
  counter++;
  lcd.scrollDisplayLeft();
  delay(150);

}
