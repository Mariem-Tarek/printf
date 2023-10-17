#include "main.h"

/**
 * print_int - print integer
 *
 * @p: pointer
 *
 * Return: number
 *
 */

int print_int(int p)
{
	int m = p;

	if (m < 0)
	{
		_putchar2('-');
		m = -m;
	}
	if (m / 10)
		print_int(m / 10);
	_putchar2(m % 10 + '0');
	return (count(m));
}
/**
 * print_d - print decimal
 *
 * @p: pointer
 *
 * Return: number
 *
 */
int print_d(int p)
{
	int m = p;

	if (m < 0)
	{
		_putchar2('-');
		m = -m;
	}
	if (m / 10)
		print_d(m / 10);
	_putchar2(m % 10 + '0');
	return (count(m));
}
