/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREENFRAME_H
#define INCLUDE__VT3_DISP__SCREENFRAME_H

#include "vt3_base.h"


extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F1;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F2;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F3;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F4;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F5;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_screen_backlight;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_buzzer;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_keys_backlight;

/* the screen initialization function */
void vt3_init_ind_screen_frame(void);

/* the screen drawing function */
void vt3_draw_ind_screen_frame(BYTE event);

/* timer event handler for screen frame: /project/CANVIEW4/screen_frame */
void vt3_event_ind_screen_frame(BYTE event)
;

#endif /* INCLUDE__VT3_DISP__SCREENFRAME_H */

/* end of file */
