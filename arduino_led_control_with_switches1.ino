int btn1 = A1;
int btn2 = A0;
  int led1= 8; 
  int led2= 9; 
  int led3= 10; 
  int led4= 11; 
  int led5= 12; 
  int led6= 13; 
int reading ;
int reading2 ;
void setup() {
  pinMode (led1, OUTPUT); 
  pinMode (led2, OUTPUT); 
  pinMode (led3, OUTPUT); 
  pinMode (led4, OUTPUT); 
  pinMode (led5, OUTPUT); 
  pinMode (led6, OUTPUT); 
  pinMode (btn1, INPUT);
  pinMode (btn2, INPUT);
}

void loop() {
  reading = digitalRead (btn1);
  reading2 = digitalRead (btn2);
  if (reading ==1) { 
    digitalWrite (led1, HIGH); 
    digitalWrite (led2, HIGH); 
    digitalWrite (led3, HIGH); 
      delay(50);
}
      else if(reading ==0) { 
    digitalWrite (led1, LOW); 
    digitalWrite (led2, LOW); 
    digitalWrite (led3, LOW); 
        delay(50);
}
if (reading2 ==1) { 
    digitalWrite (led4, HIGH); 
    digitalWrite (led5, HIGH); 
  digitalWrite (led6, HIGH);
      delay(50);
}
     else if(reading2 ==0) { 
    digitalWrite (led4, LOW); 
    digitalWrite (led5, LOW); 
       digitalWrite (led6, LOW); 
         delay(50);
}
  
}