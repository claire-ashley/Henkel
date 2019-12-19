/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__READBYTECOM_H
#define INCLUDE__VT3_POU__READBYTECOM_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	DATA_ARRAY_255   OutBufferDataRX_serial; /* Data to receive on SERIAL                */
	UINT             index_buffer_serial; /* Index buffer receive on SERIAL           */
} readByteCOM_t;

/* prototype for the function that initializes the POU */
void readByteCOM__init(void);

/* prototype for the function that contains the POU body */
void readByteCOM__call(void);




#endif /* INCLUDE__VT3_POU__READBYTECOM_H */

/* end of file */
