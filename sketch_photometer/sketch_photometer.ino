#include <LiquidCrystal.h>

const int rs = 11, en = 10, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int photocellPin = 0;
int photocellReading;

void setup() {  
  pinMode(12, HIGH);
  digitalWrite(12, LOW );

  lcd.begin(16, 2);
  lcd.print("Zonfotometer");
}

void loop() {
  photocellReading = analogRead(photocellPin);
  
  lcd.setCursor(0, 1);
  lcd.print(photocellReading);

  delay(100);
}

