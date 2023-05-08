// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        6 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 388 // Popular NeoPixel ring size
#define MIDPOINT 75

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 5 // Time (in milliseconds) to pause between pixels

void setup() {
  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  
}

//for some reason the xmas style lights have red and green channels flipped
//the next strip has very close LEDs, so only take every fourth instruction
void setColor(int pos, int r,int g, int b) {
  if (pos < 100){
     pixels.setPixelColor(pos, pixels.Color(g,r,b));
  }
  else if (pos >= 100 && pos < 388) {
    if (pos >=103 && pos % 4 == 0){
     pixels.setPixelColor(pos-3, pixels.Color(r,g,b));
     pixels.setPixelColor(pos-2, pixels.Color(r,g,b));
     pixels.setPixelColor(pos-1, pixels.Color(r,g,b));
     pixels.setPixelColor(pos, pixels.Color(r,g,b));
    }
  }
}

void setXmas(int updateFreq, int colorOffset) {
  
  for(int i=0; i<NUMPIXELS; i++) { 
    if (i%3 == colorOffset%3){
      setColor(i, 0, 20, 0);
    }
    else if (i%3 == (colorOffset+1)%3) {
        setColor(i, 20, 0, 0);
    }
    else if (i%3 == (colorOffset+2)%3) {
        setColor(i, 30, 30, 30);
    }

    if (i%updateFreq == 0){
      pixels.show();  
      delay(DELAYVAL); 
    }
  }
}
void loop() {

  setXmas(3, 0);
  for (int i=0; i < 6; i++){
    setXmas(NUMPIXELS, i);
    delay(1000);
  }
  
  for(int i=0; i<(NUMPIXELS*3)-MIDPOINT; i++) { 
    int v = random(3);
    if (v%3 == 0){
      setColor(i%NUMPIXELS, 0, 20, 0);
    }
    else if (v%3 == 1) {
        setColor(i%NUMPIXELS, 20, 0, 0);
    }
    else if (v%3 == 2) {
        setColor(i%NUMPIXELS, 30, 30, 30);
    }
    
    if (i%1 == 0){
      pixels.show();  
      delay(DELAYVAL); 
    }
  }
  
  chase(0, 0, 0,
        0, 150, 0,
        10);
  pixels.clear();

  chase(0, 150, 0,
        150, 0, 0,
        25);
  pixels.clear();

}

void chase(int backgroundR, int backgroundG, int backgroundB,
           int foregroundR, int foregroundG, int foregroundB,
           int lengthOfChase) {

  pixels.clear();
  for(int i=0; i<NUMPIXELS*3; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    setColor(offsetMidpoint(i), backgroundR, backgroundG, backgroundB);

    for(int j=1; j < lengthOfChase; j++){
      setColor(offsetMidpoint(i+j), foregroundR, foregroundG, foregroundB);
    }     
    
    if (i%1 == 0){
      pixels.show();   // Send the updated pixel colors to the hardware.
      delay(DELAYVAL); // Pause before next pass through loop
    }
  }
}

int offsetMidpoint(int i) {
  return (i % (NUMPIXELS-MIDPOINT)) + MIDPOINT;
}
