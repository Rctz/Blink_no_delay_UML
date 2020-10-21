..\hardware\tools\avr\bin\avr-objcopy -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 build\MyBlink.cpp.elf build\MyBlink.cpp.eep
..\hardware\tools\avr\bin\avr-objcopy -O ihex -R .eeprom build\MyBlink.cpp.elf build\MyBlink.cpp.hex
..\hardware\tools\avr\bin\avrdude -C..\hardware\tools\avr\etc\avrdude.conf -v -V -patmega2560 -cwiring -PCOM4 -b115200 -D -Uflash:w:build\MyBlink.cpp.hex:i
