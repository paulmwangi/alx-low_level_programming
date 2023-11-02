#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _is_positive_number - Checks if a string represents a positive number.
 * @str: The string to check.
 *
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int _is_positive_number(char *str)
{
    if (str == NULL || *str == '\0')
        return 0;

    while (*str)
    {
        if (!isdigit(*str))
            return 0;
        str++;
    }

    return 1;
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: Number of arguments.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!_is_positive_number(argv[1]) || !_is_positive_number(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    unsigned long num1 = strtoul(argv[1], NULL, 10);
    unsigned long num2 = strtoul(argv[2], NULL, 10);

    printf("%lu\n", num1 * num2);
    return (0);
}
