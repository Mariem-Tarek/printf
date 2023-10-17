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

	int i;
	int counter = 0;
	int str_counter = 0;
	va_list arguments;


	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(arguments, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar2(format[i]);
		}
		else if (format[i + 1] == 'c' && format[i] == '%')
		{
			_putchar2(va_arg(arguments, int));
			i++;
		}
		else if (format[i + 1] == 's' && format[i] == '%')
		{
			str_counter = _puts2(va_arg(arguments, char *));
			i++;
			counter += (str_counter - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar2('%');
		}
		counter++;
	}
	va_end(arguments);
	return (counter);

}
