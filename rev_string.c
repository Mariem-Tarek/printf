#include "main.h"
/**
 * rev_string - reverse of string
 *
 * @m: string
 *
 * Return: rev
 */

int rev_string(char *m)
{
	int i, j = 0;

	if (m == 0)
		return (0);
	while (m[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar2(m[i]);
	return (j);
}
