#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int number;

	srand(time(0));
	number = rand();
	printf("%i\n", number);
	return (0);
}
