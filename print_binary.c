#include "main.h"

/**
 * print_binary - print bin
 *
 * @p: pointer
 *
 * Return: binary number
 *
 */
int print_binary(va_list p)
{
	int f = 0, c = 0, i, a = 1, b;
	unsigned int n = va_arg(p, unsigned int), m;

	for (i = 0; i < 33; i++)
	{
		m = ((a << (32 - i)) & n);
		if (m >> (31 - i))
			f = 1;
		if (f)
		{
			b = m >> (32 - i);
			_putchar2(b + 48);
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		_putchar2('0');
	}
	return (c);
}
