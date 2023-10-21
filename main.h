#ifndef MAIN_H
#define MAIN_H


#include<stdio.h>
#include<stdarg.h>
#include<unistd.h>
#include <stdlib.h>


int _putchar2(char c);
int _puts2(char *c);
int _printf(const char *format, ...);
int print_int(int p);
int print_d(int p);
int print_binary(va_list p);
int print_octal(va_list p);
int print_un_i(int x);
int count(int n);
int rev_string(char *s);
int print_rot(va_list p);

#endif
