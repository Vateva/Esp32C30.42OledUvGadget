#include <Wire.h>
#include <U8g2lib.h>

// Create display object for SH1106 with correct resolution and offset
// Use 128x64 in library but only draw in 72x40 area
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  Serial.begin(115200);
  Serial.println("Starting AbroRobot ESP32-C3 OLED test...");
  
  // Initialize I2C with correct pins for AbroRobot board
  Wire.begin(5, 6); // SDA=GPIO5, SCL=GPIO6
  
  // Initialize display
  u8g2.begin();
  
  // Set display offset for proper rendering
  u8g2.setDisplayRotation(U8G2_R0);
  
  Serial.println("OLED initialized successfully!");
  
  // Clear the display
  u8g2.clearBuffer();

  
  // Draw a border to show the usable area
  u8g2.drawFrame(26, 24, 72, 40);

  // Send buffer to display
  u8g2.sendBuffer();
  
}

void loop() {

}