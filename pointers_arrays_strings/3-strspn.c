#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to match
 *
 * Return: the number of matching characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s != '\0')
	{
		a = accept;

		while (*a != '\0' && *a != *s)
			a++;

		if (*a == '\0')
			return (count);

		count++;
		s++;
	}

	return (count);
}
