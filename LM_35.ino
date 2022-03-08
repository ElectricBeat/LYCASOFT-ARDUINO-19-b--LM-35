#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int sensorValue,Temperature,fahrenheit; 
void setup() 
{
  lcd.begin(16, 2);
  lcd.print("SRI ELECRRONIS& EMBEDDED SOLUCTION");
  delay(2000);
}
void loop()
{
  sensorValue = analogRead(A0);
  Temperature=sensorValue*0.4887; 
  lcd.setCursor(0, 1);
  lcd.print("T:");
  
  lcd.setCursor(2, 1);
  Dec2ascii(Temperature);
  delay(1000);
  
  lcd.setCursor(8, 1);
  lcd.print("T:"); 
  lcd.setCursor(10, 1);
  fahrenheit=(Temperature*1.8)+32;
  
  Dec2ascii(fahrenheit);
  lcd.setCursor(6, 1);
  lcd.print("C");
  lcd.setCursor(14, 1);
  lcd.print("F");
}
void Dec2ascii(unsigned int value) 
{
  unsigned char Dig1,Dig2,Dig3,Dig4;

  Dig2=value%10;
  value=value/10;
  Dig1=value; 
  
  lcd.print(Dig1); 
  delay(2); 
  lcd.print(Dig2);  
  delay(2);
  
 }
