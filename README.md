# F746G-DISCO_touchgfx_example

This repository contains some examples for STM32F746G-DISCO board using TouchGFX to generate GUI applications. It has CubeIDE template project "F746G-DISCO_touchgfx_template" which includes minimum CubeMX configuration and code start-up to initialize and run TouchGFX apps. To use this template you can follow these steps:

1. Copy entire project "F746G-DISCO_touchgfx_template" and then paste to your workplace, change its folder name into <your_name_project>.
2. Open these files with Notepad++ editor or whatever your code editor you have, and change "F746G-DISCO_touchgfx_template" word into <your_name_project>.
- TouchGFX/ApplicationTemplate.touchgfx.part
- .cproject
- .mxproject
- .project
- F746G-DISCO_touchgfx_template.ioc (also change this file name, too)
3. Open STM32CubeIDE, and Import the project.
4. Now, you can open file ApplicationTemplate.touchgfx.part to start developing your TouchGFX GUI application using TouchGFX IDE. Then click "Generate Code", the generated code with C++ language would not affect other codes already had in template.
5. In STM32CubeIDE, clean and build the project.
6. If build successful, you can debug/run the application by right click on project, choose Debug As/Debug Configurations, then create new STM32 Cortex-M C/C++ Application. Because TouchGFX uses QuadSPI flash to store image code, so in Debugger tab, Misc sub-menu, check External Loader and choose "N25Q128A_STM32F746G-DISCO, 0x90000000, NOR_FLASH, N25Q128A_STM32F746G-DISCO.stldr".

Required softwares and libraries version:
- STM32CubeIDE: version 1.5.1
- STM32CubeMX: version 6.1.1
- TouchGFX: version 4.16.0
- STM32F7 HAL library: version 1.16.0