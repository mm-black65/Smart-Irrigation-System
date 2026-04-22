#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
#define SOIL_PIN 36  // VP
#define RELAY_PIN 5

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(RELAY_PIN, OUTPUT);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { }
  display.clearDisplay();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  int soilRaw = analogRead(SOIL_PIN);
  int soilMoisture = map(soilRaw, 0, 4095, 0, 100);  

  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(0,0);
  display.print("Temp: "); display.print(t); display.println("C");
  display.print("Hum: "); display.print(h); display.println("%");
  display.print("Soil: "); display.print(soilMoisture); display.println("%");
  display.display();

  if (soilMoisture < 30) { digitalWrite(RELAY_PIN, LOW); }  // Activate pump
  else { digitalWrite(RELAY_PIN, HIGH); }
  delay(2000);
}
