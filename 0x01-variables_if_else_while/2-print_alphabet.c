#include <stdio.h>


/**
 * main - Entry point.
 *
 * This function prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);
}
