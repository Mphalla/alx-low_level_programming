#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: a pointer to a character that input value
 * @src: a pointer to a charater that input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
