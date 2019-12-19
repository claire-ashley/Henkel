/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_VARS_H
#define INCLUDE__VT3_VARS_H

#include "vt3_base.h"
#include "vt3_extra.h"
#include "vt3_POU_string_typedef.h"



/**************************************************************************/

/* declaration of constants */

extern const char FAR vt3_const_prj_version[21];
extern const char FAR vt3_version[17];
extern const WORD FAR vt3_kwp2000_HostId;
extern const WORD FAR vt3_kwp2000_EcuId;
extern const DWORD FAR vt3_kwp2000_SecurityRoot;

/* variable:     vt3_screen_count
 * definition:   /project/CANVIEW4
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      index of current screen
 */
extern const UINT FAR vt3_screen_count;

/**************************************************************************/

/* declaration of ordinary variables */

/* variable:     vt3_can_alarm_busoff_CAN_interface
 * definition:   /project/CANVIEW4/CAN_interface
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/CANVIEW4/CAN_interface
 */
extern BOOL FAR vt3_can_alarm_busoff_CAN_interface;

/* variable:     INIT_byt1
 * definition:   /project/CANVIEW4/CAN_interface/Init
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR INIT_byt1;

/* variable:     INIT_byt2
 * definition:   /project/CANVIEW4/CAN_interface/Init
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR INIT_byt2;

/* variable:     vt3_can_period_Init
 * definition:   /project/CANVIEW4/CAN_interface/Init
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/CANVIEW4/CAN_interface/Init
 */
extern UINT FAR vt3_can_period_Init;

/* variable:     vt3_can_trigger_Init
 * definition:   /project/CANVIEW4/CAN_interface/Init
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/CANVIEW4/CAN_interface/Init
 */
extern BOOL FAR vt3_can_trigger_Init;

/* variable:     vt3_can_period_Sync
 * definition:   /project/CANVIEW4/CAN_interface/Sync
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/CANVIEW4/CAN_interface/Sync
 */
extern UINT FAR vt3_can_period_Sync;

/* variable:     vt3_can_trigger_Sync
 * definition:   /project/CANVIEW4/CAN_interface/Sync
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/CANVIEW4/CAN_interface/Sync
 */
extern BOOL FAR vt3_can_trigger_Sync;

/* variable:     vt3_can_alarm_Angle
 * definition:   /project/SICK_Inclinometer/CAN_interface/Angle
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/SICK_Inclinometer/CAN_interface/Angle
 */
extern BOOL FAR vt3_can_alarm_Angle;

/* variable:     AGL_longitudinal
 * definition:   /project/SICK_Inclinometer/CAN_interface/Angle
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR AGL_longitudinal;

/* variable:     AGL_lateral
 * definition:   /project/SICK_Inclinometer/CAN_interface/Angle
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR AGL_lateral;

/* variable:     MAIN
 * definition:   /project/CANVIEW4/Programs/MAIN
 * type:         MAIN
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern MAIN_t FAR MAIN;

/* variable:     vt3_screen
 * definition:   /project/CANVIEW4
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current screen
 */
extern UINT FAR vt3_screen;

/* variable:     vt3_language
 * definition:   /project/CANVIEW4
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current language
 */
extern UINT FAR vt3_language;

/* variable:     vt3_task_run_time_video_task
 * definition:   /project/CANVIEW4
 * type:         DWORD
 * address:      not specified
 * constant:     False
 * comment:      video task execution time [ms]
 */
extern DWORD FAR vt3_task_run_time_video_task;

/* variable:     vt3_bytearray_P_warning
 * definition:   /project/CANVIEW4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %P
 */
extern BOOL FAR vt3_bytearray_P_warning;

/* variable:     vt3_bytearray_P_error
 * definition:   /project/CANVIEW4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %P
 */
extern BOOL FAR vt3_bytearray_P_error;

/* variable:     vt3_bytearray_R_warning
 * definition:   /project/CANVIEW4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %R
 */
extern BOOL FAR vt3_bytearray_R_warning;

/* variable:     vt3_bytearray_R_error
 * definition:   /project/CANVIEW4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %R
 */
extern BOOL FAR vt3_bytearray_R_error;

/* variable:     vt3_alarm_inhibition_bitmask
 * definition:   /project/CANVIEW4
 * type:         WORD
 * address:      not specified
 * constant:     False
 * comment:      bitmask of alarm inhibitions
 */
extern WORD FAR vt3_alarm_inhibition_bitmask;

/* variable:     vt3_task_run_time_CAN_bus_task
 * definition:   /project/CANVIEW4
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      System task execution time [ms]
 */
extern UDINT FAR vt3_task_run_time_CAN_bus_task;

/* variable:     vt3_task_run_time_MAIN
 * definition:   /project/CANVIEW4
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      task MAIN execution time [ms]
 */
extern UDINT FAR vt3_task_run_time_MAIN;

/**************************************************************************/

/* declaration of ordinary variables from imported library: CANVIEW4_Lib */

/* variable:     initCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/initCOM/initCOM
 * type:         initCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern initCOM_t FAR initCOM;

/* variable:     writeStringCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/writeCOM/writeStringCOM/writeStringCOM
 * type:         writeStringCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern writeStringCOM_t FAR writeStringCOM;

/* variable:     writeByteCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/writeCOM/writeByteCOM/writeByteCOM
 * type:         writeByteCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern writeByteCOM_t FAR writeByteCOM;

/* variable:     readStringCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/readCOM/readStringCOM/readStringCOM
 * type:         readStringCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern readStringCOM_t FAR readStringCOM;

/* variable:     readByteCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/readCOM/readByteCOM/readByteCOM
 * type:         readByteCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern readByteCOM_t FAR readByteCOM;

/* variable:     resetBufferCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/resetBufferCOM/resetBufferCOM
 * type:         resetBufferCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern resetBufferCOM_t FAR resetBufferCOM;

/* variable:     PARITY__NONE
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_PARITY
 * type:         (PARITY__NONE:=0,PARITY__ODD:=1,PARITY__EVEN:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR PARITY__NONE;

/* variable:     PARITY__ODD
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_PARITY
 * type:         (PARITY__NONE:=0,PARITY__ODD:=1,PARITY__EVEN:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR PARITY__ODD;

/* variable:     PARITY__EVEN
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_PARITY
 * type:         (PARITY__NONE:=0,PARITY__ODD:=1,PARITY__EVEN:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR PARITY__EVEN;

/* variable:     UART__OK
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_UART_ERR
 * type:         (UART__OK:=0,UART__ERR:=1,UART__TX_ERR:=2,UART__RX_ERR:=3,UART__P_OUT_OF_RANGE:=4)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR UART__OK;

/* variable:     UART__ERR
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_UART_ERR
 * type:         (UART__OK:=0,UART__ERR:=1,UART__TX_ERR:=2,UART__RX_ERR:=3,UART__P_OUT_OF_RANGE:=4)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR UART__ERR;

/* variable:     UART__TX_ERR
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_UART_ERR
 * type:         (UART__OK:=0,UART__ERR:=1,UART__TX_ERR:=2,UART__RX_ERR:=3,UART__P_OUT_OF_RANGE:=4)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR UART__TX_ERR;

/* variable:     UART__RX_ERR
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_UART_ERR
 * type:         (UART__OK:=0,UART__ERR:=1,UART__TX_ERR:=2,UART__RX_ERR:=3,UART__P_OUT_OF_RANGE:=4)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR UART__RX_ERR;

/* variable:     UART__P_OUT_OF_RANGE
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_UART_ERR
 * type:         (UART__OK:=0,UART__ERR:=1,UART__TX_ERR:=2,UART__RX_ERR:=3,UART__P_OUT_OF_RANGE:=4)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR UART__P_OUT_OF_RANGE;

/* variable:     mountUSB
 * definition:   /project/CANVIEW4_Lib/USB/mountUSB/mountUSB
 * type:         mountUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mountUSB_t FAR mountUSB;

/* variable:     umountUSB
 * definition:   /project/CANVIEW4_Lib/USB/mountUSB/umountUSB
 * type:         umountUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern umountUSB_t FAR umountUSB;

/* variable:     openUSB
 * definition:   /project/CANVIEW4_Lib/USB/openUSB/openUSB
 * type:         openUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern openUSB_t FAR openUSB;

/* variable:     closeUSB
 * definition:   /project/CANVIEW4_Lib/USB/openUSB/closeUSB
 * type:         closeUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern closeUSB_t FAR closeUSB;

/* variable:     writeStringUSB
 * definition:   /project/CANVIEW4_Lib/USB/writeUSB/writeStringUSB
 * type:         writeStringUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern writeStringUSB_t FAR writeStringUSB;

/* variable:     readStringUSB
 * definition:   /project/CANVIEW4_Lib/USB/readUSB/readStringUSB
 * type:         readStringUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern readStringUSB_t FAR readStringUSB;

/* variable:     writeElogUSB
 * definition:   /project/CANVIEW4_Lib/USB/writeElogUSB/writeElogUSB
 * type:         writeElogUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern writeElogUSB_t FAR writeElogUSB;

/* variable:     USB__OK
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_USB_ERR
 * type:         (USB__OK:=0,USB__ERR:=1,USB__EOF:=2,USB__EOD:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR USB__OK;

/* variable:     USB__ERR
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_USB_ERR
 * type:         (USB__OK:=0,USB__ERR:=1,USB__EOF:=2,USB__EOD:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR USB__ERR;

/* variable:     USB__EOF
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_USB_ERR
 * type:         (USB__OK:=0,USB__ERR:=1,USB__EOF:=2,USB__EOD:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR USB__EOF;

/* variable:     USB__EOD
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_USB_ERR
 * type:         (USB__OK:=0,USB__ERR:=1,USB__EOF:=2,USB__EOD:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR USB__EOD;

/* variable:     FA_OPEN_EXISTING_READ
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR FA_OPEN_EXISTING_READ;

/* variable:     FA_OPEN_EXISTING_WRITE
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR FA_OPEN_EXISTING_WRITE;

/* variable:     FA_OPEN_ALWAYS_READ
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR FA_OPEN_ALWAYS_READ;

/* variable:     FA_OPEN_ALWAYS_WRITE
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR FA_OPEN_ALWAYS_WRITE;

/* variable:     FA_CREATE_NEW_WRITE
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR FA_CREATE_NEW_WRITE;

/* variable:     FA_CREATE_ALWAYS_WRITE
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR FA_CREATE_ALWAYS_WRITE;

/* variable:     SetKeyMode
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/SetKeyMode/SetKeyMode
 * type:         SetKeyMode
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SetKeyMode_t FAR SetKeyMode;

/* variable:     PowerOff
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/PowerOff/PowerOff
 * type:         PowerOff
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern PowerOff_t FAR PowerOff;

/* variable:     ForceUpdate
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/ForceUpdate/ForceUpdate
 * type:         ForceUpdate
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern ForceUpdate_t FAR ForceUpdate;

/* variable:     UPLOAD__FROM_CAN
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_UPDATE
 * type:         (UPLOAD__FROM_CAN:=1,UPLOAD__FROM_USB:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR UPLOAD__FROM_CAN;

/* variable:     UPLOAD__FROM_USB
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_UPDATE
 * type:         (UPLOAD__FROM_CAN:=1,UPLOAD__FROM_USB:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR UPLOAD__FROM_USB;

/* variable:     KEY__SHUTDOWN_ENABLE
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_KEY_MODE
 * type:         (KEY__SHUTDOWN_ENABLE:=1,KEY__SHUTDOWN_DISABLE:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR KEY__SHUTDOWN_ENABLE;

/* variable:     KEY__SHUTDOWN_DISABLE
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_KEY_MODE
 * type:         (KEY__SHUTDOWN_ENABLE:=1,KEY__SHUTDOWN_DISABLE:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR KEY__SHUTDOWN_DISABLE;

/* variable:     MODE__OK
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_MODE_ERR
 * type:         (MODE__OK:=0,MODE__ERR:=1)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR MODE__OK;

/* variable:     MODE__ERR
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_MODE_ERR
 * type:         (MODE__OK:=0,MODE__ERR:=1)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR MODE__ERR;

/**************************************************************************/

/* declaration of variables with address in %M */

/* variable:     vInit
 * definition:   /project/CANVIEW4/Data/global_data
 * type:         INT
 * address:      %MW0
 * constant:     False
 * comment:      
 */
#define vInit (*(INT FARPTR)(&BYTEM[0]))

/* variable:     vSplashTimer
 * definition:   /project/CANVIEW4/Data/global_data
 * type:         INT
 * address:      %MW2
 * constant:     False
 * comment:      
 */
#define vSplashTimer (*(INT FARPTR)(&BYTEM[2]))

/* variable:     vBacklight
 * definition:   /project/CANVIEW4/Data/global_data
 * type:         INT
 * address:      %MW4
 * constant:     False
 * comment:      
 */
#define vBacklight (*(INT FARPTR)(&BYTEM[4]))

/* variable:     F1
 * definition:   /project/CANVIEW4/Data/key_data
 * type:         BOOL
 * address:      %MX6
 * constant:     False
 * comment:      
 */
#define F1 (*(BOOL FARPTR)(&BYTEM[6]))

/* variable:     F2
 * definition:   /project/CANVIEW4/Data/key_data
 * type:         BOOL
 * address:      %MX7
 * constant:     False
 * comment:      
 */
#define F2 (*(BOOL FARPTR)(&BYTEM[7]))

/* variable:     F3
 * definition:   /project/CANVIEW4/Data/key_data
 * type:         BOOL
 * address:      %MX8
 * constant:     False
 * comment:      
 */
#define F3 (*(BOOL FARPTR)(&BYTEM[8]))

/* variable:     F4
 * definition:   /project/CANVIEW4/Data/key_data
 * type:         BOOL
 * address:      %MX9
 * constant:     False
 * comment:      
 */
#define F4 (*(BOOL FARPTR)(&BYTEM[9]))

/* variable:     F5
 * definition:   /project/CANVIEW4/Data/key_data
 * type:         BOOL
 * address:      %MX10
 * constant:     False
 * comment:      
 */
#define F5 (*(BOOL FARPTR)(&BYTEM[10]))

/* variable:     degreeLong
 * definition:   /project/CANVIEW4/Data/global_data
 * type:         INT
 * address:      %MW14
 * constant:     False
 * comment:      
 */
#define degreeLong (*(INT FARPTR)(&BYTEM[14]))

/* variable:     degreeLat
 * definition:   /project/CANVIEW4/Data/global_data
 * type:         INT
 * address:      %MW16
 * constant:     False
 * comment:      
 */
#define degreeLat (*(INT FARPTR)(&BYTEM[16]))

/* variable:     vStartUpCounter
 * definition:   /project/CANVIEW4/Data/global_data
 * type:         INT
 * address:      %MW18
 * constant:     False
 * comment:      
 */
#define vStartUpCounter (*(INT FARPTR)(&BYTEM[18]))

/* variable:     angleConvLong
 * definition:   /project/CANVIEW4/Data/global_data
 * type:         UDINT
 * address:      %MD20
 * constant:     False
 * comment:      
 */
#define angleConvLong (*(UDINT FARPTR)(&BYTEM[20]))

/* variable:     angleConvLat
 * definition:   /project/CANVIEW4/Data/global_data
 * type:         UDINT
 * address:      %MD24
 * constant:     False
 * comment:      
 */
#define angleConvLat (*(UDINT FARPTR)(&BYTEM[24]))

/* size of array BYTEM */
#define BYTEM_SIZE (28)

/**************************************************************************/

/* declaration of variables with address in %P */

/* size of array BYTEP */
#define BYTEP_SIZE (7928)

/**************************************************************************/

/* declaration of variables with address in %R */

/* size of array BYTER */
#define BYTER_SIZE (2044)

/**************************************************************************/

/* declaration of variables with address in %I */


/**************************************************************************/

/* declaration of variables with address in %Q */


/**************************************************************************/

/* declaration of variables with address in %S */


/**************************************************************************/

/* declaration of variables with address in %F */

/* size of array BYTEF */
#define BYTEF_SIZE (1)

/**************************************************************************/

/* declaration of variables with address in %E */

/* size of array BYTEE */
#define BYTEE_SIZE (1)

/**************************************************************************/

/* declaration of variables with address in %K */

/* size of array BYTEK */
#define BYTEK_SIZE (1)

/**************************************************************************/

/* declaration of memory arrays */

extern BYTE FAR EXT_VT3_RAM_SECTION BYTEM[];
extern BYTE FAR EXT_VT3_RAM_SECTION BYTEP[];
extern BYTE FAR EXT_VT3_RAM_SECTION BYTER[];
extern BYTE FAR EXT_VT3_RAM_SECTION BYTEI[];
extern BYTE FAR EXT_VT3_RAM_SECTION BYTEQ[];
extern BYTE FAR EXT_VT3_RAM_SECTION BYTES[];
extern BYTE FAR EXT_VT3_RAM_SECTION BYTEF[];
extern BYTE FAR EXT_VT3_RAM_SECTION BYTEE[];
extern BYTE FAR EXT_VT3_RAM_SECTION BYTEK[];

/**************************************************************************/

#endif /* INCLUDE__VT3_VARS_H */

/* end of file */
