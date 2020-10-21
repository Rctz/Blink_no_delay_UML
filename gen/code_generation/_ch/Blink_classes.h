/*----------------------------------------------------------------------------
 * File:  Blink_classes.h
 *
 * This file defines the object type identification numbers for all classes
 * in the component:  Blink
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef BLINK_CLASSES_H
#define BLINK_CLASSES_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Initialization services for component:  Blink
 */
extern Escher_Extent_t * const Blink_class_info[];
extern const EventTaker_t Blink_EventDispatcher[];
void Blink_execute_initialization( void );

#define Blink_STATE_MODELS 1
/* Define constants to map to class numbers.  */
#define Blink_Flasher_CLASS_NUMBER 0
#define Blink_MAX_CLASS_NUMBERS 1

/* Provide a map of classes to task numbers.  */
#define Blink_TASK_NUMBERS  0

#define Blink_class_dispatchers\
  Blink_Flasher_Dispatch

/* Provide definitions of the shapes of the class structures.  */

typedef struct Blink_Flasher Blink_Flasher;

/* union of class declarations so we may derive largest class size */
#define Blink_CLASS_U \
  char Blink_dummy;\

/*
 * UML Domain Functions (Synchronous Services)
 */
void Blink_ArduinoTime( void );
void Blink_setup( void );

#include "BlinkEE_bridge.h"
#include "Blink.h"
#include "Blink_Flasher_class.h"
/*
 * roll-up of all events (with their parameters) for component Blink
 */
typedef union {
  Blink_Flasher_Events_u Blink_Flasher_Events_u_namespace;
} Blink_DomainEvents_u;

#ifdef	__cplusplus
}
#endif
#endif  /* BLINK_CLASSES_H */
