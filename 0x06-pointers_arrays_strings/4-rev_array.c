#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: a pointer to an array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
