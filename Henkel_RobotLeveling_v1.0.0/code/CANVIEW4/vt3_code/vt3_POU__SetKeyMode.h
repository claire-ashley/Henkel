/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__SETKEYMODE_H
#define INCLUDE__VT3_POU__SETKEYMODE_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	ENUM_KEY_MODE    newMode;             /* Key shutdown modality                    */
	ENUM_MODE_ERR    result;              /* Return of function                       */
} SetKeyMode_t;

/* prototype for the function that initializes the POU */
void SetKeyMode__init(void);

/* prototype for the function that contains the POU body */
void SetKeyMode__call(void);




#endif /* INCLUDE__VT3_POU__SETKEYMODE_H */

/* end of file */
