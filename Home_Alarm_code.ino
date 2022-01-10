
 #include <LiquidCrystal.h>
 LiquidCrystal lcd(8,9,10,11,12,13);
  
  void setup() {
  
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(2, INPUT);
    Serial.begin(9600);
    lcd.begin(16, 2);
    lcd.setCursor(0,0);
    lcd.print("PIR BASED HOME "); 
    lcd.setCursor(0,1);
    lcd.print("SECURITY SYSTEM"); 
    delay(2000);
    lcd.clear();
  }
   void loop() 
  {
    lcd.setCursor(0,0);
    lcd.print("No motion in");  
    lcd.setCursor(0,1);
    lcd.print("the house");
   int pirvalue= digitalRead(2);
    if(pirvalue==1)
     {
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      lcd.setCursor(0,0);
      lcd.print("A motion has");
      lcd.setCursor(0,1);
      lcd.print("been detected ");
      delay(3000);
      lcd.clear();
     }
    else{     
      digitalWrite(3,LOW);
       digitalWrite(4,LOW);   
         }
     delay(10);    
   }
