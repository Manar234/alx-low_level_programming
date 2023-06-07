#include "main.h"
/**
 * is_palindrome - that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: pointer to string to check
 * @st: starting index
 * @e: ending index
 * Return: 1 or 0
 */
int pre(char *s, int st, int e);
int is_palindrome(char *s)
{
	int n = strlen(s);

	return (pre(s, 0, n - 1));
}
/**
 * pre - checks if a string is a palindrome
 * @s: string to check
 * @st: starting index
 * @e: ending index
 *
 * Return: 0 or 1
 */
int pre(char *s, int st, int e)
{
	if (st >= e)
		return (1);
	if (s[st] != s[e])
		return (0);
	return (pre(s, st + 1, e - 1));
}
