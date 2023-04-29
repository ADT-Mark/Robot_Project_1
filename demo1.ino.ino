#include <Servo.h>


Servo servo1; 

Servo servo2;

Servo servo3;

Servo servo4;


int i = 0;
int count =0;

void setup() {

  servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9); 

}


void loop() {
/*
  for (i = 0; i < 180; i+=1) { //forward

    servo1.write(180-i);              

    servo2.write(i);     

    servo3.write(180-i);

    servo4.write(i);         

    delay(50);                      

  }

  for (i = 180; i > 0; i-=1) { //Backward

    servo1.write(180-i);                

    servo2.write(i);     

    servo3.write(180-i);

    servo4.write(i);          

    delay(50);                      

  }
*/
for (i = 360; i > 0; i-=1) { //search Right

    servo1.write(i);                

    servo2.write(i);     

    servo3.write(i);

    servo4.write(i);          

    delay(10);                      

  }

  delay(5000);

  /*for (i = 57; i > 0; i-=1) { //Search Left

    servo1.write(180-i);                

    servo2.write(180-i);     

    servo3.write(180-i);

    servo4.write(180-i);          

    delay(50);                      

  }

  for (i = 31; i > 0; i-=1) { //search Right

    servo1.write(i);                

    servo2.write(i);     

    servo3.write(i);

    servo4.write(i);          

    delay(50);                      

  }

  for (i = 90; i > 0; i-=3) { //Move forward

    servo1.write(180-i);                

    servo2.write(i);     

    servo3.write(180-i);

    servo4.write(i);          

    delay(50);                       

  }
  
  count++;
  
  
  if(count ==3){
  for (i = 200; i > 0; i-=1) { //turn left

    servo1.write(i);                

    servo2.write(i);     

    servo3.write(i);

    servo4.write(i);          

    delay(50);                      

  }

 for (i = 90; i > 0; i-=1) { //Move forward

    servo1.write(180-i);                

    servo2.write(i);     

    servo3.write(180-i);

    servo4.write(i);          

    delay(50);                
     
  } 

  }*/
}