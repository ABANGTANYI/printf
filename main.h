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

