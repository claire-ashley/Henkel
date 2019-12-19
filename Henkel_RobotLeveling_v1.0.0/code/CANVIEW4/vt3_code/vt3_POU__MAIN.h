/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_H
#define INCLUDE__VT3_POU__MAIN_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

} MAIN_t;

/* prototype for the function that initializes the POU */
void MAIN__init(void);

/* prototype for the function that contains the POU body */
void MAIN__call(void);




#endif /* INCLUDE__VT3_POU__MAIN_H */

/* end of file */
