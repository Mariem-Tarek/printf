#include "main.h"
/**
* print_hex_capital - a new function
*
* @p : int prametar
*
* Return: Nothing
*/

int print_hex_capital(va_list p)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(p, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar2(array[i] + '0');
	}
	free(array);
	return (counter);
}
/**
* print_hex_small - a new function
*
* @p : int prametar
*
* Return: Nothing
*/

int print_hex_small(va_list p)
{
int i, counter = 0;
int *array;
unsigned int num = va_arg(p, unsigned int);
unsigned int tem = num;

while (num / 16 != 0)
{
num = num / 16;
counter++;
}
counter++;
array = malloc(sizeof(int) * counter);

for (i = 0; i < counter; i++)
{
array[i] = tem % 16;
tem = tem / 16;
}
for (i = counter - 1; i >= 0; i--)
{
if (array[i] > 9)
array[i] = array[i] + 39;
_putchar2(array[i] + '0');
}
free(array);
return (counter);
}
