/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP_COMMON_H
#define INCLUDE__VT3_DISP_COMMON_H

#include "vt3_base.h"
#include "vt3_Disp__ScreenFrame.h"
#include "vt3_Event__ScreenFrame.h"
#include "vt3_Disp__Main.h"
#include "vt3_Event__Main.h"
#include "vt3_Disp__Splash.h"
#include "vt3_Event__Splash.h"


/* the screen numbers */
#define SCREEN_MAIN                 (0)
#define SCREEN_SPLASH               (1)

/* all screens share the same memory */
typedef union vt3_screen_union_t
{
	vt3_screen_struct_Main_t Main;
	vt3_screen_struct_Splash_t Splash;
} vt3_screen_union_t;

/* extern variables */
extern vt3_screen_union_t FAR vt3_screen_union;

/* global display initialization function */
void vt3_disp_init(void);

/* global display drawing function */
void vt3_disp_draw(void);


#endif /* INCLUDE__VT3_DISP_COMMON_H */

/* end of file */
