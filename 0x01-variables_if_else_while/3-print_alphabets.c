<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point.
 *
 * This function prints the alphabet in lowercase, followed by the alphabet in uppercase,
 * and ends with a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
char a = 'a';
char b = 'A';

while (a <= 'z')
{
putchar(a);
a++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');

return (0);
}
=======
#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
char a = 'a';
char b = 'A';

while (a <= 'z')
{
putchar(a);
a++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');

return (0);
}
>>>>>>> fb2842b58dfa824d56cb4b4f32755e663adb73ee
