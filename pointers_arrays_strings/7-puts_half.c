#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int length;
	int i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	i = length / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
