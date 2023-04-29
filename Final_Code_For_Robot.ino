/*SHARP GP2Y0A21YK0F IR distance sensor with Arduino and SharpIR library example code. More info: https://www.makerguides.com */

// Include the library:
#include <SharpIR.h>

#include <Servo.h>

// Define model and input pin:
#define IRPin A0
#define model 1080

Servo servo1; 

Servo servo2;

Servo servo3;

Servo servo4;

int i = 0;
int paces =0;
int turned = 0;
int attached=0;

// Create variable to store the distance:
int distance_cm;

/* Model :
  GP2Y0A02YK0F --> 20150
  GP2Y0A21YK0F --> 1080
  GP2Y0A710K0F --> 100500
  GP2YA41SK0F --> 430
*/

// Create a new instance of the SharpIR class:
SharpIR mySensor = SharpIR(IRPin, model);

void setup() {
  // Begin serial communication at a baudrate of 9600:
  Serial.begin(9600);

  servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9); 
}

void loop() {
  /*/ Get a distance measurement and store it as distance_cm:
  distance_cm = mySensor.distance();

  // Print the measured distance to the serial monitor:
  Serial.print("Mean distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
  */

  servo1.detach();

  servo2.detach();

  servo3.detach();

  servo4.detach();
  
  distance_cm = mySensor.distance();

  delay(2000);   

  servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9);   
////////////////////////////////////////
//  STRIGHT
////////////////////////////////////////
if(paces<10  && distance_cm >= 11){

    servo1.write(180);              

    servo2.write(0);     

    servo3.write(180);

    servo4.write(0);  

    distance_cm = mySensor.distance(); 

    delay(1000);                      

    servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach();
  
    distance_cm = mySensor.distance();

    delay(2000);   

    servo1.attach(3);

    servo2.attach(5); 

    servo3.attach(6); 

    servo4.attach(9); 

    paces++;
}
////////////////////////////////////////
// small STRIGHT
////////////////////////////////////////
if(distance_cm <= 9){

    servo1.write(180);              

    servo2.write(0);     

    servo3.write(180);

    servo4.write(0);  

    distance_cm = mySensor.distance(); 

    delay(500);                      

    servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach();
  
    distance_cm = mySensor.distance();

    if(distance_cm <=7){

      delay(2000);   

    servo1.attach(3);

    servo2.attach(5); 

    servo3.attach(6); 

    servo4.attach(9); 

    servo1.write(180);              

    servo2.write(0);     

    servo3.write(180);

    servo4.write(0);  

    distance_cm = mySensor.distance(); 

    delay(2000); 
         
    servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach(); 

    attached =1;           
    }

    delay(2000);   

    servo1.attach(3);

    servo2.attach(5); 

    servo3.attach(6); 

    servo4.attach(9); 

}

////////////////////////////////////////
//  TURN RIGHT
////////////////////////////////////////
if(paces>=10){       
    servo1.write(180);              

    servo2.write(180);     

    servo3.write(180);

    servo4.write(180);  

    distance_cm = mySensor.distance(); 

    delay(3000);                      

    servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach();
  
    distance_cm = mySensor.distance();

    delay(2000);   

    servo1.attach(3);

    servo2.attach(5); 

    servo3.attach(6); 

    servo4.attach(9);  

////////////////////////////////////////
//  STRIGHT
////////////////////////////////////////
        
    servo1.write(180);              

    servo2.write(0);     

    servo3.write(180);

    servo4.write(0);  

    distance_cm = mySensor.distance(); 


    delay(500);                      

    servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach();  

    distance_cm = mySensor.distance();

    delay(2000);   

    servo1.attach(3);

    servo2.attach(5); 

    servo3.attach(6); 

    servo4.attach(9);    

////////////////////////////////////////
//  TURN RIGHT
////////////////////////////////////////
        
    servo1.write(180);              

    servo2.write(180);     

    servo3.write(180);

    servo4.write(180);  

    distance_cm = mySensor.distance(); 

    delay(3000);                      

    servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach();
  
    distance_cm = mySensor.distance();

    delay(2000);   

    servo1.attach(3);

    servo2.attach(5); 

    servo3.attach(6); 

    servo4.attach(9);  
    
    paces = 0;
    turned++;
}

////////
//return
//////////
if(attached==1){

if(paces>=1){
 servo1.write(0);              

    servo2.write(180);     

    servo3.write(0);

    servo4.write(180);  

   

    delay(1000*paces);                      

    servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach();

    delay(2000);   

    servo1.attach(3);

    servo2.attach(5); 

    servo3.attach(6); 

    servo4.attach(9); 
paces=0;
}

if(turned>=1){

  if(turned%2==0){
    servo1.write(0);              

    servo2.write(0);     

    servo3.write(0);

    servo4.write(0);  

    delay(2500);                      

    servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach();

    delay(2000);   

    servo1.attach(3);

    servo2.attach(5); 

    servo3.attach(6); 

    servo4.attach(9); 

  servo1.write(180);              

    servo2.write(0);     

    servo3.write(180);

    servo4.write(0); 

delay(500*turned);   

servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach();

    delay(20000);
    
  }
  if(turned%2==1){
    
servo1.write(180);              

    servo2.write(180);     

    servo3.write(180);

    servo4.write(180);  

    delay(2500);                      

    servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach();

    delay(2000);   

    servo1.attach(3);

    servo2.attach(5); 

    servo3.attach(6); 

    servo4.attach(9); 

    servo1.write(180);              

    servo2.write(0);     

    servo3.write(180);

    servo4.write(0); 

    delay(500*turned);

    servo1.detach();

    servo2.detach();

    servo3.detach();

    servo4.detach();

    delay(20000);    
  }

}

}





}
