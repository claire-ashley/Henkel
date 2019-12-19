/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREENFRAME_C
#define INCLUDE__VT3_DISP__SCREENFRAME_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__ScreenFrame.h"
#include "vt3_Event__ScreenFrame.h"


/* ROM configuration of indicator screen_frame */
static const vt3_indicator_ROM_ScreenFrameModel FAR __ROM_value__ind_screen_frame = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenFrameModel,
	/* no event code    */ (void (*)(UINT8)) NULL,
}; /* __ROM_value__ind_screen_frame */

/* initialization of the runtime status of indicator screen_frame */
static const vt3_indicator_ScreenFrameModel FAR __init_value__ind_screen_frame = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame,
}; /* __init_value__ind_screen_frame */

/* ROM configuration of indicator key_F1 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F1 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* event code       */ vt3_event_ind_screen_frame_key_F1,
	/* hwNumber         */ 0,
}; /* __ROM_value__ind_screen_frame_key_F1 */

/* initialization of the runtime status of indicator key_F1 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F1,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F1 */

/* ROM configuration of indicator key_F2 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F2 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* event code       */ vt3_event_ind_screen_frame_key_F2,
	/* hwNumber         */ 1,
}; /* __ROM_value__ind_screen_frame_key_F2 */

/* initialization of the runtime status of indicator key_F2 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F2,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F2 */

/* ROM configuration of indicator key_F3 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F3 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* event code       */ vt3_event_ind_screen_frame_key_F3,
	/* hwNumber         */ 2,
}; /* __ROM_value__ind_screen_frame_key_F3 */

/* initialization of the runtime status of indicator key_F3 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F3,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F3 */

/* ROM configuration of indicator key_F4 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F4 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* event code       */ vt3_event_ind_screen_frame_key_F4,
	/* hwNumber         */ 3,
}; /* __ROM_value__ind_screen_frame_key_F4 */

/* initialization of the runtime status of indicator key_F4 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F4,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F4 */

/* ROM configuration of indicator key_F5 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F5 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* event code       */ vt3_event_ind_screen_frame_key_F5,
	/* hwNumber         */ 4,
}; /* __ROM_value__ind_screen_frame_key_F5 */

/* initialization of the runtime status of indicator key_F5 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F5 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F5,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F5 */

/* ROM configuration of indicator screen_backlight */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_screen_backlight = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_screen_backlight,
	/* hwNumber         */ 1200,
}; /* __ROM_value__ind_screen_frame_screen_backlight */

/* initialization of the runtime status of indicator screen_backlight */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_screen_backlight = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_screen_backlight,
	/* currentValue     */ 1000,
}; /* __init_value__ind_screen_frame_screen_backlight */

/* ROM configuration of indicator buzzer */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_buzzer = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalIndicator FARPTR)) NULL,
	/* hwNumber         */ 1201,
}; /* __ROM_value__ind_screen_frame_buzzer */

/* initialization of the runtime status of indicator buzzer */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_buzzer = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_buzzer,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_buzzer */

/* ROM configuration of indicator keys_backlight */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_keys_backlight = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalIndicator FARPTR)) NULL,
	/* hwNumber         */ 1202,
}; /* __ROM_value__ind_screen_frame_keys_backlight */

/* initialization of the runtime status of indicator keys_backlight */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_keys_backlight = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_keys_backlight,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_keys_backlight */


/* runtime status of physical indicators */
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F1;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F2;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F3;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F4;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F5;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_screen_backlight;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_buzzer;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_keys_backlight;

/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen_frame[] = {
	{ &ind_screen_frame_key_F1, &__init_value__ind_screen_frame_key_F1, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F2, &__init_value__ind_screen_frame_key_F2, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F3, &__init_value__ind_screen_frame_key_F3, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F4, &__init_value__ind_screen_frame_key_F4, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F5, &__init_value__ind_screen_frame_key_F5, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_screen_backlight, &__init_value__ind_screen_frame_screen_backlight, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_buzzer, &__init_value__ind_screen_frame_buzzer, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_keys_backlight, &__init_value__ind_screen_frame_keys_backlight, sizeof(vt3_indicator_PhysicalIndicator) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_screen_frame(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_screen_frame; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_screen_frame(BYTE event)
{
	/* event procedure for the screen frame */
	vt3_event_ind_screen_frame(event);

	/* indicator "key_F1" of type "PhysicalKey" */

	/* draw the indicator: key_F1 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F1);


	/* indicator "key_F2" of type "PhysicalKey" */

	/* draw the indicator: key_F2 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F2);


	/* indicator "key_F3" of type "PhysicalKey" */

	/* draw the indicator: key_F3 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F3);


	/* indicator "key_F4" of type "PhysicalKey" */

	/* draw the indicator: key_F4 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F4);


	/* indicator "key_F5" of type "PhysicalKey" */

	/* draw the indicator: key_F5 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F5);


	/* indicator "screen_backlight" of type "PhysicalIndicator" */

	/* draw the indicator: screen_backlight */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_screen_backlight);


	/* indicator "buzzer" of type "PhysicalIndicator" */

	/* draw the indicator: buzzer */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_buzzer);


	/* indicator "keys_backlight" of type "PhysicalIndicator" */

	/* draw the indicator: keys_backlight */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_keys_backlight);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen_frame() */


#endif /* INCLUDE__VT3_DISP__SCREENFRAME_C */

/* end of file */
