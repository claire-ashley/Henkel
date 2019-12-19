:: file:    make.bat
:: device:  /project/CANVIEW4
:: use this batch file to compile the source code and build the binary file

@ECHO *** running scons ***
set VT3_GCC_ARM_EMBEDDED_COMPILER_PATH=C:\Program Files (x86)\GNU Tools ARM Embedded\5.2 2015q4\
call "C:\Program Files (x86)\VT3_8920\VT3\SCons.exe" --debug=explain --sconstruct="C:\Program Files (x86)\VT3_8920\VT3\resources\targets\CANVIEW4\SConstruct.py" LIBPATH="C:\Program Files (x86)\VT3_8920\VT3\resources\targets\CANVIEW4\lib" OBJPATH="C:\Users\ashlc00\DOCUME~1\Henkel\HENKEL~2.1\code\CANVIEW4\__OBJE~1" MAKELIB="0" USEPDF="0" USEHB="0" USEISOBUSVT="0" USEISOBUSTC="0" USE_SEPARATE_BUILD_OF_DISPLAY_FILES="0" USE_QT_LIB="0" USER_DEFINED_CUSTOM_INDICATORS="0" TARGET="vt3_app"

@ECHO *** scons terminated ***
@if (%1)==() pause

:: end of file
