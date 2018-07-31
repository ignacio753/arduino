#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

#define DHTPIN A1
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

int botonActual = 0;


void setup() {
  lcd.begin(16,2);
  lcd.clear();
  lcd.print("Iniciando...");
  delay(3000);
}

void loop() {
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  lcd.clear();
  lcd.print("Today's Weather");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Rel. Humidity: ");
  lcd.setCursor(6, 1);
  lcd.print(h);
  lcd.print("% ");
  delay(2500);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temperature: ");
  lcd.setCursor(6, 1);
  lcd.print(t);
  lcd.print("*C ");
  delay(2500); 

  if (t <= 20) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Fresh weather");
    lcd.setCursor(0,1);
    lcd.print("today!");
    delay(2500); 
  } else {
  lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Hot weather");
    lcd.setCursor(0,1);
    lcd.print("today!");
    delay(2500);     
  }
  
}
