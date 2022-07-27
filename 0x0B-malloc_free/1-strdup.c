#include "main.h"

/**
 * _strdup - returns pointer to newly allocated space in memory
 * contains copy of string given as a parameter.
 * @str: string to copy
 * Return: pointer to array or null
 */
char *_strdup(char *str)
{
	char *strup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strup = malloc(sizeof(*str) * i); /* define values with malloc */
	if (strup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strup[j] = str[j];
		j++;
	}
	return (strup);
}
