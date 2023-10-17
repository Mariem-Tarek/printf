#include "main.h"

/**
 * count- counter
 *
 * @n: number
 *
 * Return: counter
 *
 */

int count(int n)
{
	int c = 0;

	if (n == 0)
		return (1);
	if (n > 0)
	{
		while (n != 0)
		{
			n = n / 10;
			c++;
		}
	}
	else
	{
		c++;
		n = -n;
		while (n != 0)
		{
			n = n / 10;
			c++;
		}
	}
	return (c);
}
