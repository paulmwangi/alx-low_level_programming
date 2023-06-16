<<<<<<< HEAD
#include <stdio.h>

/**
 * main - main - two pairs of numbers that do not repeat
 *
 * Return (0)
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
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(' ');
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
			}
			if (j * 100 + i != 9899)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
=======
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
>>>>>>> d234cbaa425f742c80d6c539e82cf12122b0955c
