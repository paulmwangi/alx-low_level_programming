<<<<<<< HEAD
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(STDERR_FILENO, message, strlen(message));
    return (1);
}
=======
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(STDERR_FILENO, message, strlen(message));
return (1);
}
>>>>>>> 4f09570630609971993a27e03ddd5b1652d73181
