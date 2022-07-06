#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: a character to be checked
 * Return: returns 1 and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
