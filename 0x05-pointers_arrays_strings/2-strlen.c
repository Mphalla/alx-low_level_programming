#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string pointer  to passed to this function
 * Return: returns the lenth of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
