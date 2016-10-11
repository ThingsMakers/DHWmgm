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
	project/DH.cpp.o \
	project/MenuActivity.cpp.o \
	project/StatusActivity.cpp.o \
	project/TimeSpan.cpp.o \
	project/TimeTable.cpp.o \
	project/TimeTableActivity.cpp.o \

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
	libraries/U8glib/1.19.1/src/clib/chessengine.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_bitmap.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_circle.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_clip.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_api.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_api_16gr.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_attiny85_hw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_common.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_fast_parallel.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_usart_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_no_en_parallel.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_parallel.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_port_d_wr.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_ssd_i2c.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_custom.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_hw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_std_sw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_sw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_t6963.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_uc_i2c.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_hw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_parallel.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_hw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_sw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_hw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_st7920_hw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_i2c.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_io.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_linux_ssd_i2c.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_msp430_hw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_null.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_psoc5_ssd_hw_parallel.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_hw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_ssd_i2c.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_com_std_sw_spi.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_cursor.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_delay.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_a2_micro_printer.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_flipdisc_2x7.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_gprof.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ht1632.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ili9325d_320x240.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ks0108_128x64.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_160x80.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x128.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x64.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_320x64.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ld7032_60x32.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_null.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_pcd8544_84x48.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_pcf8812_96x65.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_sbn1661_122x32.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x32.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x64.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_64x48.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1309_128x64.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_bw.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_gr.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw_new.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr_new.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1327_96x96_gr.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1351_128x128.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1353_160x128.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_64128n.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm128.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm132.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6059.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6063.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12832.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12864.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7687_c144mvgd.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_128x64.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_192x32.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_202x32.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x128.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x64.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x128.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x64.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_tls8204_84x48.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1601_c128032.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x128.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x64.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1610_dogxl160.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogm240.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogxl240.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_dogs102.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_mini12864.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_ellipse.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_font.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_font_data.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_line.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_ll_api.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_page.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb14v1.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb16h1.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb16h2.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb16v1.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb16v2.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb32h1.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb8h1.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb8h1f.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb8h2.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb8h8.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb8v1.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pb8v2.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pbxh16.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_pbxh24.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_polygon.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_rect.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_rot.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_scale.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_state.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_u16toa.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_u8toa.c.o \
	libraries/U8glib/1.19.1/src/clib/u8g_virtual_screen.c.o \
	libraries/U8glib/1.19.1/src/U8glib.cpp.o \

TARGETS = \
	DH.hex \

all: $(TARGETS)

DH.hex: DH.elf
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-objcopy" -O ihex -R .eeprom  "./DH.elf" "./DH.hex"

DH.elf: $(PROJECT_OBJS) $(LIBRARIES_OBJS) core.a
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -w -Os -flto -fuse-linker-plugin -Wl,--gc-sections -mmcu=atmega328p  -o "./DH.elf" $(PROJECT_OBJS) $(LIBRARIES_OBJS) "./core.a" "-L." -lm

core.a:	$(PLATFORM_CORE_OBJS) $(PLATFORM_VARIANT_OBJS)

clean:
	-$(RMDIR) project core variant libraries
	-$(RM) *.hex *.eep *.bin *.elf *.a *.ar *.d

size:
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-size" -A "./DH.elf"

project/DH.cpp.o: ../../DH.cpp project/DH.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

project/DH.cpp.d: ;

-include project/DH.cpp.d 

project/MenuActivity.cpp.o: ../../MenuActivity.cpp project/MenuActivity.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

project/MenuActivity.cpp.d: ;

-include project/MenuActivity.cpp.d 

project/StatusActivity.cpp.o: ../../StatusActivity.cpp project/StatusActivity.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

project/StatusActivity.cpp.d: ;

-include project/StatusActivity.cpp.d 

project/TimeSpan.cpp.o: ../../TimeSpan.cpp project/TimeSpan.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

project/TimeSpan.cpp.d: ;

-include project/TimeSpan.cpp.d 

project/TimeTable.cpp.o: ../../TimeTable.cpp project/TimeTable.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

project/TimeTable.cpp.d: ;

-include project/TimeTable.cpp.d 

project/TimeTableActivity.cpp.o: ../../TimeTableActivity.cpp project/TimeTableActivity.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

project/TimeTableActivity.cpp.d: ;

-include project/TimeTableActivity.cpp.d 


core/abi.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/abi.cpp core/abi.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/abi.cpp.d: ;

-include core/abi.cpp.d

core/CDC.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/CDC.cpp core/CDC.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/CDC.cpp.d: ;

-include core/CDC.cpp.d

core/HardwareSerial.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/HardwareSerial.cpp core/HardwareSerial.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial.cpp.d: ;

-include core/HardwareSerial.cpp.d

core/HardwareSerial0.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/HardwareSerial0.cpp core/HardwareSerial0.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial0.cpp.d: ;

-include core/HardwareSerial0.cpp.d

core/HardwareSerial1.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/HardwareSerial1.cpp core/HardwareSerial1.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial1.cpp.d: ;

-include core/HardwareSerial1.cpp.d

core/HardwareSerial2.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/HardwareSerial2.cpp core/HardwareSerial2.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial2.cpp.d: ;

-include core/HardwareSerial2.cpp.d

core/HardwareSerial3.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/HardwareSerial3.cpp core/HardwareSerial3.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial3.cpp.d: ;

-include core/HardwareSerial3.cpp.d

core/hooks.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/hooks.c core/hooks.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/hooks.c.d: ;

-include core/hooks.c.d

core/IPAddress.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/IPAddress.cpp core/IPAddress.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/IPAddress.cpp.d: ;

-include core/IPAddress.cpp.d

core/main.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/main.cpp core/main.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/main.cpp.d: ;

-include core/main.cpp.d

core/new.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/new.cpp core/new.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/new.cpp.d: ;

-include core/new.cpp.d

core/PluggableUSB.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/PluggableUSB.cpp core/PluggableUSB.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/PluggableUSB.cpp.d: ;

-include core/PluggableUSB.cpp.d

core/Print.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/Print.cpp core/Print.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Print.cpp.d: ;

-include core/Print.cpp.d

core/Stream.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/Stream.cpp core/Stream.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Stream.cpp.d: ;

-include core/Stream.cpp.d

core/Tone.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/Tone.cpp core/Tone.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Tone.cpp.d: ;

-include core/Tone.cpp.d

core/USBCore.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/USBCore.cpp core/USBCore.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/USBCore.cpp.d: ;

-include core/USBCore.cpp.d

core/WInterrupts.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/WInterrupts.c core/WInterrupts.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/WInterrupts.c.d: ;

-include core/WInterrupts.c.d

core/wiring.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring.c core/wiring.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring.c.d: ;

-include core/wiring.c.d

core/wiring_analog.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring_analog.c core/wiring_analog.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_analog.c.d: ;

-include core/wiring_analog.c.d

core/wiring_digital.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring_digital.c core/wiring_digital.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_digital.c.d: ;

-include core/wiring_digital.c.d

core/wiring_pulse.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring_pulse.c core/wiring_pulse.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_pulse.c.d: ;

-include core/wiring_pulse.c.d

core/wiring_pulse.S.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring_pulse.S
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -x assembler-with-cpp -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/wiring_shift.c.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/wiring_shift.c core/wiring_shift.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_shift.c.d: ;

-include core/wiring_shift.c.d

core/WMath.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/WMath.cpp core/WMath.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/WMath.cpp.d: ;

-include core/WMath.cpp.d

core/WString.cpp.o: C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino/WString.cpp core/WString.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/WString.cpp.d: ;

-include core/WString.cpp.d



libraries/U8glib/1.19.1/src/clib/chessengine.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/chessengine.c libraries/U8glib/1.19.1/src/clib/chessengine.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/chessengine.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/chessengine.c.d

libraries/U8glib/1.19.1/src/clib/u8g_bitmap.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_bitmap.c libraries/U8glib/1.19.1/src/clib/u8g_bitmap.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_bitmap.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_bitmap.c.d

libraries/U8glib/1.19.1/src/clib/u8g_circle.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_circle.c libraries/U8glib/1.19.1/src/clib/u8g_circle.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_circle.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_circle.c.d

libraries/U8glib/1.19.1/src/clib/u8g_clip.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_clip.c libraries/U8glib/1.19.1/src/clib/u8g_clip.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_clip.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_clip.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_api.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_api.c libraries/U8glib/1.19.1/src/clib/u8g_com_api.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_api.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_api.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_api_16gr.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_api_16gr.c libraries/U8glib/1.19.1/src/clib/u8g_com_api_16gr.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_api_16gr.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_api_16gr.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_attiny85_hw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_attiny85_hw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_attiny85_hw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_attiny85_hw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_attiny85_hw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_common.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_common.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_common.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_common.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_common.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_fast_parallel.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_fast_parallel.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_fast_parallel.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_fast_parallel.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_fast_parallel.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_usart_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_usart_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_usart_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_usart_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_hw_usart_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_no_en_parallel.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_no_en_parallel.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_no_en_parallel.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_no_en_parallel.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_no_en_parallel.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_parallel.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_parallel.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_parallel.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_parallel.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_parallel.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_port_d_wr.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_port_d_wr.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_port_d_wr.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_port_d_wr.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_port_d_wr.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_ssd_i2c.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_ssd_i2c.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_ssd_i2c.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_ssd_i2c.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_ssd_i2c.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_custom.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_custom.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_custom.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_custom.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_custom.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_hw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_hw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_hw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_hw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_hw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_st7920_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_std_sw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_std_sw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_std_sw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_std_sw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_std_sw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_sw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_sw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_sw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_sw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_sw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_t6963.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_t6963.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_t6963.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_t6963.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_t6963.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_uc_i2c.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_uc_i2c.c libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_uc_i2c.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_uc_i2c.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_arduino_uc_i2c.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_hw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_hw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_hw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_hw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_hw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_parallel.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_parallel.c libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_parallel.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_parallel.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_parallel.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_hw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_hw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_hw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_hw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_hw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_st7920_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_sw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_sw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_sw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_sw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_atmega_sw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_hw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_hw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_hw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_hw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_hw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_st7920_hw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_st7920_hw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_st7920_hw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_st7920_hw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_atxmega_st7920_hw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_i2c.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_i2c.c libraries/U8glib/1.19.1/src/clib/u8g_com_i2c.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_i2c.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_i2c.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_io.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_io.c libraries/U8glib/1.19.1/src/clib/u8g_com_io.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_io.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_io.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_linux_ssd_i2c.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_linux_ssd_i2c.c libraries/U8glib/1.19.1/src/clib/u8g_com_linux_ssd_i2c.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_linux_ssd_i2c.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_linux_ssd_i2c.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_msp430_hw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_msp430_hw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_msp430_hw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_msp430_hw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_msp430_hw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_null.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_null.c libraries/U8glib/1.19.1/src/clib/u8g_com_null.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_null.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_null.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_psoc5_ssd_hw_parallel.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_psoc5_ssd_hw_parallel.c libraries/U8glib/1.19.1/src/clib/u8g_com_psoc5_ssd_hw_parallel.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_psoc5_ssd_hw_parallel.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_psoc5_ssd_hw_parallel.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_hw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_hw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_hw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_hw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_hw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_ssd_i2c.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_ssd_i2c.c libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_ssd_i2c.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_ssd_i2c.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_raspberrypi_ssd_i2c.c.d

libraries/U8glib/1.19.1/src/clib/u8g_com_std_sw_spi.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_com_std_sw_spi.c libraries/U8glib/1.19.1/src/clib/u8g_com_std_sw_spi.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_com_std_sw_spi.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_com_std_sw_spi.c.d

libraries/U8glib/1.19.1/src/clib/u8g_cursor.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_cursor.c libraries/U8glib/1.19.1/src/clib/u8g_cursor.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_cursor.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_cursor.c.d

libraries/U8glib/1.19.1/src/clib/u8g_delay.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_delay.c libraries/U8glib/1.19.1/src/clib/u8g_delay.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_delay.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_delay.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_a2_micro_printer.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_a2_micro_printer.c libraries/U8glib/1.19.1/src/clib/u8g_dev_a2_micro_printer.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_a2_micro_printer.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_a2_micro_printer.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_flipdisc_2x7.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_flipdisc_2x7.c libraries/U8glib/1.19.1/src/clib/u8g_dev_flipdisc_2x7.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_flipdisc_2x7.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_flipdisc_2x7.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_gprof.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_gprof.c libraries/U8glib/1.19.1/src/clib/u8g_dev_gprof.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_gprof.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_gprof.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ht1632.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ht1632.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ht1632.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ht1632.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ht1632.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ili9325d_320x240.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ili9325d_320x240.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ili9325d_320x240.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ili9325d_320x240.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ili9325d_320x240.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ks0108_128x64.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ks0108_128x64.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ks0108_128x64.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ks0108_128x64.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ks0108_128x64.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_160x80.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_160x80.c libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_160x80.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_160x80.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_160x80.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x128.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x128.c libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x128.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x128.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x128.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x64.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x64.c libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x64.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x64.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_240x64.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_320x64.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_320x64.c libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_320x64.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_320x64.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_lc7981_320x64.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ld7032_60x32.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ld7032_60x32.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ld7032_60x32.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ld7032_60x32.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ld7032_60x32.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_null.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_null.c libraries/U8glib/1.19.1/src/clib/u8g_dev_null.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_null.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_null.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_pcd8544_84x48.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_pcd8544_84x48.c libraries/U8glib/1.19.1/src/clib/u8g_dev_pcd8544_84x48.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_pcd8544_84x48.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_pcd8544_84x48.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_pcf8812_96x65.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_pcf8812_96x65.c libraries/U8glib/1.19.1/src/clib/u8g_dev_pcf8812_96x65.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_pcf8812_96x65.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_pcf8812_96x65.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_sbn1661_122x32.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_sbn1661_122x32.c libraries/U8glib/1.19.1/src/clib/u8g_dev_sbn1661_122x32.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_sbn1661_122x32.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_sbn1661_122x32.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x32.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x32.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x32.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x32.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x32.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x64.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x64.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x64.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x64.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_128x64.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_64x48.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_64x48.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_64x48.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_64x48.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1306_64x48.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1309_128x64.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1309_128x64.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1309_128x64.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1309_128x64.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1309_128x64.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_bw.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_bw.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_bw.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_bw.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_bw.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_gr.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_gr.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_gr.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_gr.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1322_nhd31oled_gr.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw_new.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw_new.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw_new.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw_new.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_bw_new.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr_new.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr_new.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr_new.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr_new.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1325_nhd27oled_gr_new.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1327_96x96_gr.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1327_96x96_gr.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1327_96x96_gr.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1327_96x96_gr.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1327_96x96_gr.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1351_128x128.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1351_128x128.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1351_128x128.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1351_128x128.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1351_128x128.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1353_160x128.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1353_160x128.c libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1353_160x128.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1353_160x128.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_ssd1353_160x128.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_64128n.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_64128n.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_64128n.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_64128n.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_64128n.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm128.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm128.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm128.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm128.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm128.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm132.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm132.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm132.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm132.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_dogm132.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6059.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6059.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6059.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6059.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6059.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6063.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6063.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6063.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6063.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_lm6063.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12832.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12832.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12832.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12832.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12832.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12864.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12864.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12864.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12864.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7565_nhd_c12864.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7687_c144mvgd.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7687_c144mvgd.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7687_c144mvgd.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7687_c144mvgd.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7687_c144mvgd.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_128x64.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_128x64.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_128x64.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_128x64.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_128x64.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_192x32.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_192x32.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_192x32.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_192x32.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_192x32.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_202x32.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_202x32.c libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_202x32.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_202x32.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_st7920_202x32.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x128.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x128.c libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x128.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x128.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x128.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x64.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x64.c libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x64.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x64.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_128x64.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x128.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x128.c libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x128.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x128.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x128.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x64.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x64.c libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x64.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x64.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_t6963_240x64.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_tls8204_84x48.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_tls8204_84x48.c libraries/U8glib/1.19.1/src/clib/u8g_dev_tls8204_84x48.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_tls8204_84x48.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_tls8204_84x48.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1601_c128032.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1601_c128032.c libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1601_c128032.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1601_c128032.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1601_c128032.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x128.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x128.c libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x128.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x128.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x128.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x64.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x64.c libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x64.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x64.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1608_240x64.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1610_dogxl160.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1610_dogxl160.c libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1610_dogxl160.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1610_dogxl160.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1610_dogxl160.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogm240.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogm240.c libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogm240.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogm240.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogm240.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogxl240.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogxl240.c libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogxl240.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogxl240.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1611_dogxl240.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_dogs102.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_dogs102.c libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_dogs102.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_dogs102.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_dogs102.c.d

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_mini12864.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_mini12864.c libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_mini12864.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_mini12864.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_dev_uc1701_mini12864.c.d

libraries/U8glib/1.19.1/src/clib/u8g_ellipse.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_ellipse.c libraries/U8glib/1.19.1/src/clib/u8g_ellipse.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_ellipse.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_ellipse.c.d

libraries/U8glib/1.19.1/src/clib/u8g_font.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_font.c libraries/U8glib/1.19.1/src/clib/u8g_font.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_font.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_font.c.d

libraries/U8glib/1.19.1/src/clib/u8g_font_data.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_font_data.c libraries/U8glib/1.19.1/src/clib/u8g_font_data.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_font_data.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_font_data.c.d

libraries/U8glib/1.19.1/src/clib/u8g_line.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_line.c libraries/U8glib/1.19.1/src/clib/u8g_line.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_line.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_line.c.d

libraries/U8glib/1.19.1/src/clib/u8g_ll_api.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_ll_api.c libraries/U8glib/1.19.1/src/clib/u8g_ll_api.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_ll_api.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_ll_api.c.d

libraries/U8glib/1.19.1/src/clib/u8g_page.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_page.c libraries/U8glib/1.19.1/src/clib/u8g_page.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_page.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_page.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb.c libraries/U8glib/1.19.1/src/clib/u8g_pb.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb14v1.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb14v1.c libraries/U8glib/1.19.1/src/clib/u8g_pb14v1.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb14v1.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb14v1.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb16h1.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb16h1.c libraries/U8glib/1.19.1/src/clib/u8g_pb16h1.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb16h1.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb16h1.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb16h2.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb16h2.c libraries/U8glib/1.19.1/src/clib/u8g_pb16h2.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb16h2.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb16h2.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb16v1.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb16v1.c libraries/U8glib/1.19.1/src/clib/u8g_pb16v1.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb16v1.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb16v1.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb16v2.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb16v2.c libraries/U8glib/1.19.1/src/clib/u8g_pb16v2.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb16v2.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb16v2.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb32h1.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb32h1.c libraries/U8glib/1.19.1/src/clib/u8g_pb32h1.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb32h1.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb32h1.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb8h1.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb8h1.c libraries/U8glib/1.19.1/src/clib/u8g_pb8h1.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb8h1.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb8h1.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb8h1f.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb8h1f.c libraries/U8glib/1.19.1/src/clib/u8g_pb8h1f.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb8h1f.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb8h1f.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb8h2.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb8h2.c libraries/U8glib/1.19.1/src/clib/u8g_pb8h2.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb8h2.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb8h2.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb8h8.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb8h8.c libraries/U8glib/1.19.1/src/clib/u8g_pb8h8.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb8h8.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb8h8.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb8v1.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb8v1.c libraries/U8glib/1.19.1/src/clib/u8g_pb8v1.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb8v1.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb8v1.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pb8v2.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pb8v2.c libraries/U8glib/1.19.1/src/clib/u8g_pb8v2.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pb8v2.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pb8v2.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pbxh16.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pbxh16.c libraries/U8glib/1.19.1/src/clib/u8g_pbxh16.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pbxh16.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pbxh16.c.d

libraries/U8glib/1.19.1/src/clib/u8g_pbxh24.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_pbxh24.c libraries/U8glib/1.19.1/src/clib/u8g_pbxh24.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_pbxh24.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_pbxh24.c.d

libraries/U8glib/1.19.1/src/clib/u8g_polygon.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_polygon.c libraries/U8glib/1.19.1/src/clib/u8g_polygon.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_polygon.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_polygon.c.d

libraries/U8glib/1.19.1/src/clib/u8g_rect.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_rect.c libraries/U8glib/1.19.1/src/clib/u8g_rect.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_rect.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_rect.c.d

libraries/U8glib/1.19.1/src/clib/u8g_rot.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_rot.c libraries/U8glib/1.19.1/src/clib/u8g_rot.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_rot.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_rot.c.d

libraries/U8glib/1.19.1/src/clib/u8g_scale.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_scale.c libraries/U8glib/1.19.1/src/clib/u8g_scale.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_scale.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_scale.c.d

libraries/U8glib/1.19.1/src/clib/u8g_state.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_state.c libraries/U8glib/1.19.1/src/clib/u8g_state.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_state.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_state.c.d

libraries/U8glib/1.19.1/src/clib/u8g_u16toa.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_u16toa.c libraries/U8glib/1.19.1/src/clib/u8g_u16toa.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_u16toa.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_u16toa.c.d

libraries/U8glib/1.19.1/src/clib/u8g_u8toa.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_u8toa.c libraries/U8glib/1.19.1/src/clib/u8g_u8toa.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_u8toa.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_u8toa.c.d

libraries/U8glib/1.19.1/src/clib/u8g_virtual_screen.c.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/clib/u8g_virtual_screen.c libraries/U8glib/1.19.1/src/clib/u8g_virtual_screen.c.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/clib/u8g_virtual_screen.c.d: ;

-include libraries/U8glib/1.19.1/src/clib/u8g_virtual_screen.c.d

libraries/U8glib/1.19.1/src/U8glib.cpp.o: C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src/U8glib.cpp libraries/U8glib/1.19.1/src/U8glib.cpp.d
	@$(call mymkdir,$(dir $@))
	"C:/Users/Nihad/.arduinocdt/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_PRO -DARDUINO_ARCH_AVR   -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/cores/arduino" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/variants/eightanaloginputs" -I"C:/Users/Nihad/.arduinocdt/packages/arduino/hardware/avr/1.6.14/libraries/EEPROM/src" -I"C:/Users/Nihad/.arduinocdt/libraries/U8glib/1.19.1/src" "$<" -o "$@"

libraries/U8glib/1.19.1/src/U8glib.cpp.d: ;

-include libraries/U8glib/1.19.1/src/U8glib.cpp.d

