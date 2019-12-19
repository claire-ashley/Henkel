/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANINTERFACE_H
#define INCLUDE__VT3_CAN__CANINTERFACE_H

#include "vt3_base.h"


/* received messages */

#define VT3_RXMSG_ANGLE                (0)
/* functions */

/* CAN interface initialization function */
void vt3_can_CanInterface_init(void);

/* CAN interface receive function */
void vt3_can_CanInterface_rx(void);

/* CAN interface transmit function */
void vt3_can_CanInterface_tx(void);


#endif /* INCLUDE__VT3_CAN__CANINTERFACE_H */

/* end of file */
