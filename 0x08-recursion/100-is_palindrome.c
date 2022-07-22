#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pldrm - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolena int
 */
int pldrm(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (pldrm(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - palindrome
 * @s: pointer to a string
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pldrm(s, len - 1));
}
