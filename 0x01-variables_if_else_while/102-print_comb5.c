#include<stdio.h>

/**
 * main - Print number from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ten;
int one;
for (ten = 0; ten <= 9; ten++)
{
for (one = 0; one <= 9; one)
{
putchar(ten + '0');
putchar(one + '0');
if (!(ten == 9 && one == 9))
{
putchar(',');
putchar(' ');
}
}
}putchar('\n');
return (0);
}
