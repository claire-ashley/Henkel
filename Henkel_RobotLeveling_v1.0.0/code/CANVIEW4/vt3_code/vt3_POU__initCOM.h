/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__INITCOM_H
#define INCLUDE__VT3_POU__INITCOM_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	UDINT            Baud;                /* Baud in bps                              */
	ENUM_PARITY      Parity;              /* PARITY__NONE or PARITY__ODD or PARITY__EVEN */
	USINT            Bits;                /* The length of the data can be 8 or 9 bits */
	ENUM_UART_ERR    result;              /* Return of function                       */
} initCOM_t;

/* prototype for the function that initializes the POU */
void initCOM__init(void);

/* prototype for the function that contains the POU body */
void initCOM__call(void);




#endif /* INCLUDE__VT3_POU__INITCOM_H */

/* end of file */
