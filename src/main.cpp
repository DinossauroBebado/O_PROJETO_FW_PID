#include <Arduino.h>
#include "controller.h"

float P = 10 ;
float I = 0.1;
float D = 0.01;


float output,input,setpoint ;

Controller balancer_controller(P,I,D); 

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  output = balancer_controller.output(input,setpoint);
}

