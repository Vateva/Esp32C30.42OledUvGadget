# Miniature UV Index Display

This device shows the **UV Index** using an **SH1106 0.42" OLED display** and an **LTR390 UV sensor**. The display alternates every 2 seconds between the numeric UV index and a corresponding icon. Most of the work went into making the device as compact as possible, along with designing the casing and the switch mechanism using Blender.

---

## Features

- **Auto On/Off**: Opening the protective cover turns the device on and takes a single reading, closing it powers it off to conserve battery.
- **UV Index Reading**: Uses the **LTR390** sensor to read UV levels.
- **Icon Display**: Alternates between text and icons based on UV level:
  - 🌙 Low or no UV
  - 😊 Safe UV
  - 🕶️ Moderate UV
  - 🔥 High UV
  - 😈 Very High UV
  - 💀 Extreme UV

---

## Hardware Used

- **ESP32-C3 Super Mini** microcontroller  
- **LTR390** UV sensor  
- **SH1106 72x40 0.42” OLED display**  
- **501515 80 mAh pouch LiPo battery**  
- **TP4057 1A USB-C charging module**  
- **Miniature switch**

---

## Software Requirements

- [Arduino IDE](https://www.arduino.cc/en/software) or [PlatformIO](https://platformio.org/)
- Required libraries:
  - [`U8g2`](https://github.com/olikraus/u8g2) – for OLED graphics
  - [`Adafruit_LTR390`](https://github.com/adafruit/Adafruit_LTR390) – for UV sensor readings
  - `Wire` – I2C communication

---

## Device Design

### Wiring & Assembly

The main design goal was to make the device as compact as possible with the available components.

- **Battery** was wired and glued to the **TP4057** charging board. The **charging board** was then connected to the **ESP32-C3**.  
  ![uvgadget1](https://github.com/user-attachments/assets/b31ecdce-aa35-4fbe-844d-d8744b999166)

- The **LTR390** sensor was added last, creating a "component sandwich". Internal layers (left to right): ESP32-C3 (with OLED), LiPo, TP4057, LTR390 
  ![uvgadget2](https://github.com/user-attachments/assets/3998c0fd-234f-4737-a307-e24a6322437f)

- Fully wired setup including the switch  
  ![UvGadget3](https://github.com/user-attachments/assets/cf8d8a73-d18e-4afc-ab4e-d37161c5c31d)

---

### Casing

The most time-consuming part was designing the **protective casing and toggle mechanism** in Blender.  
- The STL file is included in the repo.
- Blender source files will also be uploaded for modifications.

The **bottom casing** is a simple **rectangular prism**:
- Cutouts for the **OLED** and **USB-C charging port**.
- The ESP32-C3’s USB-C port is **not exposed** to avoid user confusion even if firmware updates require disassembly.

The **top casing** has:
- A small mechanism that **Reveals or hides** the UV sensor and **Toggles the switch** to power the device on or off.

**Casing and Mechanism Photos:**

- Before gluing the switch and top part:  
  ![before_glue](https://github.com/user-attachments/assets/5cb7619c-39e4-4fff-b7e4-b3b80127f85b)

- Final product:  
  ![finished](https://github.com/user-attachments/assets/18ee3ece-228a-4aa6-b71f-a9027146f49d)
