<<<<<<< HEAD
#ifndef "MAIN_H"
#define "MAIN_H"

int printf_char(va_list val);

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_exe_string(va_list val);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);

#endif

=======
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int prinfchar(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(conts char *str);
int print_37(void);
int printf_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int printf_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
#endif
>>>>>>> aa4aae8724cdc89b7528606341bff4ca5d81511b
