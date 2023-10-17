#include "main.h"

/**
 * print_un_i - print unsigned int
 *
 * @x: pointer
 *
 * Return: number
 *
 */

int print_un_i(int x)
{
	int m = x;

	if (m < 0)
		m = -m;
	if ((m / 10) > 0)
		print_un_i(m / 10);
	_putchar2((m % 10) + '0');
	return (count(x));
}
