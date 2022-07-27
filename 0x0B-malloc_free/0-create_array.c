#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: number of elements array
 * @c: char to be initialized with
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int pos;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size); /* Define values with malloc */
	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		pos = 0;
	/* while fo array */
	while (pos < size)
	{
		str[pos] = c;
		pos++;
	}
	return (str);
	}
}
