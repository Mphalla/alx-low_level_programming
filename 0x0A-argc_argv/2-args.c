#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
