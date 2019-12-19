/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SPLASH_C
#define INCLUDE__VT3_DISP__SPLASH_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Splash.h"
#include "vt3_Event__Splash.h"


/* ROM configuration of indicator Splash */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_Splash = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* no event code    */ (void (*)(UINT8)) NULL,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, { 255, 255, 255, 255 }, { 0, 0, 0, 0 } },
}; /* __ROM_value__ind_Splash */

/* initialization of the runtime status of indicator Splash */
static const vt3_indicator_ScreenModel FAR __init_value__ind_Splash = {
	/* ROM parameters   */ &__ROM_value__ind_Splash,
}; /* __init_value__ind_Splash */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_Splash_multibitmap_bitmap[1] = {
	{ VT3IMG_BITMAP_ARGB8888, vt3_BMP__Henkel460X259_0_0_argb8888, {255,0,0,0}, { 255, 0, 0, 0 } }, 
}; /* ind_Splash_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_Splash_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_Splash_multibitmap,
	/* width            */ 460,
	/* height           */ 259,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* bitmap           */ ind_Splash_multibitmap_bitmap,
}; /* __ROM_value__ind_Splash_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_Splash_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_Splash_multibitmap,
	/* x                */ 10,
	/* y                */ 5,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_Splash_multibitmap */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_Splash[] = {
	{ &vt3_screen_union.Splash._background, &__init_value__ind_Splash, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.Splash.multibitmap, &__init_value__ind_Splash_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_Splash(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_Splash; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_Splash(BYTE event)
{
	/* event procedure for the screen */
	vt3_event_ind_Splash(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.Splash._background);

	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.Splash.multibitmap);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_Splash() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_Splash[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_Splash[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_Splash[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_Splash[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_Splash[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_Splash[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_Splash[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_Splash[] */


#endif /* INCLUDE__VT3_DISP__SPLASH_C */

/* end of file */
