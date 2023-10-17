#ifndef MAIN_H
#define MAIN_H


#include<stdio.h>
#include<stdarg.h>
#include<unistd.h>
#include <stdlib.h>


int _putchar2(char c);
int _puts2(char *c);
int _printf(const char *format, ...);
int print_int(va_list p);
int print_d(va_list p);
int print_binary(va_list p);
int print_un_i(va_list p);

#endif
