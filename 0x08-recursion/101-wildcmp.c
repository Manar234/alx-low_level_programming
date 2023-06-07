#include "main.h"
/**
 * wildcmp - that compares two strings and returns 1 if the strings can
 * be considered identical, otherwise return 0;
 * @s1: string one
 * @s2: string two
 * Return: 1 or 0
 */
int pre(const char *c, int s, int e);
int wildcmp(char *s1, char *s2)
{
	return (pre(
