/*----------------------------------------------------------------------------
 * File:  BlinkEE_bridge.h
 *
 * Description:
 * Methods for bridging to an external entity.
 *
 * External Entity:  BlinkEE (BlinkEE)
 * 
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/
#ifndef BLINKEE_BRIDGE_H
#define BLINKEE_BRIDGE_H
#ifdef	__cplusplus
extern	"C"	{
#endif

#include "MyBlink_sys_types.h"
void BlinkEE_display( void );
void BlinkEE_TurnOffLED( void );
void BlinkEE_TurnOnLED( void );

#ifdef	__cplusplus
}
#endif
#endif   /* BLINKEE_BRIDGE_H */
