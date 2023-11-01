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
    /* argv is an array of strings containing the command-line arguments. */
    
    /* You can access individual arguments using argv[index], where index starts from 0. */
    /* argv[0] is the program name itself. */

    /* Example: Print the program name (argv[0]) */
    printf("Program name: %s\n", argv[0]);

    /* To avoid "unused parameter" warnings, you can use __attribute__((unused)) or (void). */
    /* In this case, argc is unused, so we'll use __attribute__((unused)). */
    /* Alternatively, you can use (void)argc. */

    __attribute__((unused)) argc; /* Suppress unused parameter warning */

    /* Now, you can write the main logic of your program. */

    return 0; /* Return 0 to indicate a successful execution. */
}
