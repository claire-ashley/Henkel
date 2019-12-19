:: file: C:\Users\ashlc00\DOCUME~1\Henkel\HENKEL~2.1\code\CANVIEW4\link.bat
:: date: Wed Dec 18 11:02:17 2019
cd "C:\Users\ashlc00\DOCUME~1\Henkel\HENKEL~2.1\code\CANVIEW4"
"C:\Program Files (x86)\GNU Tools ARM Embedded\5.2 2015q4\bin\arm-none-eabi-gcc.exe" -o bin\vt3_app.elf -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 --specs=nosys.specs -T"C:\PROGRA~2\VT3_8920\VT3\RESOUR~1\targets\CANVIEW4\lib\\\prm\\Standard_linker.ld" -Wl,-Map=bin\\vt3_app.map -LC:\PROGRA~2\VT3_8920\VT3\RESOUR~1\targets\CANVIEW4\lib\vt3_common -LC:\PROGRA~2\VT3_8920\VT3\RESOUR~1\targets\CANVIEW4\lib\vt3_runtime -LC:\PROGRA~2\VT3_8920\VT3\RESOUR~1\targets\CANVIEW4\lib\lld C:\PROGRA~2\VT3_8920\VT3\RESOUR~1\targets\CANVIEW4\lib\\lld\sysmem.o @"objects.list" -lvt3_runtime -lvt3_common -lCANView4 -lm
"C:\Program Files (x86)\GNU Tools ARM Embedded\5.2 2015q4\bin\arm-none-eabi-objcopy.exe" -O srec bin\vt3_app.elf bin\vt3_app.s19
"C:\Program Files (x86)\GNU Tools ARM Embedded\5.2 2015q4\bin\arm-none-eabi-size.exe" --format=SysV bin\vt3_app.elf
:: end of file
