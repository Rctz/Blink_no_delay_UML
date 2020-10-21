/*----------------------------------------------------------------------------
 * File:  Blink_Flasher_class.c
 *
 * Class:       Flasher  (Flasher)
 * Component:   Blink
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "MyBlink_sys_types.h"
#include "BlinkEE_bridge.h"
#include "Blink_classes.h"


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Blink_Flasher_container[ Blink_Flasher_MAX_EXTENT_SIZE ];
static Blink_Flasher Blink_Flasher_instances[ Blink_Flasher_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Blink_Flasher_extent = {
  {0}, {0}, &Blink_Flasher_container[ 0 ],
  (Escher_iHandle_t) &Blink_Flasher_instances,
  sizeof( Blink_Flasher ), Blink_Flasher_STATE_1, Blink_Flasher_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      Flasher  (Flasher)
 * Component:  Blink
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [init]
 */
static void Blink_Flasher_act1( Blink_Flasher *, const Escher_xtUMLEvent_t * const );
static void
Blink_Flasher_act1( Blink_Flasher * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 2:  [LED_On]
 */
static void Blink_Flasher_act2( Blink_Flasher *, const Escher_xtUMLEvent_t * const );
static void
Blink_Flasher_act2( Blink_Flasher * self, const Escher_xtUMLEvent_t * const event )
{
  /* BlinkEE::TurnOnLED(  ) */
  XTUML_OAL_STMT_TRACE( 1, "BlinkEE::TurnOnLED(  )" );
  BlinkEE_TurnOnLED();
}

/*
 * State 3:  [LED_Off]
 */
static void Blink_Flasher_act3( Blink_Flasher *, const Escher_xtUMLEvent_t * const );
static void
Blink_Flasher_act3( Blink_Flasher * self, const Escher_xtUMLEvent_t * const event )
{
  /* BlinkEE::TurnOffLED(  ) */
  XTUML_OAL_STMT_TRACE( 1, "BlinkEE::TurnOffLED(  )" );
  BlinkEE_TurnOffLED();
}

const Escher_xtUMLEventConstant_t Blink_Flasherevent1c = {
  Blink_DOMAIN_ID, Blink_Flasher_CLASS_NUMBER, BLINK_FLASHEREVENT1NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t Blink_Flasherevent2c = {
  Blink_DOMAIN_ID, Blink_Flasher_CLASS_NUMBER, BLINK_FLASHEREVENT2NUM,
  ESCHER_IS_INSTANCE_EVENT };


/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t Blink_Flasher_StateEventMatrix[ 3 + 1 ][ 2 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  Blink_Flasher_STATE_1 (init) */
  { Blink_Flasher_STATE_2, EVENT_CANT_HAPPEN },
  /* row 2:  Blink_Flasher_STATE_2 (LED_On) */
  { EVENT_CANT_HAPPEN, Blink_Flasher_STATE_3 },
  /* row 3:  Blink_Flasher_STATE_3 (LED_Off) */
  { EVENT_CANT_HAPPEN, Blink_Flasher_STATE_2 }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t Blink_Flasher_acts[ 4 ] = {
    (StateAction_t) 0,
    (StateAction_t) Blink_Flasher_act1,  /* init */
    (StateAction_t) Blink_Flasher_act2,  /* LED_On */
    (StateAction_t) Blink_Flasher_act3  /* LED_Off */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 4 ] = {
    "",
    "init",
    "LED_On",
    "LED_Off"
  };

/*
 * instance state machine event dispatching
 */
void
Blink_Flasher_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 3 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = Blink_Flasher_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 3 ) {
        STATE_TXN_START_TRACE( "Flasher", current_state, state_name_strings[ current_state ] );
        /* Update the current state and execute the state action.  */
        instance->current_state = next_state;
        ( *Blink_Flasher_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "Flasher", next_state, state_name_strings[ next_state ] );
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "Flasher", current_state );
      } else {
        /* empty else */
      }
    }
  }
}

