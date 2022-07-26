#include <studio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if a given char is number or not
 * @str: array str
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /* counts string */
	{
		if (!isdigit(str[count]))  /* to check if str has digit */
		{
			return (0);
		}
	count++;
	}
	return (1);
}

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, count, sum;

	sum = 0;
	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			i = atoi(argv[count]);
			sum += i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
