#include <SPI.h>
#include <MFRC522.h>
#include <LiquidCrystal.h>

#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int totalBill = 0;
const int buzzer = 8;

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  lcd.begin(16, 2);
  pinMode(buzzer, OUTPUT);
  lcd.print("Scan Item...");
}

void loop() {
  if (!mfrc522.PICC_IsNewCardPresent() || !mfrc522.PICC_ReadCardSerial())
    return;

  String tagID = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    tagID += String(mfrc522.uid.uidByte[i], HEX);
  }

  int itemPrice = getItemPrice(tagID);
  totalBill += itemPrice;

  lcd.clear();
  lcd.print("Item: ");
  lcd.print(itemPrice);
  lcd.setCursor(0, 1);
  lcd.print("Total: ");
  lcd.print(totalBill);

  if (totalBill > 500) {
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
  }

  delay(2000);
  lcd.clear();
  lcd.print("Scan Next...");
}

int getItemPrice(String tagID) {
  if (tagID == "d61cbf2a") return 100;
  if (tagID == "a1382d4f") return 150;
  if (tagID == "f49382e1") return 200;
  return 50;
}
