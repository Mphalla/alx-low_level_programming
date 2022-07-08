#include "main.h"

/**
 * print_square - prints a square,
 * followed by a new line
 * @size: takes in the size of the square
 */
void print_square(int size)
{
	int v, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (v = 0; v < size; v++)
	{
		for (h = 0; h < size; h++)
			_putchar('#');
		_putchar('\n');
	}
}
