#include <stdio.h>
/**
 * main - Generates pairs of numbers that do not repeat.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
    int i, j;

    for (j = 0; j <= 99; j++)
    {
        for (i = j; i <= 99; i++)
        {
            if (i != j)
            {
                putchar(j / 10 + '0');
                putchar(j % 10 + '0');
                putchar(' ');
                putchar(i / 10 + '0');
                putchar(i % 10 + '0');
            }
            if (j * 100 + i != 9899)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');

    return 0;
}
