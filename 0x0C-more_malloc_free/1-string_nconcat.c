#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, limiting the length of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the allocated memory. If malloc fails, exit with status 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1 = (s1 ? strlen(s1) : 0);
	unsigned int ls2 = (s2 ? strlen(s2) : 0);
	unsigned int lsout = ls1 + ((n < ls2) ? n : ls2);
	char *sout = malloc(lsout + 1);

	if (sout == NULL)
		exit(98);

	strcpy(sout, (s1 ? s1 : ""));
	strncat(sout, (s2 ? s2 : ""), n);

	return sout;
}
