#include "Adafruit_LTR390.h"
#include "icon_bitmaps.h"
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/U8X8_PIN_NONE);
Adafruit_LTR390 ltr = Adafruit_LTR390();

void displayUVIndex(float uv_index);
void displayError(const char *message);

// variables for alternating display
unsigned long previousMillis = 0;
const long interval = 2000; // 0.7 seconds
bool showUV = true;
float last_uv_index =
    0.0; // to store the last read UV index for continuous display

void setup() {
  Serial.begin(115200);

  // initialize I2C for both OLED and LTR390
  Wire.begin(5, 6); // SDA=GPIO5, SCL=GPIO6

  // Initialize display
  u8g2.begin();

  // itialize UV sensor
  if (!ltr.begin()) {
    displayError("Sensor Error!");
    return;
  }

  // configure sensor for optimal UV reading
  ltr.setMode(LTR390_MODE_UVS);
  ltr.setGain(LTR390_GAIN_18);
  ltr.setResolution(LTR390_RESOLUTION_20BIT);

  delay(100); // wait 0.1s before starting to take readings
  // take peak reading over 1.5 seconds (15 samples)
  float peak_uv_index = 0.0;
  for (int i = 0; i < 8; i++) {
    // Wait for new data
    while (!ltr.newDataAvailable()) {
      delay(10);
    }

    // Read UV data
    uint32_t uv_raw = ltr.readUVS();
    float current_uv = uv_raw / 2300.0;

    // Keep the maximum reading
    if (current_uv > peak_uv_index) {
      peak_uv_index = current_uv;
    }

  }

  last_uv_index = peak_uv_index; // store the peak UV index for display

  previousMillis = millis();
}

void loop() {
  displayUVIndex(last_uv_index);
  delay(10);
}

void displayUVIndex(float uv_index) {
  u8g2.clearBuffer();

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    showUV = !showUV; // toggle between showing UV index and bitmap
  }

  if (showUV) {
    // display UV Index
    u8g2.setFont(u8g2_font_ncenB14_tr);
    u8g2.setCursor(30, 45);
    u8g2.print("UV:");
    u8g2.print(uv_index, 1);
    u8g2.setFont(u8g2_font_6x10_tr);
    u8g2.setCursor(32, 58);
    u8g2.print("Index");

  } else {
    const unsigned char *currentBitmap =
        nullptr; // initialize with a null pointer

    if (uv_index > 0 && uv_index < 3) {
      currentBitmap = icons_smiley;
    } else if (uv_index >= 3.0 && uv_index < 6) {
      currentBitmap = icons_sunglasses;
    } else if (uv_index >= 6.0 && uv_index < 8) {
      currentBitmap = icons_fire;
    } else if (uv_index >= 8.0 && uv_index < 11) {
      currentBitmap = icons_demon;
    } else if (uv_index >= 11.0) {
      currentBitmap = icons_skull;
    } else {
      currentBitmap = icons_moon;
    }

    if (currentBitmap != nullptr) {
      // center the 40x40 bitmap in the 72x40 active area(offsets are 26 and 24)
      int x = 26 + (72 - ICON_WIDTH) / 2;
      int y = 24 + (40 - ICON_HEIGHT) / 2;
      u8g2.drawXBMP(x, y, ICON_WIDTH, ICON_HEIGHT, currentBitmap);
    }
  }

  u8g2.sendBuffer(); // Send the buffer to the display
}

void displayError(const char *message) {
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_6x10_tr);
  u8g2.setCursor(30, 45);
  u8g2.print(message);
  u8g2.sendBuffer();
}