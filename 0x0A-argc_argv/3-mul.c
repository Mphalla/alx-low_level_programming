#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc == 3)
	{
		/* atoi convert a string to an int */
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	return (1);
}
