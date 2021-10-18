#include "main.h"

/**
*_memcpy - function that copies memory area
*@dest: memory area to copu
*@src: memory area where it is copied
*@n: number of bytes
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
