#include "main.h"

/**
 * rev_string - reverse of string
 *
 * @s: string
 *
 * Return: rev
 */

int rev_string(char *s)
{
	int l, i, c = 0;
	char temp;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
		c++;
	}
	return (c);
}
