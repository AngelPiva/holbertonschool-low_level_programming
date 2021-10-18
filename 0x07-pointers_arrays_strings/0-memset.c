#include "main.h"

/**
*_memset -  function that fills memory with a constant byte
*@s: memory area pointed
@b: constant byte
@ n:bytes of the memory area pointed
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	return (s);
}
