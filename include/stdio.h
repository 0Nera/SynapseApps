#pragma once

#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <scancodes.h>


/*
    Стандартная библиотека SynapseOS

    stdio - модуль ввода-вывода
*/

#define SC_CODE_puts            0
#define SC_CODE_getscancode     1
#define SC_CODE_getchar         2
#define SC_CODE_gets            3
#define SC_CODE_malloc          4
#define SC_CODE_free            5
#define SC_CODE_putpixel        32
#define SC_CODE_drawline        33
#define SC_CODE_version         40


enum colors  {
    VESA_BLACK = 0x000000,
    VESA_BLUE = 0x0000AA,
    VESA_GREEN = 0x00AA00,
    VESA_CYAN = 0x00AAAA,
    VESA_RED = 0xAA0000,
    VESA_MAGENTA = 0xAA00AA,
    VESA_BROWN = 0xAA5500,
    VESA_LIGHT_GREY = 0xAAAAAA,
    VESA_DARK_GREY = 0x555555,
    VESA_LIGHT_BLUE = 0x5555FF,
    VESA_LIGHT_GREEN = 0x55FF55,
    VESA_LIGHT_CYAN = 0x55FFFF,
    VESA_LIGHT_RED = 0xFF5555,
    VESA_LIGHT_MAGENTA = 0xFF55FF,
    VESA_LIGHT_BROWN = 0xffff55,
    VESA_WHITE = 0xFFFFFF,
};


int getscancode();
char getchar();
char *gets();
int getversion();
int print_str(char *str);
int draw_pixel(uint32_t x, uint32_t y, uint32_t color);
void putint(const int i);
void puthex(uint32_t i);
void print(char *format, va_list args);
void printf(char *text, ...);