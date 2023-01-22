#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 * erminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * Return: The pointer to dest.
 */

char *_strcopy(char *dest, char *src)v
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: The new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		cutie_dog = malloc(sizeof(dog_t));

		if (cutie_dog == NULL)
			return (NULL);

		cutie_dog->name = malloc(sizeof(char) * name_l);

		if (cutie_dog->name == NULL)
		{
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->owner = malloc(sizeof(char) * own_l);

		if (cutie_dog->owner == NULL)
		{
			free(cutie_dog->name);
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->name = _strcpy(cutie_dog->name, name);
		cutie_dog->owner = _strcpy(cutie_dog->owner, owner);
		cutie_dog->age = age;
	}
	return (cutie_dog);
}
