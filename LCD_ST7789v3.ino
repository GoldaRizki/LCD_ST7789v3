#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

// GPIO 18 (SPI CLK)  ---> SCL
// GPIO 23 (SPI MOSI) ---> SDA

#define TFT_CS        5
#define TFT_RST       22 // Or set to -1 and connect to Arduino RESET pin
#define TFT_DC        21

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  // put your setup code here, to run once:
  tft.init(240, 280);   
  Serial.begin(115200);

  tft.setTextWrap(false);
  Serial.println(tft.getRotation(), DEC);
  tft.setRotation(tft.getRotation()+3);

  tft.fillScreen(ST77XX_BLACK);
  tft.setCursor(20, 20);
  tft.setTextSize(3);
  tft.setTextColor(ST77XX_YELLOW);
  tft.print("Ini ");
  tft.setTextColor(ST77XX_GREEN);
  tft.println("Tulisan");


}

void loop() {
  // put your main code here, to run repeatedly:

}
