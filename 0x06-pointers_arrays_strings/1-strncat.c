#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to xource input
 * @n: numbers of bytes
 * Return: pointer to resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;


	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
