#include "main.h"

/**
 * print_number - print number
 * @n: input value
 *
 * Description:  prints an integer
 * Return: Always (0)
 */
#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n / 10) {
        print_number(n / 10);
    }

    _putchar((n % 10) + '0');
}
