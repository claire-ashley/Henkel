/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__OPENUSB_H
#define INCLUDE__VT3_POU__OPENUSB_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	STRING20         fname;               /* Pointer to the char array that contains the file name */
	ENUM_OPEN_FILE   option;              /* Modality to open file                    */
	ENUM_USB_ERR     result;              /* Return of function                       */
} openUSB_t;

/* prototype for the function that initializes the POU */
void openUSB__init(void);

/* prototype for the function that contains the POU body */
void openUSB__call(void);




#endif /* INCLUDE__VT3_POU__OPENUSB_H */

/* end of file */
