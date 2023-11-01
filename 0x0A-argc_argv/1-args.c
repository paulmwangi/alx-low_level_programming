#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
    /* argc is the count of command-line arguments (including the program name). */
    
    /* Print the number of arguments (excluding the program name). */
    printf("%d\n", argc - 1);

    return 0; /* Return 0 to indicate a successful execution. */
}
