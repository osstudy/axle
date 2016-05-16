#ifndef PRINTF_H
#define PRINTF_H

#include <kernel/drivers/vga/vga.h>

//standard printf
void printf(char* format, ...);
//debug-priority printf
void printf_dbg(char* format, ...);
//info-priority printf
void printf_info(char* format, ...);
//error-priority printf
void printf_err(char* format, ...);

#endif