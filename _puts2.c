#include "main.h"
/**
* _puts2 - a new function
*
* @c : char prametar
*
* Return: counter
*/
int _puts2(char *c)
{
	int counter = 0;

	if (c)
	{
		for (counter = 0; c[counter] != '\0'; counter++)
		{
			_putchar2(c[counter]);
		}
	}
	return (counter);
}
