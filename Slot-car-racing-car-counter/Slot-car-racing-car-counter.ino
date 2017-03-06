#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

const int dataIN1 = 2;
const int dataIN2 = 4;
const int dataIN3 = 7;
const int dataIN4 = 8;


int buttonPushCounter1 = 0; 
int buttonPushCounter2 = 0;
int buttonPushCounter3 = 0;
int buttonPushCounter4 = 0;  
int buttonState1 = 0;  
int buttonState2 = 0; 
int buttonState3 = 0; 
int buttonState4 = 0;        
int lastButtonState1 = 0;
int lastButtonState2 = 0;
int lastButtonState3 = 0;
int lastButtonState4 = 0;

void setup()
{
  pinMode(dataIN1, INPUT); 
  pinMode(dataIN2, INPUT); 
  pinMode(dataIN3, INPUT); 
  pinMode(dataIN4, INPUT); 
  



	lcd.begin();
	lcd.backlight();
	lcd.print("Player: 1 =");
  lcd.setCursor(0,1);
  lcd.print("Player: 2 =");
  lcd.setCursor(0,2);
  lcd.print("Player: 3 =");
  lcd.setCursor(0,3);
  lcd.print("Player: 4 =");
}

void loop(){
  
  

buttonState1 = digitalRead(dataIN1);
buttonState2 = digitalRead(dataIN2);
buttonState3 = digitalRead(dataIN3);
buttonState4 = digitalRead(dataIN4);

 if (buttonState1 != lastButtonState1) {
  if (buttonState1 == HIGH) {
    buttonPushCounter1++;
 
      lcd.setCursor(14,0);
      lcd.print(buttonPushCounter1);
    } else {

  }
  //delay(50);
 }
  lastButtonState1 = buttonState1;
 




 if (buttonState2 != lastButtonState2) {
  if (buttonState2 == HIGH) {
    buttonPushCounter2++;
 
      lcd.setCursor(14,1);
      lcd.print(buttonPushCounter2);
    } else {

  }
  //delay(50);
 }
  lastButtonState2 = buttonState2;






 if (buttonState3 != lastButtonState3) {
  if (buttonState3 == HIGH) {
    buttonPushCounter3++;
 
      lcd.setCursor(14,2);
      lcd.print(buttonPushCounter3);
    } else {

  }
  //delay(50);
 }
  lastButtonState3 = buttonState3;







 if (buttonState4 != lastButtonState4) {
  if (buttonState4 == HIGH) {
    buttonPushCounter4++;
 
      lcd.setCursor(14,3);
      lcd.print(buttonPushCounter4);
    } else {

  }
  //delay(50);
 }
  lastButtonState4 = buttonState4;

  
  delay(50);
}

