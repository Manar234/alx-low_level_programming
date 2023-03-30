#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: pointer to destination input
 * @src: poiinter to course intput
 * @n: numbers of bytes
 * Return: pointer to resulting @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
