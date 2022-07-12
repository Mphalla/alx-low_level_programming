#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n
 * elements of an array of integers
 * followed by a new line.
 * @a: a pointer to an int that will be changed
 * @n: return value n
 *
 * Return: void means answer is correct
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	i++;
	}
	printf("\n");
}
