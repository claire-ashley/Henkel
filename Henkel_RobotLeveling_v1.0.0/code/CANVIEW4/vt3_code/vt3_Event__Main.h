/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__MAIN_H
#define INCLUDE__VT3_EVENT__MAIN_H

#include "vt3_base.h"

/* timer event handler for screen: /project/CANVIEW4/Screens/Main */
void vt3_event_ind_Main(BYTE event)
;

/* timer event handler for indicator: /project/CANVIEW4/Screens/Main/simple_text 
 * runs every 200ms
 */
void vt3_event_ind_Main_simple_text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/CANVIEW4/Screens/Main/simple_text_2 
 * runs every 200ms
 */
void vt3_event_ind_Main_simple_text_2(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/CANVIEW4/Screens/Main/number 
 * runs every 100ms
 */
void vt3_event_ind_Main_number(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/CANVIEW4/Screens/Main/number_2 
 * runs every 100ms
 */
void vt3_event_ind_Main_number_2(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

#endif /* INCLUDE__VT3_EVENT__MAIN_H */

/* end of file */
