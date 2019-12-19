/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_INIT_PERSISTENT_P_ARRAY_C
#define INCLUDE__VT3_INIT_PERSISTENT_P_ARRAY_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_vars.h"


/* initializers of %P array */

/* table of initializators of %P array */
static const vt3_screen_initializer FAR __init_p_array_table[] = 
{
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_p_array_table[] */

/* initialization of %P array */
void initialize_bytearray_P(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize %P array with zeros */
	FarMemSet(BYTEP, 0, BYTEP_SIZE);

	/* initialize nonzero variables of %P array */
	for ( p = __init_p_array_table; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}
}

#endif /* INCLUDE__VT3_INIT_PERSISTENT_P_ARRAY_C */

/* end of file */
