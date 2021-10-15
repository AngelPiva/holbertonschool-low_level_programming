#include "main.h"

/**
*_strncpy - function that copies a string.
*@dest: string where it is copied
*@src: string to copy
*@n: bytes of src are copied
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	for ( ; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
