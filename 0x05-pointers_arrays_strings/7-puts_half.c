#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * @str: pointer to int that will be changed
 *
 * Return: void correct answer
 */
void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
