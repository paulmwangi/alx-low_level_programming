#include <unistd.h>
#include <fcntl.h>
#include <sys/syscall.h>

/**
 * main - Entry point of the program
 *
 * This program prints the message "and that piece of art is useful" - Dora Korpar, 2015-10-19,"
 * followed by a new line, to the standard error using the write system call. It demonstrates how
 * to write output directly to the standard error without using printf or puts functions.
 *
 * Return: Always 1 (indicating failure)
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(message) - 1;

    if (syscall(SYS_write, STDERR_FILENO, message, len) != len)
        return 1;

    return 1;
}
