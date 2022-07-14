#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: a pointer to a character that input value
 * @src: a pointer to a character that input value
 * @n: input value it will use at most n bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
