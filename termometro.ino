

 
 int rele = 9; // Relé Display pino antes8

 // Vermelhos
 int vm1 = 18;   // Nível 1
 int vm2 = 19;   // Nível 2
 int vm3 = 22;   // Nível 3
 int vm4 = 23;   // Nível 4
 int vm5 = 24;   // Nível 5
 int vm6 = 25;   // Nível 6
 int vm7 = 26;   // Nível 7
 int vm8 = 27;   // Nível 8
 int vm9 = 28;   // Nível 9
 int vm10 = 29;  // Nível 10
 int vm11 = 30;  // Nível 11
 int vm12 = 31;  // Nível 12
 int vm13 = 32;  // Nível 13
 int vm14 = 33;  // Nível 14
 int vm15 = 34;  // Nível 15
 
 // Amarelo
 
 int am1 = 35;   // Nível 16
 int am2 = 36;   // Nível 17
 int am3 = 37;   // Nível 18
 int am4 = 38;   // Nível 19
 int am5 = 39;   // Nível 20
 int am6 = 40;   // Nível 21
 int am7 = 41;   // Nível 22
 int am8 = 42;   // Nível 23
 int am9 = 43;   // Nível 24
 int am10 = 44;  // Nível 25

// Verde

int vd1 = 45;  // Nível 26
int vd2 = 46;  // Nível 27
int vd3 = 47;  // Nível 28
int vd4 = 48;  // Nível 29
int vd5 = 49;  // Nível 30
int vd6 = 50;  // Nível 31
int vd7 = 51;  // Nível 32
int vd8 = 52;  // Nível 33
int vd9 = 53;  // Nível 34
int vd10 = 2;  // Nível 35
int vd11 = 3;  // Nível 36
int vd12 = 4;  // Nível 37
int vd13 = 5;  // Nível 38
int vd14 = 6;  // Nível 39 // pino 6 antes


void setup() {

   
  //Vermelhos
  
  pinMode(vm1, OUTPUT);
  pinMode(vm2, OUTPUT);
  pinMode(vm3, OUTPUT);
  pinMode(vm4, OUTPUT);
  pinMode(vm5, OUTPUT);
  pinMode(vm6, OUTPUT);
  pinMode(vm7, OUTPUT);
  pinMode(vm8, OUTPUT);
  pinMode(vm9, OUTPUT);
  pinMode(vm10, OUTPUT);
  pinMode(vm11, OUTPUT);
  pinMode(vm12, OUTPUT);
  pinMode(vm13, OUTPUT);
  pinMode(vm14, OUTPUT);
  pinMode(vm15, OUTPUT);

// Amarelo
 
 pinMode(am1, OUTPUT);
 pinMode(am2, OUTPUT);
 pinMode(am3, OUTPUT);
 pinMode(am4, OUTPUT);
 pinMode(am5, OUTPUT);
 pinMode(am6, OUTPUT);
 pinMode(am7, OUTPUT);
 pinMode(am8, OUTPUT);
 pinMode(am9, OUTPUT);
 pinMode(am10, OUTPUT);
 
 // Verde
 
 pinMode(vd1, OUTPUT);
 pinMode(vd2, OUTPUT);
 pinMode(vd3, OUTPUT);
 pinMode(vd4, OUTPUT);
 pinMode(vd5, OUTPUT);
 pinMode(vd6, OUTPUT);
 pinMode(vd7, OUTPUT);
 pinMode(vd8, OUTPUT);
 pinMode(vd9, OUTPUT);
 pinMode(vd10, OUTPUT);
 pinMode(vd11, OUTPUT);
 pinMode(vd12, OUTPUT);
 pinMode(vd13, OUTPUT);
 pinMode(vd14, OUTPUT);

 pinMode(rele, OUTPUT);

}

void loop() {


  digitalWrite(vm1, HIGH); //Nível 1
  delay(600);
  digitalWrite(vm2, HIGH); //Nível 2
  delay(600);            
  digitalWrite(vm3, HIGH); //Nível 3
  delay(600);            
  digitalWrite(vm4, HIGH); //Nível 4
  delay(600);            
  digitalWrite(vm5, HIGH); //Nível 5
  delay(600);            
  digitalWrite(vm6, HIGH); //Nível 6
  delay(600); 
  digitalWrite(vm7, HIGH); //Nível 7
  delay(600);
  digitalWrite(vm8, HIGH); //Nível 8
  delay(600);            
  digitalWrite(vm9, HIGH); //Nível 9
  delay(600);            
  digitalWrite(vm10, HIGH); //Nível 10
  delay(600);            
  digitalWrite(vm11, HIGH); //Nível 11
  delay(600);            
  digitalWrite(vm12, HIGH); //Nível 12
  delay(600); 
  digitalWrite(vm13, HIGH); //Nível 13
  delay(600);
  digitalWrite(vm14, HIGH); //Nível 14
  delay(600);
  digitalWrite(vm15, HIGH); //Nível 15
  delay(600);

  //Amarelo

  digitalWrite(am1, HIGH); //Nível 16
  delay(700);
  digitalWrite(am2, HIGH); //Nível 17
  delay(700);  
  digitalWrite(am3, HIGH);  //Nível 18
  delay(700);            
  digitalWrite(am4, HIGH); //Nível 19
  delay(700);            
  digitalWrite(am5, HIGH); //Nível 20
  delay(700);            
  digitalWrite(am6, HIGH); //Nível 21
  delay(700); 
  digitalWrite(am7, HIGH); //Nível 22
  delay(700);
  digitalWrite(am8, HIGH); //Nível 23
  delay(700);            
  digitalWrite(am9, HIGH);  //Nível 24
  delay(700);
  digitalWrite(am10, HIGH); //Nível 25
  delay(700);            

// Verde

  digitalWrite(vd1, HIGH); //Nível 26
  delay(700);
  digitalWrite(vd2, HIGH); //Nível 27
  delay(700);            
  digitalWrite(vd3, HIGH); //Nível 28
  delay(700); 
  digitalWrite(vd4, HIGH); //Nível 29
  delay(700);            
  digitalWrite(vd5, HIGH); //Nível 30
  delay(800);            
  digitalWrite(vd6, HIGH); //Nível 31
  delay(800); 
  digitalWrite(vd7, HIGH); //Nível 32
  delay(800);
  digitalWrite(vd8, HIGH); //Nível 33
  delay(900);            
  digitalWrite(vd9, HIGH); //Nível 34
  delay(1000);
  digitalWrite(vd10, HIGH); //Nível 35
  delay(1000);            
  digitalWrite(vd11, HIGH); //Nível 36
  delay(1500);            
  digitalWrite(vd12, HIGH); //Nível 37
  delay(1500); 
  digitalWrite(vd13, HIGH); //Nível 38
  delay(1500);
  digitalWrite(vd14, HIGH); //Nível 39
  delay(1500);

  
  for (;;){
  //Vermelho
  digitalWrite(vm1, HIGH);  //Nível 1
  digitalWrite(vm2, HIGH);  //Nível 2
  digitalWrite(vm3, HIGH);  //Nível 3
  digitalWrite(vm4, HIGH);  //Nível 4
  digitalWrite(vm5, HIGH);  //Nível 5
  digitalWrite(vm6, HIGH);  //Nível 6
  digitalWrite(vm7, HIGH);  //Nível 7
  digitalWrite(vm8, HIGH);  //Nível 8
  digitalWrite(vm9, HIGH);  //Nível 9
  digitalWrite(vm10, HIGH); //Nível 10
  digitalWrite(vm11, HIGH); //Nível 11
  digitalWrite(vm12, HIGH); //Nível 12
  digitalWrite(vm13, HIGH); //Nível 13
  digitalWrite(vm14, HIGH); //Nível 14
  digitalWrite(vm15, HIGH); //Nível 15
   // Amarelo
  digitalWrite(am1, HIGH);  //Nível 16
  digitalWrite(am2, HIGH);  //Nível 17
  digitalWrite(am3, HIGH);  //Nível 18
  digitalWrite(am4, HIGH);  //Nível 19
  digitalWrite(am5, HIGH);  //Nível 20
  digitalWrite(am6, HIGH);  //Nível 21
  digitalWrite(am7, HIGH);  //Nível 22
  digitalWrite(am8, HIGH);  //Nível 23
  digitalWrite(am9, HIGH);  //Nível 24
  digitalWrite(am10, HIGH);  //Nível 25
 // Verde
  digitalWrite(vd1, HIGH);  //Nível 26
  digitalWrite(vd2, HIGH);  //Nível 27
  digitalWrite(vd3, HIGH);  //Nível 28
  digitalWrite(vd4, HIGH);  //Nível 29
  digitalWrite(vd5, HIGH);  //Nível 30
  digitalWrite(vd6, HIGH);  //Nível 31
  digitalWrite(vd7, HIGH);  //Nível 32
  digitalWrite(vd8, HIGH);  //Nível 33
  digitalWrite(vd9, HIGH);  //Nível 34
  digitalWrite(vd10, HIGH); //Nível 35
  digitalWrite(vd11, HIGH); //Nível 36
  digitalWrite(vd12, HIGH); //Nível 37
  digitalWrite(vd13, HIGH); //Nível 38
  digitalWrite(vd14, HIGH); //Nível 39
  
  delay(200);

  // Vermelho
  digitalWrite(vm1, LOW);  //Nível 1
  digitalWrite(vm2, LOW);  //Nível 2
  digitalWrite(vm3, LOW);  //Nível 3
  digitalWrite(vm4, LOW);  //Nível 4
  digitalWrite(vm5, LOW);  //Nível 5
  digitalWrite(vm6, LOW);  //Nível 6
  digitalWrite(vm7, LOW);  //Nível 7
  digitalWrite(vm8, LOW);  //Nível 8
  digitalWrite(vm9, LOW);  //Nível 9
  digitalWrite(vm10, LOW); //Nível 10
  digitalWrite(vm11, LOW); //Nível 11
  digitalWrite(vm12, LOW); //Nível 12
  digitalWrite(vm13, LOW); //Nível 13
  digitalWrite(vm14, LOW); //Nível 14
  digitalWrite(vm15, LOW); //Nível 15

 // Amarelo
  digitalWrite(am1, LOW);   //Nível 16
  digitalWrite(am2, LOW);   //Nível 17
  digitalWrite(am3, LOW);   //Nível 18
  digitalWrite(am4, LOW);   //Nível 19
  digitalWrite(am5, LOW);   //Nível 20
  digitalWrite(am6, LOW);   //Nível 21
  digitalWrite(am7, LOW);   //Nível 22
  digitalWrite(am8, LOW);   //Nível 23
  digitalWrite(am9, LOW);   //Nível 24
  digitalWrite(am10, LOW);  //Nível 25
   
  // Verde
  digitalWrite(vd1,  LOW); //Nível 26 
  digitalWrite(vd2,  LOW); //Nível 27
  digitalWrite(vd3,  LOW); //Nível 28
  digitalWrite(vd4,  LOW); //Nível 29 
  digitalWrite(vd5,  LOW); //Nível 30
  digitalWrite(vd6,  LOW); //Nível 31
  digitalWrite(vd7,  LOW); //Nível 32 
  digitalWrite(vd8,  LOW); //Nível 33
  digitalWrite(vd9,  LOW); //Nível 34
  digitalWrite(vd10, LOW); //Nível 35
  digitalWrite(vd11, LOW); //Nível 36
  digitalWrite(vd12, LOW); //Nível 37
  digitalWrite(vd13, LOW); //Nível 38
  digitalWrite(vd14, LOW); //Nível 39

  delay(200);

   
 digitalWrite(rele, HIGH);

// Fita de Led //#######################################




//########################################################

 
  }
  }
  


