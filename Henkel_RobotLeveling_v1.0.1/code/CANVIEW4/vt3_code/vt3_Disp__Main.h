/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__MAIN_H
#define INCLUDE__VT3_DISP__MAIN_H

#include "vt3_base.h"


/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_Main_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_SimpleText                     simple_text;
	vt3_indicator_SimpleText                     simple_text_2;
	vt3_indicator_MultiBitmap                    multibitmap;
	vt3_indicator_MultiBitmap                    multibitmap_2;
	vt3_indicator_Number                         number;
	vt3_indicator_Number                         number_2;
} vt3_screen_struct_Main_t;


/* the screen initialization function */
void vt3_init_ind_Main(void);

/* the screen drawing function */
void vt3_draw_ind_Main(BYTE event);

/* timer event handler for screen: /project/CANVIEW4/Screens/Main */
void vt3_event_ind_Main(BYTE event)
;

#endif /* INCLUDE__VT3_DISP__MAIN_H */

/* end of file */
