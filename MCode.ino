#include <SPI.h>
#include <MFRC522.h>
#include <EasyMFRC522.h>
#include <RfidDictionaryView.h>

#define SS_PIN 10
#define RST_PIN 9

byte readCard[4];
String MasterTag = "8363061E";
String tagID = "";
MFRC522 mfrc522(SS_PIN, RST_PIN);


int ledred = 4; //Door Closed Status
int ledgreen = 3; // Door Open Status
int mic = 2;
int trig = 7;
int echo = 6;
int pir = 5; // Door sensor connected to Pin 6 in Arduino
int reed = 8;
// int vib = A5;
int data;
void setup()
{
pinMode(ledgreen, OUTPUT);
pinMode(ledred, OUTPUT);
pinMode(trig, OUTPUT);
pinMode(mic, INPUT);
pinMode(pir, INPUT);
pinMode(echo, INPUT);
pinMode(reed, INPUT);
// pinMode(vib, INPUT);
Serial.begin(9600);
//
SPI.begin();
mfrc522.PCD_Init();
delay(4);
mfrc522.PCD_DumpVersionToSerial();
}
void loop()
{
  long duration, distance;
  digitalWrite(trig, LOW);  
  delay(0);                  
  digitalWrite(trig, HIGH);
  delay(0);         
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration/2) / 29.1;
  if ((digitalRead(mic) == HIGH || digitalRead(pir) == HIGH) || digitalRead(reed) == LOW)
  {
    digitalWrite(ledgreen, LOW);
    digitalWrite(ledred, HIGH);
//Serial.println("Your Door is Closed");
  }
  else
    {

      if(distance <= 15){
        digitalWrite(ledred,HIGH);
        digitalWrite(ledgreen, LOW);
      }

      else{
        
        if(Serial.available()>0){
          data = Serial.read();

          if(data == 'A'){
            digitalWrite(ledgreen, HIGH);
            digitalWrite(ledred, LOW);
          }

          if(data == 'B'){
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, HIGH);
            delay(1500);             
          }
        }

        else{
          if(getID()) {
    
            if (tagID == MasterTag){
              digitalWrite(ledgreen, HIGH);
             digitalWrite(ledred, LOW);
            }

            else{      
                digitalWrite(ledgreen, HIGH);
                digitalWrite(ledred, LOW);
            }
          }
        }
      }
//Serial.println("Your Door is Open");
    }
delay(100);
}

boolean getID() 
{
  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    return false;
  }
  if ( ! mfrc522.PICC_ReadCardSerial()) {
  return false;
  }
  tagID = "";
  for ( uint8_t i = 0; i < 4; i++) {
  tagID.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  tagID.toUpperCase();
  mfrc522.PICC_HaltA(); // Stop reading
  return true;
}
