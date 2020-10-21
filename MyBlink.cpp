#include "Arduino.h"


const long interval = 1000;      // interval at which to blink (milliseconds)
unsigned long previousMillis = 0; // will store last time LED was updated

int BlinkMain( int, char ** );

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);   
    Serial.begin(9600);       // start the serial interface
  Serial.println("Hello, world");
}

void loop() {
  //BlinkMain(0,(char **)0);
  BlinkMain(0,(char **)0);
}


#include "MyBlink_sys_main.c"
#include "sys_user_co.c"
#include "sys_xtuml.c"
#include "Blink.c"
#include "BlinkEE_bridge.c"
#include "Blink_Flasher_class.c"
