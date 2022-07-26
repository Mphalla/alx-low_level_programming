#include <studio.h>
#include <stdlib.h>
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
 * Return: result of addition or 1
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = check_num(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
