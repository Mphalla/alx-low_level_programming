#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: count length of argv
 * @argv: number of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int pos, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	pos = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[pos] != '\0')
	{
		if (total >= coins[pos])
		{
			aux = (total / coins[pos]);
			change += aux;
			total -= coins[pos] * aux;
		}
		pos++;
	}
	printf("%d\n", change);
	return (0);

}
