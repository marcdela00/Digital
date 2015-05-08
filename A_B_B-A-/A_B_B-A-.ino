
#include <Servo.h> 
 
Servo servo1;  
 Servo servo2;               
int temps = A0; 
int pos1 = 0;     
int pos2 = 0; 
void setup() 
{ 
  servo1.attach(9);
 servo2.attach(3); 



} 
 
void loop() 
{ 
  for(pos1 = 0; pos1 <= 180; pos1 += 1)  
  {                                   
    servo1.write(pos1);               
    delay(5);                       
  } 
  for(pos2 = 0; pos2 <= 180; pos2 += 1)  
  {                                  
    servo2.write(pos2);               
    delay(5);                       
  } 
    for(pos2 = 180; pos2>=0; pos2-=1)    
  {                                
    servo2.write(pos2);              
    delay(5);                      
  } 
  
  for(pos1 = 180; pos1>=0; pos1-=1)      
  {                                
    servo1.write(pos1);               
    delay(5);                       
  } 
  
 delay(1000);
 
} 
