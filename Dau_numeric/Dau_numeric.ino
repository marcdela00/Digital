void setup() {
  // put your setup code here, to run once:
   
  pinMode(11, OUTPUT);  
  pinMode(10, OUTPUT);    
  pinMode(9, OUTPUT);   
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
  pinMode(2, INPUT);
}

void loop() {
  
 int val = 0 ;
 
 if(digitalRead(2)){
 val = random(1,6);
}
// numero 1
if (val == 1){
digitalWrite(5,LOW);   // esquerra dalt
digitalWrite(6,LOW);  // esquerra mig 
digitalWrite(7,LOW);     // esquerra baix
digitalWrite(8,HIGH); //centre
digitalWrite(9,LOW);    // dreta dalt
digitalWrite(10,LOW);    // dreta  mig
digitalWrite(11,LOW);     // dreta baix
}
// numero 2
if (val == 2){
digitalWrite(5,LOW);   // esquerra dalt
digitalWrite(6,LOW);  // esquerra mig 
digitalWrite(7,HIGH);     // esquerra baix
digitalWrite(8,LOW); //centre
digitalWrite(9,HIGH);    // dreta dalt
digitalWrite(10,LOW);    // dreta  mig
digitalWrite(11,LOW);     // dreta baix
}

// numero 3
if (val == 3){
digitalWrite(5,HIGH);   // esquerra dalt
digitalWrite(6,LOW);  // esquerra mig 
digitalWrite(7,LOW);     // esquerra baix
digitalWrite(8,HIGH); //centre
digitalWrite(9,LOW);    // dreta dalt
digitalWrite(10,LOW);    // dreta  mig
digitalWrite(11,HIGH);     // dreta baix
}
// numero 4
if (val == 4){
digitalWrite(5,HIGH);   // esquerra dalt
digitalWrite(6,LOW);  // esquerra mig 
digitalWrite(7,HIGH);     // esquerra baix
digitalWrite(8,LOW); //centre
digitalWrite(9,HIGH);    // dreta dalt
digitalWrite(10,LOW);    // dreta  mig
digitalWrite(11,HIGH);     // dreta baix
}
// numero 5
if (val == 5){
digitalWrite(5,HIGH);   // esquerra dalt
digitalWrite(6,LOW);  // esquerra mig 
digitalWrite(7,HIGH);     // esquerra baix
digitalWrite(8,HIGH); //centre
digitalWrite(9,HIGH);    // dreta dalt
digitalWrite(10,LOW);    // dreta  mig
digitalWrite(11,HIGH);     // dreta baix
}

// numero 6
if (val == 6){
digitalWrite(5,HIGH);   // esquerra dalt
digitalWrite(6,HIGH);  // esquerra mig 
digitalWrite(7,HIGH);     // esquerra baix
digitalWrite(8,LOW); //centre
digitalWrite(9,HIGH);    // dreta dalt
digitalWrite(10,HIGH);    // dreta  mig
digitalWrite(11,HIGH);     // dreta baix
}
delay (500);
val = 0 ;

if (val == 0){
digitalWrite(5,LOW);   // esquerra dalt
digitalWrite(6,LOW);  // esquerra mig 
digitalWrite(7,LOW);     // esquerra baix
digitalWrite(8,LOW); //centre
digitalWrite(9,LOW);    // dreta dalt
digitalWrite(10,LOW);    // dreta  mig
digitalWrite(11,LOW);     // dreta baix


}
}
