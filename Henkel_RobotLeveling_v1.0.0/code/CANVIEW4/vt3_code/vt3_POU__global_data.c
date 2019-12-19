/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__GLOBAL_DATA_C
#define INCLUDE__VT3_POU__GLOBAL_DATA_C

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



/* initializers of global variables */

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__global_data[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__global_data[] */

/* initialization of global data block */
void global_data__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__global_data; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
}



#endif /* INCLUDE__VT3_POU__GLOBAL_DATA_C */

/* end of file */
