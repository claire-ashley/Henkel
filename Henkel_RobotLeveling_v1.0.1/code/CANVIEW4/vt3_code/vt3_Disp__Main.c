/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__MAIN_C
#define INCLUDE__VT3_DISP__MAIN_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Main.h"
#include "vt3_Event__Main.h"


/* ROM configuration of indicator Main */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_Main = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* no event code    */ (void (*)(UINT8)) NULL,
	/* background       */ { VT3IMG_BITMAP_ARGB8888, vt3_BMP__Blk3_0_0_argb8888, {255,0,0,0}, { 255, 0, 0, 0 } },
}; /* __ROM_value__ind_Main */

/* initialization of the runtime status of indicator Main */
static const vt3_indicator_ScreenModel FAR __init_value__ind_Main = {
	/* ROM parameters   */ &__ROM_value__ind_Main,
}; /* __init_value__ind_Main */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_Main_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_Main_simple_text,
	/* width            */ 129,
	/* height           */ 42,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_RobotoBold36,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_Main_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_Main_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_Main_simple_text,
	/* x                */ 85,
	/* y                */ 70,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_Main_simple_text */

/* ROM configuration of indicator simple_text_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_Main_simple_text_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_Main_simple_text_2,
	/* width            */ 136,
	/* height           */ 42,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_RobotoBold36,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_Main_simple_text_2 */

/* initialization of the runtime status of indicator simple_text_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_Main_simple_text_2 = {
	/* ROM parameters   */ &__ROM_value__ind_Main_simple_text_2,
	/* x                */ 250,
	/* y                */ 70,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_Main_simple_text_2 */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_Main_multibitmap_bitmap[2] = {
	{ VT3IMG_BITMAP_ARGB8888, vt3_BMP__Red_0_0_argb8888, {255,0,0,0}, { 255, 0, 0, 0 } }, 
	{ VT3IMG_BITMAP_ARGB8888, vt3_BMP__Green_0_0_argb8888, {255,0,0,0}, { 255, 0, 0, 0 } }, 
}; /* ind_Main_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_Main_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_Main_multibitmap,
	/* width            */ 135,
	/* height           */ 60,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_Main_multibitmap_bitmap,
}; /* __ROM_value__ind_Main_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_Main_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_Main_multibitmap,
	/* x                */ 81,
	/* y                */ 122,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_Main_multibitmap */

/* status of indicator multibitmap_2: array bitmap */
static const vt3_image FAR ind_Main_multibitmap_2_bitmap[2] = {
	{ VT3IMG_BITMAP_ARGB8888, vt3_BMP__Red_0_0_argb8888, {255,0,0,0}, { 255, 0, 0, 0 } }, 
	{ VT3IMG_BITMAP_ARGB8888, vt3_BMP__Green_0_0_argb8888, {255,0,0,0}, { 255, 0, 0, 0 } }, 
}; /* ind_Main_multibitmap_2_bitmap[] */

/* ROM configuration of indicator multibitmap_2 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_Main_multibitmap_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_Main_multibitmap_2,
	/* width            */ 135,
	/* height           */ 60,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_Main_multibitmap_2_bitmap,
}; /* __ROM_value__ind_Main_multibitmap_2 */

/* initialization of the runtime status of indicator multibitmap_2 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_Main_multibitmap_2 = {
	/* ROM parameters   */ &__ROM_value__ind_Main_multibitmap_2,
	/* x                */ 250,
	/* y                */ 121,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_Main_multibitmap_2 */

/* ROM configuration of indicator number */
static const char FAR ind_Main_number__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_Main_number = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_Main_number,
	/* width            */ 130,
	/* height           */ 57,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_RobotoBold49,
	/* separator        */ ind_Main_number__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_Main_number */

/* initialization of the runtime status of indicator number */
static const vt3_indicator_Number FAR __init_value__ind_Main_number = {
	/* ROM parameters   */ &__ROM_value__ind_Main_number,
	/* x                */ 253,
	/* y                */ 125,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 900,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_Main_number */

/* ROM configuration of indicator number_2 */
static const char FAR ind_Main_number_2__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_Main_number_2 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_Main_number_2,
	/* width            */ 130,
	/* height           */ 57,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_RobotoBold49,
	/* separator        */ ind_Main_number_2__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_Main_number_2 */

/* initialization of the runtime status of indicator number_2 */
static const vt3_indicator_Number FAR __init_value__ind_Main_number_2 = {
	/* ROM parameters   */ &__ROM_value__ind_Main_number_2,
	/* x                */ 83,
	/* y                */ 125,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 900,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_Main_number_2 */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_Main[] = {
	{ &vt3_screen_union.Main._background, &__init_value__ind_Main, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.Main.simple_text, &__init_value__ind_Main_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.Main.simple_text_2, &__init_value__ind_Main_simple_text_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.Main.multibitmap, &__init_value__ind_Main_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.Main.multibitmap_2, &__init_value__ind_Main_multibitmap_2, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.Main.number, &__init_value__ind_Main_number, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.Main.number_2, &__init_value__ind_Main_number_2, sizeof(vt3_indicator_Number) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_Main(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_Main; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_Main(BYTE event)
{
	/* event procedure for the screen */
	vt3_event_ind_Main(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.Main._background);

	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.Main.simple_text);


	/* indicator "simple_text_2" of type "SimpleText" */

	/* draw the indicator: simple_text_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.Main.simple_text_2);


	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.Main.multibitmap);


	/* indicator "multibitmap_2" of type "MultiBitmap" */

	/* draw the indicator: multibitmap_2 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.Main.multibitmap_2);


	/* indicator "number" of type "Number" */

	/* draw the indicator: number */
	vt3_draw_indicator_Number(event, &vt3_screen_union.Main.number);


	/* indicator "number_2" of type "Number" */

	/* draw the indicator: number_2 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.Main.number_2);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_Main() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_Main[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_Main[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_Main[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_Main[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_Main[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_Main[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_Main[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_Main[] */


#endif /* INCLUDE__VT3_DISP__MAIN_C */

/* end of file */
