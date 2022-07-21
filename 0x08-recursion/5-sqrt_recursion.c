#include "main.h"

/**
 * _is_sqrt - asses function sqrt
 * @i: integer
 * @n: integer
 * Return: is sqrt
 */
int _is_sqrt(int i, int n)
{
	if (n == 0 || n == 1)
	return (n);

	else if (i * i < n)
	return (_is_sqrt(i + 1, n));

	else if (i * i == n)
	return (i);

	return (-1);

	return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: integer
 * Return: sqrt recursion
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}

	else
	{
		return (_is_sqrt(i, n));
	}
}
