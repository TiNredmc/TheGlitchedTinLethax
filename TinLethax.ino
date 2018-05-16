/*********************************************************************
This is an example for our Monochrome OLEDs based on SSD1306 drivers

  Pick one up today in the adafruit shop!
  ------> http://www.adafruit.com/category/63_98

This example is for a 128x32 size display using I2C to communicate
3 pins are required to interface (2 I2C and one reset)

Adafruit invests time and resources providing this open source code, 
please support Adafruit and open-source hardware by purchasing 
products from Adafruit!

Written by Limor Fried/Ladyada  for Adafruit Industries.  
BSD license, check license.txt for more information
All text above, and the splash screen must be included in any redistribution
*********************************************************************/

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2




#if (SSD1306_LCDHEIGHT != 32)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup()   {                

  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x32)
  // init done

 display.clearDisplay();
 Glitched("TinLethax");
 delay(1000);
 display.clearDisplay();

}


void loop() {
   Glitched("TinLethax");
 delay(1000);
 display.clearDisplay();

}

void Glitched(String InsertHere) {
 
  display.setTextSize(2);
  display.setTextColor(WHITE);

  display.invertDisplay(true);

  display.invertDisplay(false);

  display.setCursor(10,10);
  display.clearDisplay();
  display.println(InsertHere);
  display.display();
  delay(500);
  display.invertDisplay(true);
  display.setCursor(20,1);
  display.clearDisplay();
  display.println(InsertHere);
  display.display();
  delay(10);
  display.setCursor(15,1);
  display.clearDisplay();
  display.println(InsertHere);
  display.display();
  delay(10);
  display.invertDisplay(false);
  display.setCursor(1,1);
  display.clearDisplay();
  display.println(InsertHere);
  display.display();
  delay(10);
  display.setCursor(10,10);
  display.clearDisplay();
  display.println(InsertHere);
  display.display(); //Glitching 1
  delay(500);
  display.invertDisplay(true);
  display.setCursor(-20,-1);
  display.clearDisplay();
  display.println(InsertHere);
  display.display();
  delay(10);
  display.setCursor(-15,-1);
  display.clearDisplay();
  display.println(InsertHere);
  display.display();
  delay(10);
  display.invertDisplay(false);
  display.setCursor(-1,-1);
  display.clearDisplay();
  display.println(InsertHere);
  display.display();
  delay(10);
  display.setCursor(-15,-20);
  display.clearDisplay();
  display.println(InsertHere);
  display.display();
  delay(10);
  display.setCursor(10,10);
  display.clearDisplay();
  display.println(InsertHere);
  display.display();
  
  /*display.startscrollright(0x00, 0x0F);
  delay(100);
  display.startscrollleft(0x00, 0x0F);   
  delay(500);
  display.startscrolldiagright(0x00, 0xFF);
  delay(100);
  display.startscrolldiagleft(0x00, 0xFF);
  
  display.stopscroll();*/
}
