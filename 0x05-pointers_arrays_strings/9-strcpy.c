#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination character array
 * @src: source character array
 *
 * Description: Copies the string pointed to by `src` to `dest`.
 * Return: Pointer to `dest`.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
