#include "main.h"

/**
 * sqtRecursive- recursion loop
 * @n: integer
 * @m: comparison number
 * Return: 1 if not found sqrt otherwise
 */
int sqtRecursive(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqtRecursive(n - 1, m));
}
/**
 * _find_sqrt - finds the natural square root of a number
 * @n: given number
 * Return: square root of n otherwise -1
 */
int _find_sqrt(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}
/**
 * is_prime_number - check if the given number is prime
 * @n: given number
 * Return: 1 if number is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1 || _find_sqrt(n) >= 1)
		return (0);
	if (_find_sqrt(n) == -1)
		return (1);
	return (_find_sqrt(n));
}
