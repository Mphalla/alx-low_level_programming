#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: point to an integer parameter 1
 * @b: point to an integer parameter 2
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
