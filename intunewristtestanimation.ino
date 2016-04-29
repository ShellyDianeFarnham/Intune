#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6
#define NUM_LEDS 12

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  // End of trinket special code

  
    Serial.begin(9600);

  Serial.println(" test ");
  Serial.println("\n");


  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
   // Some example procedures showing how to display to the pixels:
   // colorWipe(strip.Color(255, 0, 0), 50); // Red
   // colorWipe(strip.Color(0, 0, 255), 50); // Blue
   
   colorWipe(strip.Color(0, 255, 0), 50); // Blue

    set1();
    strip.show();
    delay(4000);
    
    set2_ron();
   strip.show();
   delay(300);
   
    set2_roff();
    strip.show();
    delay(300);

    set2_ron();
   strip.show();
   delay(300);
   
    set2_roff();
    strip.show();
    delay(300);

        set2_ron();
   strip.show();
   delay(300);
   
    set2_roff();
    strip.show();
    delay(300);

        set2_ron();
   strip.show();
   delay(300);
   
    set2_roff();
    strip.show();
    delay(300);

        set2_ron();
   strip.show();
   delay(300);
   
    set2_roff();
    strip.show();
    delay(300);
    
   set3();
    strip.show();
   delay(4000);

   set4();
    strip.show();
   delay(4000);
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}

void set1(){
   strip.setPixelColor(0, strip.Color(0, 95, 0));
   strip.setPixelColor(1, strip.Color(0, 10, 0));
   strip.setPixelColor(2, strip.Color(0, 200, 0));
   strip.setPixelColor(3, strip.Color(0, 255, 0));
   strip.setPixelColor(4, strip.Color(0, 120, 0));
   strip.setPixelColor(5, strip.Color(0, 10, 0));
   strip.setPixelColor(6, strip.Color(0, 130, 0));
   strip.setPixelColor(7, strip.Color(0, 50, 0));
   strip.setPixelColor(8, strip.Color(0, 30, 0));
   strip.setPixelColor(9, strip.Color(0, 10, 0));
   strip.setPixelColor(10, strip.Color(0, 225, 0));
   strip.setPixelColor(11, strip.Color(0, 30, 0));
}

void set2_ron(){
   strip.setPixelColor(0, strip.Color(0, 95, 0));
   strip.setPixelColor(1, strip.Color(0, 10, 0));
   strip.setPixelColor(2, strip.Color(0, 200, 0));
   strip.setPixelColor(3, strip.Color(255, 0, 0));
   strip.setPixelColor(4, strip.Color(0, 120, 0));
   strip.setPixelColor(5, strip.Color(0, 10, 0));
   strip.setPixelColor(6, strip.Color(0, 130, 0));
   strip.setPixelColor(7, strip.Color(0, 50, 0));
   strip.setPixelColor(8, strip.Color(0, 30, 0));
   strip.setPixelColor(9, strip.Color(0, 10, 0));
   strip.setPixelColor(10, strip.Color(0, 225, 0));
   strip.setPixelColor(11, strip.Color(0, 30, 0));
}

void set2_roff(){
   strip.setPixelColor(0, strip.Color(0, 95, 0));
   strip.setPixelColor(1, strip.Color(0, 10, 0));
   strip.setPixelColor(2, strip.Color(0, 200, 0));
   strip.setPixelColor(3, strip.Color(255, 0, 0));
   strip.setPixelColor(4, strip.Color(0, 120, 0));
   strip.setPixelColor(5, strip.Color(0, 10, 0));
   strip.setPixelColor(6, strip.Color(0, 130, 0));
   strip.setPixelColor(7, strip.Color(0, 50, 0));
   strip.setPixelColor(8, strip.Color(0, 30, 0));
   strip.setPixelColor(9, strip.Color(0, 10, 0));
   strip.setPixelColor(10, strip.Color(0, 10, 0));
   strip.setPixelColor(11, strip.Color(0, 30, 0));
}

void set3(){
   strip.setPixelColor(0, strip.Color(0, 95, 0));
   strip.setPixelColor(1, strip.Color(0, 10, 0));
   strip.setPixelColor(2, strip.Color(0, 200, 0));
   strip.setPixelColor(3, strip.Color(0, 255, 0));
   strip.setPixelColor(4, strip.Color(0, 120, 0));
   strip.setPixelColor(5, strip.Color(0, 10, 0));
   strip.setPixelColor(6, strip.Color(0, 100, 0));
   strip.setPixelColor(7, strip.Color(0, 50, 0));
   strip.setPixelColor(8, strip.Color(0, 30, 0));
   strip.setPixelColor(9, strip.Color(0, 10, 0));
   strip.setPixelColor(10, strip.Color(0, 100, 0));
   strip.setPixelColor(11, strip.Color(0, 30, 0));
}

void set4(){
   strip.setPixelColor(0, strip.Color(0, 95, 0));
   strip.setPixelColor(1, strip.Color(0, 10, 0));
   strip.setPixelColor(2, strip.Color(0, 50, 0));
   strip.setPixelColor(3, strip.Color(0, 255, 0));
   strip.setPixelColor(4, strip.Color(0, 120, 0));
   strip.setPixelColor(5, strip.Color(0, 10, 0));
   strip.setPixelColor(6, strip.Color(0, 100, 0));
   strip.setPixelColor(7, strip.Color(0, 50, 0));
   strip.setPixelColor(8, strip.Color(0, 30, 0));
   strip.setPixelColor(9, strip.Color(0, 10, 0));
   strip.setPixelColor(10, strip.Color(0, 100, 0));
   strip.setPixelColor(11, strip.Color(0, 30, 0));
}


