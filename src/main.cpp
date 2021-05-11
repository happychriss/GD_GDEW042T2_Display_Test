// GxEPD2_MinimumExample.ino by Jean-Marc Zingg

// purpose is e.g. to determine minimum code and ram use by this library

// see GxEPD2_wiring_examples.h of GxEPD2_Example for wiring suggestions and examples
// if you use a different wiring, you need to adapt the constructor parameters!

// uncomment next line to use class GFX of library GFX_Root instead of Adafruit_GFX, to use less code and ram
//#include <GFX.h>

#include <GxEPD2_BW.h> // including both doesn't use more code or ram
#include <GxEPD2_3C.h> // including both doesn't use more code or ram

// select the display class and display driver class in the following file (new style):
#include "GxEPD2_display_selection_new_style.h"

// alternately you can copy the constructor from GxEPD2_display_selection.h or GxEPD2_display_selection_added.h of GxEPD2_Example to here
// e.g. for Wemos D1 mini:
//GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display(GxEPD2_154_D67(/*CS=D8*/ SS, /*DC=D3*/ 0, /*RST=D4*/ 2, /*BUSY=D2*/ 4)); // GDEH0154D67

void setup() {

    Serial.begin(115200);
    Serial.println("Start GDEW042T2 400x300 test");
    display.init(115200);
    // comment out next line to have no or minimal Adafruit_GFX code
    display.setTextColor(GxEPD_BLACK);
    display.firstPage();
    Serial.println("Init DONE");
    do {
        Serial.println("Begin of Loop");
        display.fillScreen(GxEPD_WHITE);
        Serial.println("Fill Screen DONE");
        // comment out next line to have no or minimal Adafruit_GFX code
        display.print("Hello World!");
    } while (display.nextPage());
}

void loop() {};
