#include <unistd.h>
#include "main.h"

/**
 * _putchar2 - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar2(char c)
{
	return (write(1, &c, 1));
}
