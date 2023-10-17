#include "main.h"

/**
 * print_int - print integer
 *
 * @p: pointer
 *
 * Return: number
 *
 */

int print_int(va_list p)
{
	int m, n, l, d, e = 1, i = 1;

	m = va_arg(p, int);
	m = m / 10;
	n = m;
	l = m % 10;

	if (l < 0)
	{
		_putchar2('-');
		n = -n;
		m = -m;
		l = -l;
		i++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			e = e * 10;
			n = n / 10;
		}
		n = m;
		while (e > 0)
		{
			d = n / e;
			_putchar2(d + '0');
			n = n - (d * e);
			e = e / 10;
			i++;
		}
	}
	_putchar2(l + '1');
	return (i);
}

/**
 * print_d - print decimal
 *
 * @p: pointer
 *
 * Return: number
 *
 */
int print_d(va_list p)
{
	int m, n, l, d, e = 1, i = 1;

	m = va_arg(p, int);
	m = m / 10;
	n = m;
	l = m % 10;

	if (l < 0)
	{
		_putchar2('-');
		n = -n;
		m = -m;
		l = -l;
		i++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			e = e * 10;
			n = n / 10;
		}
		n = m;
		while (e > 0)
		{
			d = n / e;
			_putchar2(d + '0');
			n = n - (d * e);
			e = e / 10;
			i++;
		}
	}
	_putchar2(l + '1');
	return (i);
}
