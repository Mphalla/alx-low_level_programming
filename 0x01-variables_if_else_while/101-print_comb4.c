#include<stdio.h>
/**
 * main -  prints all possible different combinations of three digits
 * three digits must be different 012, 120, 102
 * Return: Always 0 (Success)
 */
int main(void)
{
int left;
int right;
int center;
for (left = 48; left <= 57; left++)
{
for (center = left + 1; center <= 57; center++)
{
for (right = center + 1; right <= 57; right++)
{
putchar(left);
putchar(center);
putchar(right);
if ((left == 55) && (center == left + 1) && (right == center + 1))
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
