
// New background colour
#define TFT_BROWN 0x38E0

// Pause in milliseconds between screens, change to 0 to time font rendering
#define WAIT 500

#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

void setup() {
  // put your setup code here, to run once:
  tft.init();
  tft.setRotation(1);

}

void loop() {
  // put your main code here, to run repeatedly:

  //tft.setTextSize(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_MAGENTA);

  tft.drawCentreString("Perhaps home ", 80, 0, 2);
  tft.drawCentreString("is not a place", 80, 16, 2);
  tft.drawCentreString(" but simply an", 80, 32, 2);
  tft.drawCentreString("irrevocable condition", 80, 48, 2);

  tft.drawCentreString("JAMES BALDWIN", 80, 64, 2);

  delay(2000);
  for (int i = 0; i < 10; i++)
  {
    int rx = random(40);
    int ry = random(40);
    int x = rx + random(160 - rx - rx);
    int y = ry + random(128 - ry - ry);
    tft.fillEllipse(x, y, rx, ry, random(0xFFFF));
  }

  delay(2000);

}
