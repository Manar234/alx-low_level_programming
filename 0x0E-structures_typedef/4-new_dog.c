#include "dog.h"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
/**
 * _strlen - a function that gets a length of string
 * @str: the string to get the length
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}
/**
 * _strcopy - function that returns @dest with a copy of a string from @sc
 * @dest: copy string
 * @sc: string to copy
 * Return: @dest
 */
char *_strcopy(char *dest, char *sc)
{
	int x;

	for (x = 0; sc[x]; x++)
		dest[x] = sc[x];
	dest[x] = '\0';

	return (dest);
}
/**
 * new_dog - creats a new dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: dog owner
 * Return: struct pointer dog NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
