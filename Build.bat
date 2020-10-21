copy src\*.* 
..\hardware\tools\avr\bin\avr-g++ -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10801 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR -I..\hardware\arduino\avr\cores\arduino -I..\hardware\arduino\avr\variants\mega MyBlink.cpp -o build\MyBlink.cpp.o
..\hardware\tools\avr\bin\avr-gcc -w -Os -g -flto -fuse-linker-plugin -Wl,--gc-sections,--relax -mmcu=atmega2560 -o build\MyBlink.cpp.elf  build\MyBlink.cpp.o build\core.a -Lbuild -lm
