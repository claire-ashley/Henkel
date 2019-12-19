/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__READSTRINGCOM_H
#define INCLUDE__VT3_POU__READSTRINGCOM_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	STRING255        OutBufferDataRX_serial; /* Data to receive on SERIAL                */
	UINT             index_buffer_serial; /* Index buffer receive on SERIAL           */
} readStringCOM_t;

/* prototype for the function that initializes the POU */
void readStringCOM__init(void);

/* prototype for the function that contains the POU body */
void readStringCOM__call(void);




#endif /* INCLUDE__VT3_POU__READSTRINGCOM_H */

/* end of file */
