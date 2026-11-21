#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dog_name;
	char *dog_owner;
	int i, j;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	dog_name = malloc(sizeof(char) * (i + 1));
	if (dog_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (j = 0; owner[j] != '\0'; j++)
		;
	dog_owner = malloc(sizeof(char) * (j + 1));
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		dog_name[i] = name[i];
	dog_name[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
		dog_owner[j] = owner[j];
	dog_owner[j] = '\0';

	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;

	return (dog);
}
