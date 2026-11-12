#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the characters to match
 *
 * Return: pointer to the first matching character, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}

	return (NULL);
}

