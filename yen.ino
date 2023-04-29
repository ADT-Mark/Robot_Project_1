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
int count =0;
int ramit = 0;

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

  delay(2000);   

servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9);   
  
for (i = 0; i < 30; i+=1) { // right turn
        
    servo1.write(180-i);              

    servo2.write(180-i);     

    servo3.write(180-i);

    servo4.write(180-i);  

    distance_cm = mySensor.distance(); 

    delay(50);                      

  }

servo1.detach();

  servo2.detach();

  servo3.detach();

  servo4.detach();

  delay(2000);   

servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9);   

for (i = 0; i < 20; i+=1) { //forward

    servo1.write(20-i);              

    servo2.write(i);     

    servo3.write(20-i);

    servo4.write(i);         

    distance_cm = mySensor.distance();    

    delay(50);                      

  }

servo1.detach();

  servo2.detach();

  servo3.detach();

  servo4.detach();

  delay(2000);   

servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9);   

for (i = 0; i < 30; i+=1) { // right turn
        
    servo1.write(180-i);              

    servo2.write(180-i);     

    servo3.write(180-i);

    servo4.write(180-i);  

    distance_cm = mySensor.distance(); 

    delay(50);                      

  }

servo1.detach();

  servo2.detach();

  servo3.detach();

  servo4.detach();

  delay(2000);   

servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9);   

for (i = 0; i < 180; i+=1) { //forward

    servo1.write(180-i);              

    servo2.write(i);     

    servo3.write(180-i);

    servo4.write(i);         

    distance_cm = mySensor.distance();    

    delay(60);                      

  }  

  servo1.detach();

  servo2.detach();

  servo3.detach();

  servo4.detach();

  delay(2000);   

servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9); 
  
  
for (i = 0; i < 30; i+=1) { // left turn
        
    servo1.write(i);              

    servo2.write(i);     

    servo3.write(i);

    servo4.write(i);  

    distance_cm = mySensor.distance(); 

    delay(60);                      

  }  

  servo1.detach();

  servo2.detach();

  servo3.detach();

  servo4.detach();

  delay(2000);   

servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9); 

for (i = 0; i < 20; i+=1) { //forward

    servo1.write(20-i);              

    servo2.write(i);     

    servo3.write(20-i);

    servo4.write(i);         

    distance_cm = mySensor.distance();    

    delay(60);                      

  }

servo1.detach();

  servo2.detach();

  servo3.detach();

  servo4.detach();

  delay(2000);   

servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9);   
  
for (i = 0; i < 30; i+=1) { // left turn
        
    servo1.write(i);              

    servo2.write(i);     

    servo3.write(i);

    servo4.write(i);  

    distance_cm = mySensor.distance(); 

    delay(60);                      

  }  
  
servo1.detach();

  servo2.detach();

  servo3.detach();

  servo4.detach();

  delay(2000);   

servo1.attach(3);

  servo2.attach(5); 

  servo3.attach(6); 

  servo4.attach(9);     

  
}
