#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: a pointer to an integer that will be changed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *begin_s, *end_s, c;
	int i, count;
	int len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}

	count = len;

	begin_s = s;
	end_s = s;

	for (i = 0; i < count - 1; i++)
	{
		end_s++;
	}
	for (i = 0; i < count / 2; i++)
	{
		c = *end_s;
		*end_s = *begin_s;
		*begin_s = c;

		begin_s++;
		end_s--;
	}
}
