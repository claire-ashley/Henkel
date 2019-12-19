/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SCREENFRAME_H
#define INCLUDE__VT3_EVENT__SCREENFRAME_H

#include "vt3_base.h"

/* timer event handler for screen frame: /project/CANVIEW4/screen_frame */
void vt3_event_ind_screen_frame(BYTE event)
;

/* timer event handler for physical control: /project/CANVIEW4/screen_frame/key_F1 */
void vt3_event_ind_screen_frame_key_F1(
	BYTE event, 
	vt3_indicator_PhysicalKey FARPTR ind)
;

/* timer event handler for physical control: /project/CANVIEW4/screen_frame/key_F2 */
void vt3_event_ind_screen_frame_key_F2(
	BYTE event, 
	vt3_indicator_PhysicalKey FARPTR ind)
;

/* timer event handler for physical control: /project/CANVIEW4/screen_frame/key_F3 */
void vt3_event_ind_screen_frame_key_F3(
	BYTE event, 
	vt3_indicator_PhysicalKey FARPTR ind)
;

/* timer event handler for physical control: /project/CANVIEW4/screen_frame/key_F4 */
void vt3_event_ind_screen_frame_key_F4(
	BYTE event, 
	vt3_indicator_PhysicalKey FARPTR ind)
;

/* timer event handler for physical control: /project/CANVIEW4/screen_frame/key_F5 */
void vt3_event_ind_screen_frame_key_F5(
	BYTE event, 
	vt3_indicator_PhysicalKey FARPTR ind)
;

/* timer event handler for physical indicator: /project/CANVIEW4/screen_frame/screen_backlight */
void vt3_event_ind_screen_frame_screen_backlight(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
;

#endif /* INCLUDE__VT3_EVENT__SCREENFRAME_H */

/* end of file */
