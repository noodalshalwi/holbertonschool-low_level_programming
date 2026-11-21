#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcopy - allocates memory and copies a string into it
 * @s: the string to copy
 *
 * Return: pointer to the new copy, or NULL if malloc fails
 */
char *_strcopy(char *s)
{
	char *copy;
	int i, len;

	len = _strlen(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = s[i];

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_copy = _strcopy(name);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = _strcopy(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
