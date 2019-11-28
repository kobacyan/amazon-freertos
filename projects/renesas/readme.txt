----------------------------------------------
Getting Start for RX MCUs Amazon FreeRTOS
----------------------------------------------
Thank you for interesting about RX MCUs (RX65N is main) and Amazon FreeRTOS.
This guide is for your environment setup and confirm demos behavior.

SheltyDog@Renesas writes this guide and has responsibility of this project.
If you have any question/suggestion/opinion, please visit following site and post it.
https://github.com/renesas-rx/amazon-freertos

And, details discussion is progressing in following site. (Japanese)
https://japan.renesasrulz.com/cafe_rene/f/forum21/4772/amazon-freertos-rx

Now Amazon provides great real time OS with network software for
MCU (like some peripheral with 100MHz class CPU) as "Amazon FreeRTOS".
As you know "Amazon Web Service(AWS)" is one of biggest IoT Cloud Service in W/W.
"Amazon FreeRTOS" can make a way to connect the "Amazon Web Service" like following steps.

Download or Clone repository from GitHub.
The download zip file name is "amazon-freertos-master.zip".
Extract this zip or your clone directory has "demos" and "lib" directory readme, etc.
This is our root directory called <root>.

Getting Start Steps:
 step1:  Refer to the Development Environment (recommended) section to get the board and tools.
 step2:  Setup tools for your PC, Compiler and IDE are mandatory.
         Others are just reference information, already implemented into step3 data, no need setup.
 step3:  Download RX MCUs Amazon FreeRTOS from GitHub. (Maybe you already done)
         https://github.com/renesas-rx/amazon-freertos
 step4:  Make your AWS account, and make your "Things" on AWS,
         and enable Security Policy to allow all your device will connect to your "Things".
 step5:  Make your device certification and private key and settings put this into your source code.
         <root>/demos/include
          aws_clientcredential.h
           clientcredentialMQTT_BROKER_ENDPOINT[]
           clientcredentialIOT_THING_NAME
          aws_clientcredential_keys.h
           clientcredentialCLIENT_CERTIFICATE_PEM[]
           clientcredentialCLIENT_PRIVATE_KEY_PEM[]
 step6:  Start Renesas IDE (e2 studio) and import Amazon FreeRTOS project.
         import sequence: file->import->existing project into workspace -> select a root directory
         The project folder is placed into <root>/projects/renesas/rx65n-rsk/e2studio/aws_demos
         Please specify this directory only.
         This directory is top of reference. You can also use other project.
         Please select tested project shown into Development Environment (tested or no matrix) section
         in this Readme.
         Note: "DO NOT SET" the check for "Copy projects into workspace" in "Import Projects" dialog.
               Because, some of source in "<root>/lib" folder are outside of project directory.
               So if this check would exist, some of source in "<root>/lib" folder will be missing.
 step7:  Build
 step8:  Execute, confirm console log will show the Echo message from AWS.
         The log will be output from G1CUSB (or other UART/USB) connector as UART/USB.
         Please set baud-rate as 115200bps, 8bit-data, no-parity, 1 stop-bit,
         and "LF" only as return code for your console.
  
Thanks for Amazon team provides great software as Open Source and great IoT Cloud Service.
And Thanks for NoMaY-san provides many many useful information to port the Amazon FreeRTOS to RX65N,
and manages GitHub repository for this project.
And Thanks for Renesas RX MCUs business unit member funds for me,
and helps some hardware/software development.
I hope this solution will be helpful for embedded system developer in W/W.

--------------------------------------------------------------------------
Change Logs
--------------------------------------------------------------------------
v201908.00-rx-0.1.16
 [UPDATED] Added supporting RX MCUs(RX64M, RX71M, RX72M).
 [TESTED] demos MQTT echo behavior for 
          RX65N RSK CC-RX e2 studio with E2 Emulator Lite.
          RX65N Target Board + Silex SX-ULPGN PMOD CC-RX e2 studio with E2 Emulator Lite (on board).
          RX64M RSK CC-RX e2 studio with E2 Emulator Lite.
          RX71M RSK CC-RX e2 studio with E2 Emulator Lite.
          RX72M RSK CC-RX e2 studio with E2 Emulator Lite.

v201908.00-rx-0.1.15
 [UPDATED] Update aws/amazon-freertos version to 201908.00.
 [TESTED] demos MQTT echo behavior for RX65N RSK CC-RX e2 studio with E2 Emulator Lite.
 [ADDED] Release tag for e2 studio.
 
--------------------------------------------------------------------------
Development Environment (recommended)
--------------------------------------------------------------------------
Board: Renesas Starter Kit+ for RX65N-2MB
    [en] https://www.renesas.com/us/en/products/software-tools/boards-and-kits/renesas-starter-kits/renesas-starter-kitplus-for-rx65n-2mb.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/boards-and-kits/renesas-starter-kits/renesas-starter-kitplus-for-rx65n-2mb.html

Board: Renesas RX65N Cloud Kit
    [en] https://www.renesas.com/us/en/products/software-tools/boards-and-kits/eval-kits/rx65n-cloud-kit.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/boards-and-kits/eval-kits/rx65n-cloud-kit.html

Board: Renesas Starter Kit+ for RX64M
    [en] https://www.renesas.com/us/en/products/software-tools/boards-and-kits/starter-kits/renesas-starter-kitplus-for-rx64m.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/boards-and-kits/starter-kits/renesas-starter-kitplus-for-rx64m.html

Board: Renesas Starter Kit+ for RX71M
    [en] https://www.renesas.com/us/en/products/software-tools/boards-and-kits/starter-kits/renesas-starter-kitplus-for-rx71m.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/boards-and-kits/starter-kits/renesas-starter-kitplus-for-rx71m.html

Board: Renesas Starter Kit+ for RX72M (Now ready!)
    [en] https://www.renesas.com/us/en/products/software-tools/boards-and-kits/renesas-starter-kits/renesas-starter-kitplus-for-rx65n-2mb.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/boards-and-kits/renesas-starter-kits/renesas-starter-kitplus-for-rx65n-2mb.html

Compiler: CC-RX V3.01.00 (you need non-expired evaluation license or product license to build Amazon FreeRTOS)
    [en] https://www.renesas.com/us/en/products/software-tools/tools/compiler-assembler/compiler-package-for-rx-family-e2studio.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/tools/compiler-assembler/compiler-package-for-rx-family-e2studio.html

IDE: e2 studio V7.6.0
    [en] https://www.renesas.com/us/en/products/software-tools/tools/ide/e2studio.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/tools/ide/e2studio.html
    
Debugger: E2 Emulator Lite (no need to buy because Renesas Starter Kit has this one into package)
    [en] https://www.renesas.com/us/en/products/software-tools/tools/emulator/e2-emulator-lite.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/tools/emulator/e2-emulator-lite.html
    
    Notice: You can also use E1 Emulator but you have to modify the debugger settings on your IDE.
    
Device Driver: RX Driver Package v122
    [en] https://www.renesas.com/us/en/products/software-tools/software-os-middleware-driver/software-package/rx-driver-package.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/software-os-middleware-driver/software-package/rx-driver-package.html

Comment:
 Renesas Starter Kit+ for RX65N-2MB is expensive/huge spec for just prototyping phase.
 I am preparing low-priced/small-spec kit as expansion board for "Target Board for RX Family".
    [en] https://www.renesas.com/us/en/products/software-tools/boards-and-kits/cpu-mpu-boards/rx-family-target-board.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/boards-and-kits/cpu-mpu-boards/rx-family-target-board.html
 I am also preparing to corresponds to GCC for release from CC-RX compiler limitation.
 
--------------------------------------------------------------------------
Development Environment (optional)
--------------------------------------------------------------------------
Board: RX65N Envision Kit
    [en] https://www.renesas.com/us/en/products/software-tools/boards-and-kits/renesas-promotion-boards/rx65n-envision-kit.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/boards-and-kits/renesas-promotion-boards/rx65n-envision-kit.html

         The log will be output from CN14(PMOD:1-6pin) connector as PMOD UART/USB.
         Please set baud-rate as 115200bps, 8bit-data, no-parity, 1 stop-bit,
         and "LF" only as return code for your console.
         PMOD UART/USB convertor is provided by Digilent.
         https://store.digilentinc.com/pmod-usbuart-usb-to-uart-interface/

         Comment:
           RX65N Envision Kit has no parts related Ethernet.
           Please implements LAN8720A and RJ45 connector onto your RX65N Envision Kit.

Board: RX65N GR-ROSE proto2 (Board Circuit Document No.:X65A-M01-B , Document Rev.B8)
    [en] now preparing
    [ja] now preparing
         [event info] http://gadget.renesas.com/ja/event/2018/RenesasNight13.html

         The log will be output from CN4 10pin=TxD2(P50) connector as UART.
         Please set baud-rate as 115200bps, 8bit-data, no-parity, 1 stop-bit,
         and "LF" only as return code for your console.
         PMOD UART/USB convertor can be used for this signal.
         https://store.digilentinc.com/pmod-usbuart-usb-to-uart-interface/

         Please contact as following.
         PMOD UART/USB ----- RX65N GR-ROSE CN4
         1             -----
         2(TxD)        ----- 10pin
         3             -----
         4             -----
         5(GND)        ----- 5pin
         6(VCC)        ----- 6pin

         [How to connect E2 Emulator Lite]
         GR-ROSE CN3 4pins are connected to RX65N Debug Interface called FINE.
         You can connect E2 Emulator Lite to this pins as following.
         GR-ROSE CN3 ----- Emulator 14pin connector
         pin1(VCC)      ----- pin8
         pin2(GND)      ----- pin2, pin12, pin14
         pin3(MD)       ----- pin7
         pin4(#RES)     ----- pin13

Board: RX64M GR-KAEDE
    [en] http://gadget.renesas.com/en/product/kaede.html
    [ja] http://gadget.renesas.com/ja/product/kaede.html

         The log will be output from CN8 2pin=TxD7(P90) connector as UART.
         Please set baud-rate as 115200bps, 8bit-data, no-parity, 1 stop-bit,
         and "LF" only as return code for your console.
         PMOD UART/USB convertor is provided by Digilent.
         https://store.digilentinc.com/pmod-usbuart-usb-to-uart-interface/

         Please contact as following.
         PMOD UART/USB ----- RX64M GR-KAEDE CN8/CN10
         1             -----
         2(TxD)        ----- CN8-2pin
         3             -----
         4             -----
         5(GND)        ----- CN10-1pin
         6(VCC)        ----- CN10-2pin

Board: RX63N GR-SAKURA II
    [en] http://gadget.renesas.com/en/product/sakura.html
    [ja] http://gadget.renesas.com/ja/product/sakura.html

         The log will be output from CN8 2pin=TxD0(P20) connector as UART.
         Please set baud-rate as 115200bps, 8bit-data, no-parity, 1 stop-bit,
         and "LF" only as return code for your console.
         PMOD UART/USB convertor is provided by Digilent.
         https://store.digilentinc.com/pmod-usbuart-usb-to-uart-interface/

         Please contact as following.
         PMOD UART/USB ----- RX63N GR-SAKURA CN8/CN10
         1             -----
         2(TxD)        ----- CN8-2pin
         3             -----
         4             -----
         5(GND)        ----- CN10-1pin
         6(VCC)        ----- CN10-2pin
         
         Notice:
         GR-SAKURA has 2 types. GR-SAKURA has 128KB-RAM, GR-SAKURA II has 256KB-RAM.
         Please confirm your GR-SAKURA is GR-SAKURA II that has 256KB-RAM RX63N (R5F563NYDDFP).
         Because Amazon FreeRTOS needs RAM size 128KB over.
         
Board: RX65N Target Board + Cloud Option Board (with Silex SX-ULPGN)	
    [en] https://www.renesas.com/us/en/products/software-tools/boards-and-kits/cpu-mpu-boards/rx-family-target-board.html
    [ja] https://www.renesas.com/jp/ja/products/software-tools/boards-and-kits/cpu-mpu-boards/rx-family-target-board.html

         The log will be output from Cloud Option Board CN18 connector as UART.
         Please set baud-rate as 115200bps, 8bit-data, no-parity, 1 stop-bit,
         and "LF" only as return code for your console.

         The communication will be output/input from/to Cloud Option Board CN5(PMOD) as UART.
         Silex SX-ULPGN PMOD can be connected.
         Please contact as following.
         SX-ULPGN PMOD                ----- RX65N Cloud Option Board (PMOD)
         HSUART1-CTS(PMOD 1pin)       ----- PMOD 1pin
         HSUART1-MOSI(PMOD 2pin)      ----- PMOD 2pin
         HSUART1-MISO(PMOD 3pin)      ----- PMOD 3pin
         HSUART1-RTS(PMOD 4pin)       ----- PMOD 4pin
         GND(PMOD 5pin)               ----- PMOD 5pin
         VCC(PMOD 6pin)               ----- PMOD 6pin
         GPIO                         ----- PMOD 7pin
         PWD_L(PMOD 8pin)             ----- PMOD 8pin
         HSUART2-MOSI(SX-ULPGN 15pin) ----- PMOD 9pin(P26)
         HSUART2-MISO(SX-ULPGN 16pin) ----- PMOD 10pin(P30)
         GND(PMOD 11pin)              ----- PMOD 11pin
         VCC(PMOD 12pin)              ----- PMOD 12pin
         
         
WIFI Module: Silex SX-ULPGN PMOD
    [en] https://www.renesas.com/us/en/products/synergy/gallery/partner-projects/silex-wifi-pmod.html
    [ja] https://www.renesas.com/jp/ja/products/synergy/gallery/partner-projects/silex-wifi-pmod.html
    
         You can put this module into followin PMOD connector.
           Renesas Starter Kit+ for RX65N-2MB: PMOD1
         
         And you have to update following settings in <root>/demos/common/include/aws_clientcredential.h
           #define clientcredentialWIFI_SSID       "Paste Wi-Fi SSID here."
           #define clientcredentialWIFI_PASSWORD   "Paste Wi-Fi password here."
           
IDE: CS+ v8.01.00
    [en] https://www.renesas.com/en-us/products/software-tools/tools/ide/csplus.html
    [ja] https://www.renesas.com/ja-jp/products/software-tools/tools/ide/csplus.html

Smart Configurator v2.0.0 (Standalone for CS+): 
    [en] https://www.renesas.com/en-us/products/software-tools/tools/solution-toolkit/smart-configurator.html
    [ja] https://www.renesas.com/ja-jp/products/software-tools/tools/solution-toolkit/smart-configurator.html
    
IDE/Compiler: EWRX/IAR v410
    [en] https://www.iar.com/iar-embedded-workbench/#!?architecture=RX
    [ja] https://www.iar.com/jp/iar-embedded-workbench/#!?architecture=RX

Compiler: GCC for Renesas 4.8.4.201803-GNURX 
    [en] https://gcc-renesas.com/
    [ja] https://gcc-renesas.com/ja/
    
--------------------------------------------------------------------------
Connection Pattern
--------------------------------------------------------------------------
  pattern1: wifi module has TCP/IP and SSL/TLS, Amazon recommends this pattern as RAM<16KB.
  osi	protocol	implemented into
  7	aws		Amazon FreeRTOS
  7	mqtt		Amazon FreeRTOS
  6	ssl/tls		wifi module
  5	socket		wifi module
  4	tcp		wifi module
  3	ip		wifi module
  2	ether		wifi module
  1	phy		wifi module

  RX65N Target Board + Cloud Option Board (with Espressif ESP8266)
  RX231 Target Board + Cloud Option Board (with Espressif ESP8266)
  RX130 Target Board + Cloud Option Board (with Espressif ESP8266)
  RX65N GR-ROSE (with Espressif ESP8266)

  pattern2: MCU has TCP/IP and SSL/TLS and using MCU Ethernet, Amazon recommends this pattern as RAM<64KB.
  osi	protocol	implemented into
  7	aws		Amazon FreeRTOS
  7	mqtt		Amazon FreeRTOS
  6	ssl/tls		Amazon FreeRTOS
  5	socket		Amazon FreeRTOS
  4	tcp		Amazon FreeRTOS
  3	ip		Amazon FreeRTOS
  2	ether		Amazon FreeRTOS(RX Ether specific)
  1	phy		ether-phy

  RX65N RSK <first step>
  RX65N Envision Kit <first step>
  RX65N GR-ROSE
  RXxxN Envision Kit (Murata Type 1FX on board)
  
  pattern3: MCU has TCP/IP and SSL/TLS and using MCU SDIO for wifi, Amazon recommends this pattern as RAM<64KB.
  osi	protocol	implemented into
  7	aws		Amazon FreeRTOS
  7	mqtt		Amazon FreeRTOS
  6	ssl/tls		Amazon FreeRTOS
  5	socket		Amazon FreeRTOS
  4	tcp		Amazon FreeRTOS
  3	ip		Amazon FreeRTOS
  2	ether		Amazon FreeRTOS(RX SDIO-wifi specific)
  1	phy		wifi radio

  RX65N RSK + SDIO wifi SDK (with Murata Type 1FX)
  RX65N Envision Kit + SDIO wifi SDK (with Murata Type 1FX)
  RXxxN Envision Kit (Murata Type 1FX on board)

  patternX: wifi module has TCP/IP and MCU has SSL/TLS, Amazon does NOT recommend this pattern!
            This pattern needs RAM<64KB but only MCU SSL/TLS is running even if both MCU and wifi module
            have SSL/TLS as function. This is very compromised pattern.
            Because Silex wifi module does not have a SSL/TLS client authentication scheme that Amazon
            Web Service requires.
  osi	protocol	implemented into
  7	aws		Amazon FreeRTOS
  7	mqtt		Amazon FreeRTOS
  6	ssl/tls		Amazon FreeRTOS
  5	socket		Amazon FreeRTOS
  4	tcp		wifi module
  3	ip		wifi module
  2	ether		wifi module
  1	phy		wifi module

  RX65N Target Board + Cloud Option Board (with Silex SX-ULPGN)	<first step>
  RX231 Target Board + Cloud Option Board (with Silex SX-ULPGN)	<first step> -> cannot be realized of lack of RAM
  RX130 Target Board + Cloud Option Board (with Silex SX-ULPGN)	<first step> -> cannot be realized of lack of RAM

--------------------------------------------------------------------------
Development Environment (tested or no matrix)
--------------------------------------------------------------------------

Borad number:
 (1)rx65n-rsk				: Renesas Starter Kit+ for RX65N-2MB
 (2)rx65n-rsk-uart-sx-ulpgn		: Renesas Starter Kit+ for RX65N-2MB + Silex SX-ULPGN PMOD
 (3)rx65n-envision-kit			: RX65N Envision Kit -> not available
 (4)rx65n-envision-kit-uart-sx-ulpgn	: RX65N Envision Kit + Silex SX-ULPGN PMOD -> not available
 (5)rx65n-gr-rose			: RX65N GR-ROSE -> not available
 (6)rx65n-gr-rose-uart-esp8266		: RX65N GR-ROSE (WIFI: ESP8266) -> not available
 (7)rx65n-cloud-kit-uart-sx-ulpgn	: RX65N Target Board + Silex SX-ULPGN PMOD -> not available
 (8)rx64m-gr-kaede			: RX64M GR-KAEDE -> not available
 (9)rx63n-gr-sakura2: RX63N GR-SAKURA II -> not available
 (10)rx64m-rsk				: Renesas Starter Kit+ for RX64M
 (11)rx71m-rsk				: Renesas Starter Kit+ for RX71M
 (12)rx72m-rsk				: Renesas Starter Kit+ for RX72M

Connection pattern number:
 (1)pattern1: wifi module has TCP/IP and SSL/TLS, Amazon recommends this pattern as RAM<16KB.
 (2)pattern2: MCU has TCP/IP and SSL/TLS and using MCU Ethernet, Amazon recommends this pattern as RAM<64KB.
 (3)pattern3: MCU has TCP/IP and SSL/TLS and using MCU SDIO for wifi, Amazon recommends this pattern as RAM<64KB.
 (4)patternX: wifi module has TCP/IP and MCU has SSL/TLS, Amazon does NOT recommend this pattern!
 
/////////////////////////////////////////////////////////////

IDE number:
 (1)e2 studio
 (2)CS+
 (3)EWRX(IAR)

Compiler number:
 (1)CC-RX
 (2)GCC
 (3)IAR

                 / IDE      (1)         (2)         (3)
Board Connection / Compiler (1) (2) (3) (1) (2) (3) (1) (2) (3)
(1)   (2)        /           x   *       -   -   -   -   -     
(2)   (4)        /           -   -       -   -   -   -   -     
(3)   (2)        /           -   -       -   -   -   -   -     
(4)   (4)        /           -   -           -   -   -   -     
(5)   (2)        /           -   -       -   -   -   -   -     
(6)   (4)        /           -   -           -   -   -   -     
(7)   (4)        /           x   *       -   -   -   -   -     
(8)   (2)        /           -   -       -   -   -   -   -     
(9)   (2)        /           -   -       -   -   -   -   -     
(10)  (2)        /           x   *       -   -   -   -   -     
(11)  (2)        /           x   *       -   -   -   -   -     
(12)  (2)        /           x   *       -   -   -   -   -     

  X: tested (Amazon FreeRTOS Qualification)
  x: tested (MQTT echo demo)
  *: now trying(still junk)
  -: N/A

--------------------------------------------------------------------------
RX65N Device Introduction
--------------------------------------------------------------------------
RX65N is powerful device for IoT embedded system.
RX65N has some useful peripheral for getting sensor data, control some motors,
and communication with some devices using USB/Ether/SD card/SDIO/UART/I2C/SPI/etc,
and original security IP can make "Root of Trust" as device security,
and LCD controller that can connect to generic LCD
(recommended 480x272 resolution with double buffer (256x2KB)),
with huge internal memory (max ROM=2MB, RAM=640KB)
with powerful/low current consumption (34 CoreMark/mA),
Renesas original CPU(RXv2 core)@120MHz using 40nm process.
https://www.renesas.com/en-us/about/press-center/news/2017/news20171113.html

--------------------------------------------------------------------------
EOF
--------------------------------------------------------------------------
