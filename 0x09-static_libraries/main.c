#include "main.h"
#include <stdio.h>

int main(void)
{
    int result;

    // Example usage of functions from the static library
    result = _isupper('A');
    if (result)
        printf("A is an uppercase character\n");
    else
        printf("A is not an uppercase character\n");

    result = _isdigit('7');
    if (result)
        printf("7 is a digit\n");
    else
        printf("7 is not a digit\n");

    char str[] = "Hello, World!";
    int length = _strlen(str);
    printf("Length of the string: %d\n", length);

    // You can call other functions from the static library here

    return (0);
}
