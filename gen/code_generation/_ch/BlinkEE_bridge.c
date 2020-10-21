/*----------------------------------------------------------------------------
 * Description:   Methods for bridging to an external entity.
 *
 * External Entity:  BlinkEE (BlinkEE)
 * 
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "MyBlink_sys_types.h"
#include "BlinkEE_bridge.h"

/*
 * Bridge:  display
 */
void
BlinkEE_display()
{
  /* Replace/Insert your implementation code here... */
	Serial.println("Display");
}


/*
 * Bridge:  TurnOffLED
 */
void
BlinkEE_TurnOffLED()
{
  /* Replace/Insert your implementation code here... */
	digitalWrite(LED_BUILTIN, LOW);
}


/*
 * Bridge:  TurnOnLED
 */
void
BlinkEE_TurnOnLED()
{
  /* Replace/Insert your implementation code here... */
	digitalWrite(LED_BUILTIN, HIGH);
}

