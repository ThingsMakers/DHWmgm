ifeq ($(OS),Windows_NT)
SHELL = $(ComSpec)
RMDIR = rmdir /s /q
RM = del /q
mymkdir = if not exist "$1" mkdir "$1"
else
RMDIR = rm -fr
RM = rm -f
mymkdir = mkdir -p $1
endif

PROJECT_OBJS = \
	project/DHW.cpp.o \

PLATFORM_CORE_OBJS = \
	core/abi.cpp.o \
	core/CDC.cpp.o \
	core/HardwareSerial.cpp.o \
	core/HardwareSerial0.cpp.o \
	core/HardwareSerial1.cpp.o \
	core/HardwareSerial2.cpp.o \
	core/HardwareSerial3.cpp.o \
	core/hooks.c.o \
	core/IPAddress.cpp.o \
	core/main.cpp.o \
	core/new.cpp.o \
	core/PluggableUSB.cpp.o \
	core/Print.cpp.o \
	core/Stream.cpp.o \
	core/Tone.cpp.o \
	core/USBCore.cpp.o \
	core/WInterrupts.c.o \
	core/wiring.c.o \
	core/wiring_analog.c.o \
	core/wiring_digital.c.o \
	core/wiring_pulse.c.o \
	core/wiring_pulse.S.o \
	core/wiring_shift.c.o \
	core/WMath.cpp.o \
	core/WString.cpp.o \

PLATFORM_VARIANT_OBJS = \

LIBRARIES_OBJS = \
	libraries/Ucglib/1.3.3/src/clib/ucg_bitmap.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_box.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_ccs.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_circle.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_clip.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_com_msg_api.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_default_cb.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9163.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325_spi.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9341.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ld50t6160.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_pcf8833.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_seps225.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1289.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1331.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1351.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_st7735.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_msg_api.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ft.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ilsoft.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_univision.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_160x128_samsung.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_96x64_univision.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x128_ili9163.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x160_st7735.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_132x132_pcf8833.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9325_spi.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9341.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_itdb02.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ssd1289.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_font.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_init.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_line.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_pixel.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_pixel_font_data.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_polygon.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_rotate.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_scale.c.o \
	libraries/Ucglib/1.3.3/src/clib/ucg_vector_font_data.c.o \
	libraries/Ucglib/1.3.3/src/Ucglib.cpp.o \
	libraries/SPI/src/SPI.cpp.o \

TARGETS = \
	DHW.hex \

all: $(TARGETS)

DHW.hex: DHW.elf
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-objcopy" -O ihex -R .eeprom  "./DHW.elf" "./DHW.hex"

DHW.elf: $(PROJECT_OBJS) $(LIBRARIES_OBJS) core.a
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -w -Os -flto -fuse-linker-plugin -Wl,--gc-sections -mmcu=atmega2560  -o "./DHW.elf" $(PROJECT_OBJS) $(LIBRARIES_OBJS) "./core.a" "-L." -lm

core.a:	$(PLATFORM_CORE_OBJS) $(PLATFORM_VARIANT_OBJS)

clean:
	-$(RMDIR) project core variant libraries
	-$(RM) *.hex *.eep *.bin *.elf *.a *.ar *.d

size:
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-size" -A "./DHW.elf"

project/DHW.cpp.o: ../../DHW.cpp project/DHW.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

project/DHW.cpp.d: ;

-include project/DHW.cpp.d 


core/abi.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/abi.cpp core/abi.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/abi.cpp.d: ;

-include core/abi.cpp.d

core/CDC.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/CDC.cpp core/CDC.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/CDC.cpp.d: ;

-include core/CDC.cpp.d

core/HardwareSerial.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/HardwareSerial.cpp core/HardwareSerial.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial.cpp.d: ;

-include core/HardwareSerial.cpp.d

core/HardwareSerial0.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/HardwareSerial0.cpp core/HardwareSerial0.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial0.cpp.d: ;

-include core/HardwareSerial0.cpp.d

core/HardwareSerial1.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/HardwareSerial1.cpp core/HardwareSerial1.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial1.cpp.d: ;

-include core/HardwareSerial1.cpp.d

core/HardwareSerial2.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/HardwareSerial2.cpp core/HardwareSerial2.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial2.cpp.d: ;

-include core/HardwareSerial2.cpp.d

core/HardwareSerial3.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/HardwareSerial3.cpp core/HardwareSerial3.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial3.cpp.d: ;

-include core/HardwareSerial3.cpp.d

core/hooks.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/hooks.c core/hooks.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/hooks.c.d: ;

-include core/hooks.c.d

core/IPAddress.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/IPAddress.cpp core/IPAddress.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/IPAddress.cpp.d: ;

-include core/IPAddress.cpp.d

core/main.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/main.cpp core/main.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/main.cpp.d: ;

-include core/main.cpp.d

core/new.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/new.cpp core/new.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/new.cpp.d: ;

-include core/new.cpp.d

core/PluggableUSB.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/PluggableUSB.cpp core/PluggableUSB.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/PluggableUSB.cpp.d: ;

-include core/PluggableUSB.cpp.d

core/Print.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/Print.cpp core/Print.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Print.cpp.d: ;

-include core/Print.cpp.d

core/Stream.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/Stream.cpp core/Stream.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Stream.cpp.d: ;

-include core/Stream.cpp.d

core/Tone.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/Tone.cpp core/Tone.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Tone.cpp.d: ;

-include core/Tone.cpp.d

core/USBCore.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/USBCore.cpp core/USBCore.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/USBCore.cpp.d: ;

-include core/USBCore.cpp.d

core/WInterrupts.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/WInterrupts.c core/WInterrupts.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/WInterrupts.c.d: ;

-include core/WInterrupts.c.d

core/wiring.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring.c core/wiring.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring.c.d: ;

-include core/wiring.c.d

core/wiring_analog.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring_analog.c core/wiring_analog.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_analog.c.d: ;

-include core/wiring_analog.c.d

core/wiring_digital.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring_digital.c core/wiring_digital.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_digital.c.d: ;

-include core/wiring_digital.c.d

core/wiring_pulse.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring_pulse.c core/wiring_pulse.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_pulse.c.d: ;

-include core/wiring_pulse.c.d

core/wiring_pulse.S.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring_pulse.S
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -x assembler-with-cpp -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/wiring_shift.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring_shift.c core/wiring_shift.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_shift.c.d: ;

-include core/wiring_shift.c.d

core/WMath.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/WMath.cpp core/WMath.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/WMath.cpp.d: ;

-include core/WMath.cpp.d

core/WString.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/WString.cpp core/WString.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/WString.cpp.d: ;

-include core/WString.cpp.d



libraries/Ucglib/1.3.3/src/clib/ucg_bitmap.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_bitmap.c libraries/Ucglib/1.3.3/src/clib/ucg_bitmap.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_bitmap.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_bitmap.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_box.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_box.c libraries/Ucglib/1.3.3/src/clib/ucg_box.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_box.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_box.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_ccs.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_ccs.c libraries/Ucglib/1.3.3/src/clib/ucg_ccs.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_ccs.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_ccs.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_circle.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_circle.c libraries/Ucglib/1.3.3/src/clib/ucg_circle.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_circle.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_circle.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_clip.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_clip.c libraries/Ucglib/1.3.3/src/clib/ucg_clip.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_clip.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_clip.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_com_msg_api.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_com_msg_api.c libraries/Ucglib/1.3.3/src/clib/ucg_com_msg_api.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_com_msg_api.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_com_msg_api.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_default_cb.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_default_cb.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_default_cb.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_default_cb.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_default_cb.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9163.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9163.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9163.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9163.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9163.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325_spi.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325_spi.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9325_spi.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9341.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9341.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9341.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9341.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ili9341.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ld50t6160.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ld50t6160.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ld50t6160.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ld50t6160.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ld50t6160.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_pcf8833.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_pcf8833.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_pcf8833.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_pcf8833.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_pcf8833.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_seps225.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_seps225.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_seps225.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_seps225.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_seps225.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1289.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1289.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1289.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1289.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1289.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1331.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1331.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1331.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1331.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1331.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1351.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1351.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1351.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1351.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_ssd1351.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_st7735.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_st7735.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_st7735.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_st7735.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_ic_st7735.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_msg_api.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_msg_api.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_msg_api.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_msg_api.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_msg_api.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ft.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ft.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ft.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ft.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ft.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ilsoft.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ilsoft.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ilsoft.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ilsoft.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_ilsoft.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_univision.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_univision.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_univision.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_univision.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_128x128_univision.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_160x128_samsung.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_160x128_samsung.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_160x128_samsung.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_160x128_samsung.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_160x128_samsung.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_96x64_univision.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_96x64_univision.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_96x64_univision.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_96x64_univision.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_oled_96x64_univision.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x128_ili9163.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x128_ili9163.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x128_ili9163.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x128_ili9163.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x128_ili9163.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x160_st7735.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x160_st7735.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x160_st7735.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x160_st7735.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_128x160_st7735.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_132x132_pcf8833.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_132x132_pcf8833.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_132x132_pcf8833.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_132x132_pcf8833.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_132x132_pcf8833.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9325_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9325_spi.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9325_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9325_spi.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9325_spi.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9341.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9341.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9341.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9341.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ili9341.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_itdb02.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_itdb02.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_itdb02.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_itdb02.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_itdb02.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ssd1289.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ssd1289.c libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ssd1289.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ssd1289.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_dev_tft_240x320_ssd1289.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_font.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_font.c libraries/Ucglib/1.3.3/src/clib/ucg_font.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_font.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_font.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_init.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_init.c libraries/Ucglib/1.3.3/src/clib/ucg_init.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_init.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_init.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_line.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_line.c libraries/Ucglib/1.3.3/src/clib/ucg_line.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_line.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_line.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_pixel.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_pixel.c libraries/Ucglib/1.3.3/src/clib/ucg_pixel.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_pixel.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_pixel.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_pixel_font_data.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_pixel_font_data.c libraries/Ucglib/1.3.3/src/clib/ucg_pixel_font_data.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_pixel_font_data.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_pixel_font_data.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_polygon.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_polygon.c libraries/Ucglib/1.3.3/src/clib/ucg_polygon.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_polygon.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_polygon.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_rotate.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_rotate.c libraries/Ucglib/1.3.3/src/clib/ucg_rotate.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_rotate.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_rotate.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_scale.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_scale.c libraries/Ucglib/1.3.3/src/clib/ucg_scale.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_scale.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_scale.c.d

libraries/Ucglib/1.3.3/src/clib/ucg_vector_font_data.c.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/clib/ucg_vector_font_data.c libraries/Ucglib/1.3.3/src/clib/ucg_vector_font_data.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/clib/ucg_vector_font_data.c.d: ;

-include libraries/Ucglib/1.3.3/src/clib/ucg_vector_font_data.c.d

libraries/Ucglib/1.3.3/src/Ucglib.cpp.o: C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src/Ucglib.cpp libraries/Ucglib/1.3.3/src/Ucglib.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/Ucglib/1.3.3/src/Ucglib.cpp.d: ;

-include libraries/Ucglib/1.3.3/src/Ucglib.cpp.d

libraries/SPI/src/SPI.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src/SPI.cpp libraries/SPI/src/SPI.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/mega" -I"C:/Users/Nihad/.arduinocdt/libraries/Ucglib/1.3.3/src" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/SPI/src" "$<" -o "$@"

libraries/SPI/src/SPI.cpp.d: ;

-include libraries/SPI/src/SPI.cpp.d

