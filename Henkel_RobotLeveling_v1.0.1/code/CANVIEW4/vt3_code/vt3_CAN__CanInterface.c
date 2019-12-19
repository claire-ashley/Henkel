/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANINTERFACE_C
#define INCLUDE__VT3_CAN__CANINTERFACE_C

#include <stdlib.h>
#include "vt3_runtime.h"
#include "vt3_canlib.h"
#include "vt3_POU_common.h"
#include "vt3_CAN__CanInterface.h"
#include "vt3_vars.h"



/* CAN-bus receive interrupt function */
/* message:  Angle */
/* COB-ID:   0x00000185 */
/* CAN port: 0 */
static void canrx_0_00000185_Angle(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: longitudinal */
	if ( dlc >= 2 )
	{
		AGL_longitudinal = (INT)(((INT)db[0] | ((INT)db[1] << 8)));
	}
	/* extract variable: lateral */
	if ( dlc >= 4 )
	{
		AGL_lateral = (INT)(((INT)db[2] | ((INT)db[3] << 8)));
	}

} /* CAN-bus receive end */

/* table of received messages */
static const vt3_can_rx_init_t FAR vt3_can_rx_init_CanInterface[1] = {
	/*    cob-id  j1939    tout  alm  alm   mux   mux  call function                            */
	/*            j1939          off   on   pos    id                                           */
	{ 0x00000185, /*N/A*/  1500,   3,   1,  255,    0, canrx_0_00000185_Angle                   },
};

/* initializers for receive and transmit variables */
static const INT FAR __init_value__AGL_longitudinal = ((INT)0);
static const INT FAR __init_value__AGL_lateral = ((INT)0);
static const BYTE FAR __init_value__INIT_byt1 = ((BYTE)0x0U);
static const BYTE FAR __init_value__INIT_byt2 = ((BYTE)0x0U);

/* table of initializators */
static const vt3_screen_initializer FAR __init_table__CanInterface[] = {
	{ &AGL_longitudinal    , &__init_value__AGL_longitudinal, 2 },
	{ &AGL_lateral         , &__init_value__AGL_lateral, 2 },
	{ &INIT_byt1           , &__init_value__INIT_byt1, 1 },
	{ &INIT_byt2           , &__init_value__INIT_byt2, 1 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__CanInterface[] */

/* transmit timers */
static WORD vt3_can_tx_timeout_Init = 0;
static WORD vt3_can_tx_timeout_Sync = 0;


/******************************************************************************/
/* remote I/O devices */
/******************************************************************************/


/******************************************************************************/
/* functions */
/******************************************************************************/

/* CAN interface initialization function */
void vt3_can_CanInterface_init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize variables */
	for ( p = __init_table__CanInterface; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* reset alarms */
	vt3_can_alarm_busoff_CAN_interface = FALSE;
	vt3_can_alarm_Angle = FALSE;

	/* initialize can TX value */
	vt3_can_period_Init = 0;
	vt3_can_trigger_Init = FALSE;
	vt3_can_period_Sync = 0;
	vt3_can_trigger_Sync = FALSE;

	/* reset timers */
	vt3_can_tx_timeout_Init = 0;
	vt3_can_tx_timeout_Sync = 0;

	/* initialize the interface */
	vt3_init_interface(0, 250, vt3_can_rx_init_CanInterface, 1);

	/******************************************************************************/
	/* initialization of remote I/O devices */
	/******************************************************************************/


}

/* CAN interface receive function */
void vt3_can_CanInterface_rx(void)
{
	CanRxObj * pmsg;  /* pointer to message record */

	/* check for BUSOFF errors */
	if ( vt3_can_check_busoff(0) )
	{
		vt3_can_alarm_busoff_CAN_interface = TRUE;
	}

	/* RX message: Angle */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_ANGLE);
	if ( ! pmsg->RxOK ) 
	{
		vt3_can_alarm_Angle = TRUE;

		AGL_longitudinal = __init_value__AGL_longitudinal;
		AGL_lateral = __init_value__AGL_lateral;
	}
	else
	{
		vt3_can_alarm_Angle = FALSE;
	}


	/******************************************************************************/
	/* receive messages from remote I/O devices */
	/******************************************************************************/


}

/* CAN interface transmit function */
void vt3_can_CanInterface_tx(void)
{
	BYTE txcounter = 0;
	BYTE save_txcounter = 0;
	BYTE db[8];

	/* TX message: Init */
	if ( (vt3_can_period_Init != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_Init)) ||
	     (vt3_can_trigger_Init == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((INIT_byt1 & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((INIT_byt2 & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, vt3_tx_cobid_list[0], 2, db) == ERR_OK )
		{
			vt3_can_trigger_Init = 0;
			vt3_can_tx_timeout_Init = TIME_TO_TICKS_CAN_TX(vt3_can_period_Init);
		}
	}

	/* TX message: Sync */
	if ( (vt3_can_period_Sync != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_Sync)) ||
	     (vt3_can_trigger_Sync == 1) ) 
	{
		(void) memset(db, 0, sizeof db);

		/* send message */
		if ( vt3_send_canmsg(0, vt3_tx_cobid_list[1], 0, db) == ERR_OK )
		{
			vt3_can_trigger_Sync = 0;
			vt3_can_tx_timeout_Sync = TIME_TO_TICKS_CAN_TX(vt3_can_period_Sync);
		}
	}

}


#endif /* INCLUDE__VT3_CAN__CANINTERFACE_C */

/* end of file */
