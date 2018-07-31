#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
  lcd.begin(16,2);  // 16 digits, 2 lines
}

void loop() {
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Country:");
  lcd.setCursor(0,1);
  lcd.print("Costa...");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("Rica...!");
  delay(1000);
  
  
}
