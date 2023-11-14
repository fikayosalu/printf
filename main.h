#ifndef
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _putchar(char c);
int print_char(va_list val);
int print_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int _printf(const char *format, ...);
int print_dec(va_list args);
int print_int(va_list args);
int print_binary(va_list val);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);


#endif
