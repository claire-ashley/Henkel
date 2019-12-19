/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SPLASH_H
#define INCLUDE__VT3_DISP__SPLASH_H

#include "vt3_base.h"


/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_Splash_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_MultiBitmap                    multibitmap;
} vt3_screen_struct_Splash_t;


/* the screen initialization function */
void vt3_init_ind_Splash(void);

/* the screen drawing function */
void vt3_draw_ind_Splash(BYTE event);

/* timer event handler for screen: /project/CANVIEW4/Screens/Splash */
void vt3_event_ind_Splash(BYTE event)
;

#endif /* INCLUDE__VT3_DISP__SPLASH_H */

/* end of file */
