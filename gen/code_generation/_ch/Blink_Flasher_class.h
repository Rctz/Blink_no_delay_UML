/*----------------------------------------------------------------------------
 * File:  Blink_Flasher_class.h
 *
 * Class:       Flasher  (Flasher)
 * Component:   Blink
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef BLINK_FLASHER_CLASS_H
#define BLINK_FLASHER_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Flasher  (Flasher)
 */
struct Blink_Flasher {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
};



#define Blink_Flasher_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_Blink_Flasher_extent;

/*
 * instance event:  Flasher1:'StartUp'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Blink_Flasherevent1;
extern const Escher_xtUMLEventConstant_t Blink_Flasherevent1c;
/*
 * instance event:  Flasher2:'TimePass'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Blink_Flasherevent2;
extern const Escher_xtUMLEventConstant_t Blink_Flasherevent2c;
/*
 * union of events targeted towards 'Flasher' state machine
 */
typedef union {
  Blink_Flasherevent1 flasher1_1;  
  Blink_Flasherevent2 flasher2_2;  
} Blink_Flasher_Events_u;
/*
 * enumeration of state model states for class
 */
#define Blink_Flasher_STATE_1 1  /* state [1]:  (init) */
#define Blink_Flasher_STATE_2 2  /* state [2]:  (LED_On) */
#define Blink_Flasher_STATE_3 3  /* state [3]:  (LED_Off) */
/*
 * enumeration of state model event numbers
 */
#define BLINK_FLASHEREVENT1NUM 0  /* Flasher1:'StartUp' */
#define BLINK_FLASHEREVENT2NUM 1  /* Flasher2:'TimePass' */
extern void Blink_Flasher_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* BLINK_FLASHER_CLASS_H */
