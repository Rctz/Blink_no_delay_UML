/*----------------------------------------------------------------------------
 * File:  Blink.c
 *
 * UML Component Port Messages
 * Component/Module Name:  Blink
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "MyBlink_sys_types.h"
#include "Blink.h"
#include "BlinkEE_bridge.h"
#include "Blink_classes.h"

/*
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  ArduinoTime
 */
void
Blink_ArduinoTime()
{
  Blink_Flasher * led=0;
  /* SELECT any led FROM INSTANCES OF Flasher */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any led FROM INSTANCES OF Flasher" );
  led = (Blink_Flasher *) Escher_SetGetAny( &pG_Blink_Flasher_extent.active );
  /* GENERATE Flasher2:TimePass() TO led */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE Flasher2:TimePass() TO led" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( led, &Blink_Flasherevent2c );
    Escher_SendEvent( e );
  }
}

/*
 * Domain Function:  setup
 */
void
Blink_setup()
{
  Blink_Flasher * led;
  /* CREATE OBJECT INSTANCE led OF Flasher */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE led OF Flasher" );
  led = (Blink_Flasher *) Escher_CreateInstance( Blink_DOMAIN_ID, Blink_Flasher_CLASS_NUMBER );
  /* GENERATE Flasher1:StartUp() TO led */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE Flasher1:StartUp() TO led" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( led, &Blink_Flasherevent1c );
    Escher_SendEvent( e );
  }
}
/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const Blink_class_info[ Blink_MAX_CLASS_NUMBERS ] = {
  &pG_Blink_Flasher_extent
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t Blink_EventDispatcher[ Blink_STATE_MODELS ] = {
  Blink_class_dispatchers
};

void Blink_execute_initialization()
{
  /*
   * Initialization Function:  setup
   * Component:  Blink
   */
  Blink_setup();

}
