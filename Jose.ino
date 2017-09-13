int buzpin = 9;
int ldrpin = 0;
 
void setup()
{ 
 Serial.begin(9600);
  pinMode(9,OUTPUT);
  
}
void loop() 
{ 
   int ldr = analogRead(ldrpin); 
   Serial.println(ldr); 
   if (ldr < 1000) {
    Serial.println("BIP"); 
   tone(9,100); 
   delay(5);
   noTone(9); 
   delay(ldr);
   }
}
