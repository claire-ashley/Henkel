/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SPLASH_H
#define INCLUDE__VT3_EVENT__SPLASH_H

#include "vt3_base.h"

/* timer event handler for screen: /project/CANVIEW4/Screens/Splash */
void vt3_event_ind_Splash(BYTE event)
;

/* timer event handler for indicator: /project/CANVIEW4/Screens/Splash/multibitmap 
 * runs every 200ms
 */
void vt3_event_ind_Splash_multibitmap(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

#endif /* INCLUDE__VT3_EVENT__SPLASH_H */

/* end of file */
