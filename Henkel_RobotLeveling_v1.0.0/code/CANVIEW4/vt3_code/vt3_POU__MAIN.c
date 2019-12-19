/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_C
#define INCLUDE__VT3_POU__MAIN_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_extra.h"
#include "version_vt3_common.h"
#include "version_vt3_runtime.h"
#include "vt3_POU__initCOM.h"
#include "vt3_POU__writeStringCOM.h"
#include "vt3_POU__writeByteCOM.h"
#include "vt3_POU__readStringCOM.h"
#include "vt3_POU__readByteCOM.h"
#include "vt3_POU__resetBufferCOM.h"
#include "vt3_POU__ENUM_PARITY.h"
#include "vt3_POU__ENUM_UART_ERR.h"
#include "vt3_POU__DATA_ARRAY_50.h"
#include "vt3_POU__DATA_ARRAY_255.h"
#include "vt3_POU__mountUSB.h"
#include "vt3_POU__umountUSB.h"
#include "vt3_POU__openUSB.h"
#include "vt3_POU__closeUSB.h"
#include "vt3_POU__writeStringUSB.h"
#include "vt3_POU__readStringUSB.h"
#include "vt3_POU__writeElogUSB.h"
#include "vt3_POU__ENUM_USB_ERR.h"
#include "vt3_POU__ENUM_OPEN_FILE.h"
#include "vt3_POU__SetKeyMode.h"
#include "vt3_POU__PowerOff.h"
#include "vt3_POU__ForceUpdate.h"
#include "vt3_POU__ENUM_UPDATE.h"
#include "vt3_POU__ENUM_KEY_MODE.h"
#include "vt3_POU__ENUM_MODE_ERR.h"



/* initializers of addressed variables */

/* table of initializators of addressed variables */
static const vt3_screen_initializer FAR __init_table__MAIN[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__MAIN[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const MAIN_t FAR __const__MAIN__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__MAIN__param_init */

/* initialization of PROGRAM status */
void MAIN__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__MAIN; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&MAIN, &__const__MAIN__param_init, sizeof __const__MAIN__param_init);

	/* initialize function block instances */
}

/* PROGRAM Core execution */
static void MAIN__core(void)
{
	/* local variables */
	/* end of local variables */

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/CANVIEW4/Programs/MAIN
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	// Screen logic
	
	if (vInit == 0)
	{
	    vt3_screen = SCREEN_SPLASH;
	    vInit = 1;
	}
	
	if (vSplashTimer < 30)
	{
	    vSplashTimer ++;
	}
	else
	{
	    vt3_screen = SCREEN_MAIN;
	}
	
	INIT_byt1 = 0x01;
	INIT_byt2 = 0x00;
	
	if ((vSplashTimer >= 30) && (vStartUpCounter < 10))
	{
	    vStartUpCounter ++;
	}
	
	if (vStartUpCounter == 1)
	{
	    vt3_can_trigger_Init = (TRUE);
	}
	
	vt3_can_trigger_Sync = (TRUE);
	
	//Angle Conversions
	degreeLong = AGL_longitudinal;
	degreeLat = AGL_lateral;
	//angleConvLong = UINT_TO_UDINT(18000 * AGL_longitudinal);
	//degreeLong = UDINT_TO_UINT(angleConvLong/65535);
	
	//angleConvLat = UINT_TO_UDINT(18000 * AGL_lateral);
	//degreeLat = UDINT_TO_UINT(angleConvLat/65535);
	
	 
	 vBacklight = 1000;
	
	}

	/* end of PROGRAM body */
}

/* PROGRAM execution */
void MAIN__call(void)
{
	/* start task time variable */
	DWORD vt3_task_MAIN_start_time = 0;

	/* preamble: conditional execution */
	MAIN.ENO = MAIN.EN;
	if ( ! MAIN.EN )
	{
		/* resetting vt3_task_run_time_MAIN */
		vt3_task_run_time_MAIN = 0;
		return;
	}

	/* getting task start timestamp */
	vt3_task_MAIN_start_time = vt3_get_ms_since_start(0);

	/* actual MAIN call */
	MAIN__core();

	/* getting task end timestamp */
	vt3_task_run_time_MAIN = vt3_get_ms_since_start(vt3_task_MAIN_start_time);
}



#endif /* INCLUDE__VT3_POU__MAIN_C */

/* end of file */
