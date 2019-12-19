/* device:       /project/CANVIEW4 */
/* device model: CANVIEW4 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_VARS_C
#define INCLUDE__VT3_VARS_C

#include "vt3_runtime.h"
#include "vt3_POU_common.h"
#include "vt3_IO.h"



/** project version */
const char FAR vt3_const_prj_version[21] = "0.0.0.0";

/** project name */
const char FAR vt3_const_prj_name[] = "project";

/** device name in vt3 project */
const char FAR vt3_const_dev_name[] = "CANVIEW4";

/** device type - long name */
char const FAR vt3_device_properties_long_name[] = "CANVIEW4 (KEYS)";

/** device type - short name */
char const FAR vt3_device_properties_short_name[] = "CANVIEW4";

/** device type - has touch screen */
BOOL const FAR vt3_device_properties_has_touch_screen = FALSE;

/** kwp2000 boot loader parameters */
WORD  const FAR vt3_kwp2000_HostId       = 0x081;
WORD  const FAR vt3_kwp2000_EcuId        = 0x001;
DWORD const FAR vt3_kwp2000_SecurityRoot = 0x00000000;

/**************************************************************************/

/* definition of constants */

/* variable:     vt3_screen_count
 * definition:   /project/CANVIEW4
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      index of current screen
 */
const UINT FAR vt3_screen_count = ((UINT)2U);

/**************************************************************************/

/* definition of ordinary variables */

/* variable:     vt3_can_alarm_busoff_CAN_interface
 * definition:   /project/CANVIEW4/CAN_interface
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/CANVIEW4/CAN_interface
 */
BOOL FAR vt3_can_alarm_busoff_CAN_interface;

/* variable:     INIT_byt1
 * definition:   /project/CANVIEW4/CAN_interface/Init
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
BYTE FAR INIT_byt1;

/* variable:     INIT_byt2
 * definition:   /project/CANVIEW4/CAN_interface/Init
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
BYTE FAR INIT_byt2;

/* variable:     vt3_can_period_Init
 * definition:   /project/CANVIEW4/CAN_interface/Init
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/CANVIEW4/CAN_interface/Init
 */
UINT FAR vt3_can_period_Init;

/* variable:     vt3_can_trigger_Init
 * definition:   /project/CANVIEW4/CAN_interface/Init
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/CANVIEW4/CAN_interface/Init
 */
BOOL FAR vt3_can_trigger_Init;

/* variable:     vt3_can_period_Sync
 * definition:   /project/CANVIEW4/CAN_interface/Sync
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/CANVIEW4/CAN_interface/Sync
 */
UINT FAR vt3_can_period_Sync;

/* variable:     vt3_can_trigger_Sync
 * definition:   /project/CANVIEW4/CAN_interface/Sync
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/CANVIEW4/CAN_interface/Sync
 */
BOOL FAR vt3_can_trigger_Sync;

/* variable:     vt3_can_alarm_Angle
 * definition:   /project/SICK_Inclinometer/CAN_interface/Angle
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/SICK_Inclinometer/CAN_interface/Angle
 */
BOOL FAR vt3_can_alarm_Angle;

/* variable:     AGL_longitudinal
 * definition:   /project/SICK_Inclinometer/CAN_interface/Angle
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR AGL_longitudinal;

/* variable:     AGL_lateral
 * definition:   /project/SICK_Inclinometer/CAN_interface/Angle
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR AGL_lateral;

/* variable:     MAIN
 * definition:   /project/CANVIEW4/Programs/MAIN
 * type:         MAIN
 * address:      not specified
 * constant:     False
 * comment:      
 */
MAIN_t FAR MAIN;

/* variable:     vt3_screen
 * definition:   /project/CANVIEW4
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current screen
 */
UINT FAR vt3_screen;

/* variable:     vt3_language
 * definition:   /project/CANVIEW4
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current language
 */
UINT FAR vt3_language;

/* variable:     vt3_task_run_time_video_task
 * definition:   /project/CANVIEW4
 * type:         DWORD
 * address:      not specified
 * constant:     False
 * comment:      video task execution time [ms]
 */
DWORD FAR vt3_task_run_time_video_task;

/* variable:     vt3_bytearray_P_warning
 * definition:   /project/CANVIEW4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %P
 */
BOOL FAR vt3_bytearray_P_warning;

/* variable:     vt3_bytearray_P_error
 * definition:   /project/CANVIEW4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %P
 */
BOOL FAR vt3_bytearray_P_error;

/* variable:     vt3_bytearray_R_warning
 * definition:   /project/CANVIEW4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %R
 */
BOOL FAR vt3_bytearray_R_warning;

/* variable:     vt3_bytearray_R_error
 * definition:   /project/CANVIEW4
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %R
 */
BOOL FAR vt3_bytearray_R_error;

/* variable:     vt3_alarm_inhibition_bitmask
 * definition:   /project/CANVIEW4
 * type:         WORD
 * address:      not specified
 * constant:     False
 * comment:      bitmask of alarm inhibitions
 */
WORD FAR vt3_alarm_inhibition_bitmask;

/* variable:     vt3_task_run_time_CAN_bus_task
 * definition:   /project/CANVIEW4
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      System task execution time [ms]
 */
UDINT FAR vt3_task_run_time_CAN_bus_task;

/* variable:     vt3_task_run_time_MAIN
 * definition:   /project/CANVIEW4
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      task MAIN execution time [ms]
 */
UDINT FAR vt3_task_run_time_MAIN;

/**************************************************************************/

/* definition of ordinary variables from library: CANVIEW4_Lib */

/* variable:     initCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/initCOM/initCOM
 * type:         initCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
initCOM_t FAR initCOM;

/* variable:     writeStringCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/writeCOM/writeStringCOM/writeStringCOM
 * type:         writeStringCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
writeStringCOM_t FAR writeStringCOM;

/* variable:     writeByteCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/writeCOM/writeByteCOM/writeByteCOM
 * type:         writeByteCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
writeByteCOM_t FAR writeByteCOM;

/* variable:     readStringCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/readCOM/readStringCOM/readStringCOM
 * type:         readStringCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
readStringCOM_t FAR readStringCOM;

/* variable:     readByteCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/readCOM/readByteCOM/readByteCOM
 * type:         readByteCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
readByteCOM_t FAR readByteCOM;

/* variable:     resetBufferCOM
 * definition:   /project/CANVIEW4_Lib/SERIAL/resetBufferCOM/resetBufferCOM
 * type:         resetBufferCOM
 * address:      not specified
 * constant:     False
 * comment:      
 */
resetBufferCOM_t FAR resetBufferCOM;

/* variable:     PARITY__NONE
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_PARITY
 * type:         (PARITY__NONE:=0,PARITY__ODD:=1,PARITY__EVEN:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR PARITY__NONE = 0;

/* variable:     PARITY__ODD
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_PARITY
 * type:         (PARITY__NONE:=0,PARITY__ODD:=1,PARITY__EVEN:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR PARITY__ODD = 1;

/* variable:     PARITY__EVEN
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_PARITY
 * type:         (PARITY__NONE:=0,PARITY__ODD:=1,PARITY__EVEN:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR PARITY__EVEN = 2;

/* variable:     UART__OK
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_UART_ERR
 * type:         (UART__OK:=0,UART__ERR:=1,UART__TX_ERR:=2,UART__RX_ERR:=3,UART__P_OUT_OF_RANGE:=4)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR UART__OK = 0;

/* variable:     UART__ERR
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_UART_ERR
 * type:         (UART__OK:=0,UART__ERR:=1,UART__TX_ERR:=2,UART__RX_ERR:=3,UART__P_OUT_OF_RANGE:=4)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR UART__ERR = 1;

/* variable:     UART__TX_ERR
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_UART_ERR
 * type:         (UART__OK:=0,UART__ERR:=1,UART__TX_ERR:=2,UART__RX_ERR:=3,UART__P_OUT_OF_RANGE:=4)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR UART__TX_ERR = 2;

/* variable:     UART__RX_ERR
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_UART_ERR
 * type:         (UART__OK:=0,UART__ERR:=1,UART__TX_ERR:=2,UART__RX_ERR:=3,UART__P_OUT_OF_RANGE:=4)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR UART__RX_ERR = 3;

/* variable:     UART__P_OUT_OF_RANGE
 * definition:   /project/CANVIEW4_Lib/SERIAL/Type/ENUM_UART_ERR
 * type:         (UART__OK:=0,UART__ERR:=1,UART__TX_ERR:=2,UART__RX_ERR:=3,UART__P_OUT_OF_RANGE:=4)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR UART__P_OUT_OF_RANGE = 4;

/* variable:     mountUSB
 * definition:   /project/CANVIEW4_Lib/USB/mountUSB/mountUSB
 * type:         mountUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
mountUSB_t FAR mountUSB;

/* variable:     umountUSB
 * definition:   /project/CANVIEW4_Lib/USB/mountUSB/umountUSB
 * type:         umountUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
umountUSB_t FAR umountUSB;

/* variable:     openUSB
 * definition:   /project/CANVIEW4_Lib/USB/openUSB/openUSB
 * type:         openUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
openUSB_t FAR openUSB;

/* variable:     closeUSB
 * definition:   /project/CANVIEW4_Lib/USB/openUSB/closeUSB
 * type:         closeUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
closeUSB_t FAR closeUSB;

/* variable:     writeStringUSB
 * definition:   /project/CANVIEW4_Lib/USB/writeUSB/writeStringUSB
 * type:         writeStringUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
writeStringUSB_t FAR writeStringUSB;

/* variable:     readStringUSB
 * definition:   /project/CANVIEW4_Lib/USB/readUSB/readStringUSB
 * type:         readStringUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
readStringUSB_t FAR readStringUSB;

/* variable:     writeElogUSB
 * definition:   /project/CANVIEW4_Lib/USB/writeElogUSB/writeElogUSB
 * type:         writeElogUSB
 * address:      not specified
 * constant:     False
 * comment:      
 */
writeElogUSB_t FAR writeElogUSB;

/* variable:     USB__OK
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_USB_ERR
 * type:         (USB__OK:=0,USB__ERR:=1,USB__EOF:=2,USB__EOD:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR USB__OK = 0;

/* variable:     USB__ERR
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_USB_ERR
 * type:         (USB__OK:=0,USB__ERR:=1,USB__EOF:=2,USB__EOD:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR USB__ERR = 1;

/* variable:     USB__EOF
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_USB_ERR
 * type:         (USB__OK:=0,USB__ERR:=1,USB__EOF:=2,USB__EOD:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR USB__EOF = 2;

/* variable:     USB__EOD
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_USB_ERR
 * type:         (USB__OK:=0,USB__ERR:=1,USB__EOF:=2,USB__EOD:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR USB__EOD = 3;

/* variable:     FA_OPEN_EXISTING_READ
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR FA_OPEN_EXISTING_READ = 1;

/* variable:     FA_OPEN_EXISTING_WRITE
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR FA_OPEN_EXISTING_WRITE = 2;

/* variable:     FA_OPEN_ALWAYS_READ
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR FA_OPEN_ALWAYS_READ = 17;

/* variable:     FA_OPEN_ALWAYS_WRITE
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR FA_OPEN_ALWAYS_WRITE = 18;

/* variable:     FA_CREATE_NEW_WRITE
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR FA_CREATE_NEW_WRITE = 6;

/* variable:     FA_CREATE_ALWAYS_WRITE
 * definition:   /project/CANVIEW4_Lib/USB/Type/ENUM_OPEN_FILE
 * type:         (FA_OPEN_EXISTING_READ:=1,FA_OPEN_EXISTING_WRITE:=2,FA_OPEN_ALWAYS_READ:=17,FA_OPEN_ALWAYS_WRITE:=18,FA_CREATE_NEW_WRITE:=6,FA_CREATE_ALWAYS_WRITE:=10)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR FA_CREATE_ALWAYS_WRITE = 10;

/* variable:     SetKeyMode
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/SetKeyMode/SetKeyMode
 * type:         SetKeyMode
 * address:      not specified
 * constant:     False
 * comment:      
 */
SetKeyMode_t FAR SetKeyMode;

/* variable:     PowerOff
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/PowerOff/PowerOff
 * type:         PowerOff
 * address:      not specified
 * constant:     False
 * comment:      
 */
PowerOff_t FAR PowerOff;

/* variable:     ForceUpdate
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/ForceUpdate/ForceUpdate
 * type:         ForceUpdate
 * address:      not specified
 * constant:     False
 * comment:      
 */
ForceUpdate_t FAR ForceUpdate;

/* variable:     UPLOAD__FROM_CAN
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_UPDATE
 * type:         (UPLOAD__FROM_CAN:=1,UPLOAD__FROM_USB:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR UPLOAD__FROM_CAN = 1;

/* variable:     UPLOAD__FROM_USB
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_UPDATE
 * type:         (UPLOAD__FROM_CAN:=1,UPLOAD__FROM_USB:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR UPLOAD__FROM_USB = 2;

/* variable:     KEY__SHUTDOWN_ENABLE
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_KEY_MODE
 * type:         (KEY__SHUTDOWN_ENABLE:=1,KEY__SHUTDOWN_DISABLE:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR KEY__SHUTDOWN_ENABLE = 1;

/* variable:     KEY__SHUTDOWN_DISABLE
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_KEY_MODE
 * type:         (KEY__SHUTDOWN_ENABLE:=1,KEY__SHUTDOWN_DISABLE:=2)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR KEY__SHUTDOWN_DISABLE = 2;

/* variable:     MODE__OK
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_MODE_ERR
 * type:         (MODE__OK:=0,MODE__ERR:=1)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR MODE__OK = 0;

/* variable:     MODE__ERR
 * definition:   /project/CANVIEW4_Lib/MANAGEMENT/Type/ENUM_MODE_ERR
 * type:         (MODE__OK:=0,MODE__ERR:=1)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
const INT FAR MODE__ERR = 1;

/**************************************************************************/

/* definition of memory const size */
const unsigned int BYTEM_SIZE_EXTERN = BYTEM_SIZE;
const unsigned int BYTEP_SIZE_EXTERN = BYTEP_SIZE;
const unsigned int BYTER_SIZE_EXTERN = BYTER_SIZE;
const unsigned int BYTEI_SIZE_EXTERN = BYTEI_SIZE;
const unsigned int BYTEQ_SIZE_EXTERN = BYTEQ_SIZE;
const unsigned int BYTES_SIZE_EXTERN = BYTES_SIZE;
const unsigned int BYTEF_SIZE_EXTERN = BYTEF_SIZE;
const unsigned int BYTEE_SIZE_EXTERN = BYTEE_SIZE;
const unsigned int BYTEK_SIZE_EXTERN = BYTEK_SIZE;
const unsigned int VT3_IO_COUNT_EXTERN = VT3_IO_COUNT;


/* definition of memory arrays */
BYTE FAR EXT_VT3_RAM_SECTION BYTEM[BYTEM_SIZE] attribute_aligned_4;
BYTE FAR EXT_VT3_RAM_SECTION BYTEP[BYTEP_SIZE] attribute_aligned_4;
BYTE FAR EXT_VT3_RAM_SECTION BYTER[BYTER_SIZE] attribute_aligned_4;
BYTE FAR EXT_VT3_RAM_SECTION BYTEI[BYTEI_SIZE] attribute_aligned_4;
BYTE FAR EXT_VT3_RAM_SECTION BYTEQ[BYTEQ_SIZE] attribute_aligned_4;
BYTE FAR EXT_VT3_RAM_SECTION BYTES[BYTES_SIZE] attribute_aligned_4;
BYTE FAR EXT_VT3_RAM_SECTION BYTEF[BYTEF_SIZE] attribute_aligned_4;
BYTE FAR EXT_VT3_RAM_SECTION BYTEE[BYTEE_SIZE] attribute_aligned_4;
BYTE FAR EXT_VT3_RAM_SECTION BYTEK[BYTEK_SIZE] attribute_aligned_4;

/**************************************************************************/

/* table of string size initializers */
const vt3_string_size_initializer_t vt3_string_sizes[] = {
	{ &readStringUSB.dataBufferRead.size, 255 },
	{ &writeStringCOM.InDataBufferTX_serial.size, 50 },
	{ &openUSB.fname.size, 20 },
	{ &readStringCOM.OutBufferDataRX_serial.size, 255 },
	{ &writeStringUSB.dataBufferWrite.size, 255 },
	{ (UINT FARPTR) NULL, 0 } /* sentinel */
}; /* vt3_string_sizes */


#endif /* INCLUDE__VT3_VARS_C */

/* end of file */
