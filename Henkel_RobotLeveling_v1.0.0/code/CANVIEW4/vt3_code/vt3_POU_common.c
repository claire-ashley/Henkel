/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU_COMMON_C
#define INCLUDE__VT3_POU_COMMON_C

#include "vt3_runtime.h"
#include "vt3_POU_common.h"
#include "vt3_POU__MAIN.h"
#include "vt3_POU__global_data.h"
#include "vt3_POU__key_data.h"
#include "vt3_POU__readStringCOM.h"
#include "vt3_POU__resetBufferCOM.h"
#include "vt3_POU__ENUM_PARITY.h"
#include "vt3_POU__ENUM_UART_ERR.h"
#include "vt3_POU__initCOM.h"
#include "vt3_POU__writeStringCOM.h"
#include "vt3_POU__DATA_ARRAY_50.h"
#include "vt3_POU__writeByteCOM.h"
#include "vt3_POU__DATA_ARRAY_255.h"
#include "vt3_POU__readByteCOM.h"
#include "vt3_POU__ENUM_USB_ERR.h"
#include "vt3_POU__mountUSB.h"
#include "vt3_POU__umountUSB.h"
#include "vt3_POU__closeUSB.h"
#include "vt3_POU__writeStringUSB.h"
#include "vt3_POU__readStringUSB.h"
#include "vt3_POU__writeElogUSB.h"
#include "vt3_POU__ENUM_OPEN_FILE.h"
#include "vt3_POU__openUSB.h"
#include "vt3_POU__ENUM_UPDATE.h"
#include "vt3_POU__ForceUpdate.h"
#include "vt3_POU__ENUM_KEY_MODE.h"
#include "vt3_POU__ENUM_MODE_ERR.h"
#include "vt3_POU__SetKeyMode.h"
#include "vt3_POU__PowerOff.h"



/* table of ENDIANNESS */
const vt3_endianness_table_t FAR vt3_endianness_table[] = {
	/* SA    endianness*/
	{  1, 0 }, 
	{  0, 0 } /* sentinel */
}; /* end of vt3_endianness_table[] */


/* task trampoline for MAIN */
static void __task__MAIN__(void)
{
	MAIN__call();
	vt3_free_temporary_strings();
}

/* table of TASKS */
const vt3_task_table_t FAR vt3_task_table[] = {
	/* priority   period    delay   program */
	{         1,     100,       0,  __task__MAIN__ },
	{ 0, 0, 0, (void (*)(void)) NULL } /* sentinel */
}; /* end of vt3_task_table[] */

/* idle TASK */
void vt3_idle_task(void)
{
	/* PROGRAM PLC_PRG is not declared: idle task does nothing */
}


/* this function is called at the beginning to initialize all POUs */
void vt3_init_all_pous(void)
{
	initialize_bytearray_P();
	initialize_bytearray_R();
	initialize_bytearray_F();

	MAIN__init();
	global_data__init();
	key_data__init();

	/* initialize library POUs */
	initCOM__init();
	writeStringCOM__init();
	writeByteCOM__init();
	readStringCOM__init();
	readByteCOM__init();
	resetBufferCOM__init();
	mountUSB__init();
	umountUSB__init();
	openUSB__init();
	closeUSB__init();
	writeStringUSB__init();
	readStringUSB__init();
	writeElogUSB__init();
	SetKeyMode__init();
	PowerOff__init();
	ForceUpdate__init();
}



#endif /* INCLUDE__VT3_POU_COMMON_C */

/* end of file */
