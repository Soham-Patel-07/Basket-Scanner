# 🛒 Basket Scanner – IoT Smart Billing System

An IoT-enabled smart shopping basket that scans items in real time to automate billing, reduce queues, and provide a checkout-free retail experience.

## 🔧 Features

- Real-time product scanning using **RFID**
- Automatic billing display on **LCD**
- Wireless data transfer to central billing system
- Alerts for purchase limit threshold
- Easy-to-use embedded design for customers

## 🚀 Tech Stack

- **Microcontroller:** Arduino Uno
- **Language:** Embedded C
- **Sensors & Modules:** RFID Reader, RFID Tags, NodeMCU (ESP8266), Bluetooth Module
- **Display:** LCD 16x2
- **Other Hardware:** Power supply, reset/crystal circuit, resistors, LEDs

## 📷 Images

| RFID Scanning | Output on LCD | Output on Computer |
|---------------|---------------|---------------------|
| ![RFID Scan](images/rfid-scan.png) | ![LCD Display](images/lcd-output.png) | ![Computer Screen](images/computer-output.png) |

## ⚙️ System Architecture

- Items are tagged with RFID cards
- As items are added/removed from the basket, RFID data is processed by Arduino
- Billing total is updated and shown on LCD
- All data is sent via wireless module to backend billing software

## 🏆 Outcomes

- ✅ Reduced billing time by automating checkout
- ✅ Improved shopping experience and eliminated queueing
- ✅ Successfully simulated end-to-end retail billing flow

## 📁 Folder Structure

```
Basket-Scanner/
├── .git/                      # Git repository metadata
├── Code/
│   └── basket_scanner.ino     # Arduino sketch for RFID scanning
├── Documents/
│   ├── PROJECT REPORT.pdf     # Project documentation
│   └── Index project.pdf      # Project index
├── Presentations/
│   └── Basket Scanner ppt.pptx  # Project presentation
├── images/
│   ├── rfid-scan.png
│   ├── lcd-output.png
│   ├── computer-output.png
│   ├── Use Case Diagram.JPG
│   ├── UML Activity Diagram.JPG
│   ├── Scanning Item or card.jpg
│   ├── Flow Chart.JPG
│   ├── ERD Diagram.JPG
│   ├── DFD Diagram.JPG
│   ├── Before Scanning the UID Tag.jpg
│   ├── Arduino connection with breadboard and LED display.JPG
│   └── After Scanning the UID Tag.jpg
├── LICENSE                    # MIT License
└── README.md                  # Project documentation
```


## 🧠 Skills Demonstrated

- Embedded C & Arduino Programming
- IoT Sensor Integration
- Circuit Design & Hardware Assembly
- Wireless Communication (Wi-Fi, Bluetooth)
- Real-time Data Display & Billing

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 📚 References

- [Arduino Official Docs](https://www.arduino.cc/)
- [RFID with Arduino Tutorial](https://circuitdigest.com/microcontroller-projects/rfid-interfacing-with-arduino)
- [ESP8266 Documentation](https://www.espressif.com/en/products/socs/esp8266)


---

**Note:** 👨‍💻 Developed as part of **final-year** in **Diploma Engineering** in **Computer Engineering** project in **May 2020** at **Mahavir Swami College of Polytechnic.**
