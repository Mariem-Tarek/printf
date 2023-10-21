#include "main.h"
/**
* _printf - a new function
*
* @format : format spacifier
*
* Return: number og bytes
*/
int _printf(const char *format, ...)
{
	int i, counter = 0;
	va_list arguments;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arguments, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{_putchar2(format[i]);
			counter++; }
		else
		{
		if (format[i + 1] == 'c' && format[i] == '%')
		{_putchar2(va_arg(arguments, int));
			counter++; }
		if (format[i + 1] == 's' && format[i] == '%')
		{counter += (_puts2(va_arg(arguments, char *)) - 1); }
		if (format[i + 1] == '%')
		{counter += _putchar2('%'); }
		if (format[i + 1] == 'b' && format[i] == '%')
		{counter += print_binary(arguments); }
		if (format[i + 1] == 'd' && format[i] == '%')
		{counter += print_d(va_arg(arguments, int)); }
		if (format[i + 1] == 'i' && format[i] == '%')
		{counter += print_int(va_arg(arguments, int)); }
		if (format[i + 1] == 'u' && format[i] == '%')
		{counter += print_un_i(va_arg(arguments, int)); }
		if (format[i + 1] == 'r' && format[i] == '%')
		{counter += rev_string(va_arg(arguments, char *)); }
		if (format[i + 1] == 'o' && format[i] == '%')
		{counter += print_octal(arguments); }
		if (format[i + 1] == 'x' && format[i] == '%')
		{counter += print_hex_small(arguments); }
		if (format[i + 1] == 'X' && format[i] == '%')
		{counter += print_hex_capital(arguments); }
		i++; } }
	va_end(arguments);
	return (counter);
}
