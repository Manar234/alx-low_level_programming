#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	t = 0;

	while (s1[i] != '\0')
		i++;
	while (s2 != '\0')
		t++;
	s = malloc(sizeof(char) * (i + t + 1));

	if (s == NULL)
		return (NULL);
	i = t = 0;
	while (s1[i] != 0)
	{
		s[i] = s1[i];
		i++;
	}
	while (s2 != 0)
	{
		s[i] = s2[t];
		i++, t++;
	}
	s[i] = '\0';
	return (s);
}
