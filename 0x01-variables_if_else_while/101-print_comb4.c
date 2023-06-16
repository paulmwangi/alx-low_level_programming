#include <stdio.h>

/**
 * main - Entry point, generates all possible combinations of 3 digits
 *        without repeating any digit.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
int i, j, k;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
if (i == j || j == k || i == k)
{
continue;
}
putchar(i);
putchar(j);
putchar(k);
if (i == 55 && j == 56 && k == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
}
