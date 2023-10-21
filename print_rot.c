#include "main.h"

/**
 * print_rot - convert
 *
 * @p: pointer
 *
 * Return: number
 *
 */
int print_rot(va_list p)
{
	int i, j, c = 0, m;
	char *o = va_arg(p, char *);
	char v[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char s[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	if (o == 0)
		return (0);
	for (i = 0; o[i]; i++)
	{
		m = 0;
		for (j = 0; v[j] && m == 0; j++)
		{
			if (o[i] == v[j])
			{
				_putchar2(s[j]);
				c++;
				m = 1;
			}
		}
		if (!m)
		{
			_putchar2(o[i]);
			c++;
		}
	}
	return (c);
}
