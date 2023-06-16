#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - Entry point of the program
 *
 * This program prints the message "and that piece of art is useful" - Dora Korpar, 2015-10-19,"
 * followed by a new line, to the standard error using the write function. It demonstrates how
 * to write output directly to the standard error without using printf or puts functions.
 *
 * Return: Always 1 (indicating failure)
 */
int main(void)
{
    int fd;
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(message);

    fd = open("/dev/stderr", O_WRONLY);
    if (fd == -1)
        return 1;

    if (write(fd, message, len) != len)
        return 1;

    close(fd);
    return 1;
}
