#include "main.h"
/**
 * wildcmp - that compares two strings and returns 1 if the strings can
 * be considered identical, otherwise return 0;
 * @s1: string one
 * pre - function to compare two strings
 * @s2: string two
 * Return: 1 or 0
 */
int pre(char *s1, char *s2);
int wildcmp(char *s1, char *s2)
{
	return (pre(s1, s2));
}
/**
 * pre - function to compare two strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 * Return: 1 if the strings can be considered identical,
 * 0 otherwise
 */
int pre(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (*s1 == '\0')
			return (pre(s1, s2 + 1));
		return (pre(s1 + 1, s2) || pre(s1, s2 + 1));
	}
	else if (*s1 == '\0' || *s2 == '\0')
		return (*s1 == *s2);
	else if (*s1 == *s2 || *s2 == '?')
		return (pre(s1 + 1, s2 + 1));
				return (0);
}
