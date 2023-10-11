#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - length of a string
 * @x: string to be evaluated
 * Return: length of string l
 */

int _strlen(char *x)
{
	int l;

	l = 0;

	while (x[l] != '\0')
	{
		l++;
	}
	return (l);
}
/**
 * _strcpy- copies string from src to dest
 * @dest: destination of string
 * @src: source where string will be copied from
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int length, l;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (l = 0; l < length; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';
	return (dest);
}
/**
 * new_dog- function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int length1, length2;

	length1 = _strlen(name);

	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
