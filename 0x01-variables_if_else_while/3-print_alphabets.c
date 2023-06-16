<<<<<<< HEAD
#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Always return(0)
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
 * main - Entry point.
 *
 * This function prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
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
>>>>>>> f888ca8106037a514535e10ed3e10ded0d97383e
