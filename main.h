#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char);
int _printf(const char *format, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_string(va_list ap);
void print_number(int n);
#endif
