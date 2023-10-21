#include "main.h"

/**
 * print_octal - print octal
 *
 * @p: pointer
 *
 * Return: number
 *
 */

int print_octal(va_list p)
{
	int i, c = 0, *arr;
	unsigned int m = va_arg(p, unsigned int);
	unsigned int t = m;

	while (m / 8 != 0)
	{
		m = m / 8;
		c++;
	}
	c++;
	arr = malloc(sizeof(int) * c);

	for (i = 0; i < c; i++)
	{
		arr[i] = t % 8;
		t = t / 8;
	}
	for (i = c - 1; i >= 0; i--)
		_putchar2(arr[i] + '0');

	free(arr);
	return (c);
}
