void setup () {
   pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);  
  pinMode(10, OUTPUT);    
  pinMode(9, OUTPUT);   
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
  pinMode(2, INPUT);
   Serial.begin(9600);
 }


//*********************loop********************************************
void loop () { 
   if(digitalRead(2)){
// 10
  digitalWrite(5, LOW); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, LOW);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, HIGH); // CENTRAL
  delay(1000);
 //9
  digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, HIGH);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, LOW); // CENTRAL
  delay(1000);
 //8
  digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, LOW);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, LOW); // CENTRAL
  delay(1000);
   //7
  digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, HIGH); // BAIX HORITZONTAL
  digitalWrite(8, HIGH);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, HIGH); //DALT ESQUERRA
  digitalWrite(12, HIGH); // CENTRAL
  delay(1000);
// 6
  digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, LOW);// BAIX ESQUERRA
  digitalWrite(9, HIGH); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, LOW); // CENTRAL
  delay(1000);
  // 5
    digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, HIGH);// BAIX ESQUERRA
  digitalWrite(9, HIGH); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, LOW); // CENTRAL
  delay(1000);
  //4
    digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, HIGH); // BAIX HORITZONTAL
  digitalWrite(8, HIGH);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, HIGH); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, LOW); // CENTRAL
  delay(1000);
  //3
      digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, HIGH);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, HIGH); //DALT ESQUERRA
  digitalWrite(12, LOW); // CENTRAL
  delay(1000);
  //2
    digitalWrite(5, HIGH); //dot
  digitalWrite(6, HIGH); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, LOW);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, HIGH); //DALT ESQUERRA
  digitalWrite(12, LOW); // CENTRAL
  delay(1000);
  //1
    digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, HIGH); // BAIX HORITZONTAL
  digitalWrite(8, HIGH);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, HIGH); // DALT HORITZONTAL
  digitalWrite(11, HIGH); //DALT ESQUERRA
  digitalWrite(12, HIGH); // CENTRAL
  delay(1000);
  //0
    digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, LOW);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, HIGH); // CENTRAL
  delay(1000);
  //H
    digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, HIGH); // BAIX HORITZONTAL
  digitalWrite(8, LOW);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, HIGH); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, LOW); // CENTRAL
  delay(500);
  // O
      digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, LOW);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, HIGH); // CENTRAL
    delay(500);
  // L
    digitalWrite(5, HIGH); //dot
  digitalWrite(6, HIGH); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, LOW);// BAIX ESQUERRA
  digitalWrite(9, HIGH); //DALT DRETA
  digitalWrite(10, HIGH); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, HIGH); // CENTRAL
  delay(500);
  //A
        digitalWrite(5, HIGH); //dot
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, HIGH); // BAIX HORITZONTAL
  digitalWrite(8, LOW);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, LOW); // CENTRAL
    delay(500);
  } else{

  digitalWrite(5, HIGH); //dot
  digitalWrite(6, HIGH); // BAIX DRETA
  digitalWrite(7, HIGH); // BAIX HORITZONTAL
  digitalWrite(8, HIGH);// BAIX ESQUERRA
  digitalWrite(9, HIGH); //DALT DRETA
  digitalWrite(10, HIGH); // DALT HORITZONTAL
  digitalWrite(11, HIGH); //DALT ESQUERRA
  digitalWrite(12, HIGH); // CENTRAL
      delay(50);
  digitalWrite(6, LOW); // BAIX DRETA
  digitalWrite(7, LOW); // BAIX HORITZONTAL
  digitalWrite(8, LOW);// BAIX ESQUERRA
  digitalWrite(9, LOW); //DALT DRETA
  digitalWrite(10, LOW); // DALT HORITZONTAL
  digitalWrite(11, LOW); //DALT ESQUERRA
  digitalWrite(12, HIGH); // CENTRAL
      delay(50);      
  }}
  
  
  

