#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of pointer to argument strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /* ignore argv */
	printf("%i\n", argc - 1);
	return (0);
}
