#include "main.h"
#include <stdio.h>
/**
 * print_rev - print reverse
 * @s: input string
 *
 * Description:  prints a string, in reverse
 * Return: Always (0)
 */

void print_rev(char *s) {
    int length = 0;
    char *temp = s;
    while (*temp != '\0') {
        length++;
        temp++;
    }
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
}
