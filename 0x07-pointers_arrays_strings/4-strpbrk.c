#include "main.h"

/**
 * _strpbrk - function that searches a string
 * for any of a set of bytes
 * @s: string to be searched on
 * @accept: if any bytes in the string
 * Return: string s that macthes any character specified in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
