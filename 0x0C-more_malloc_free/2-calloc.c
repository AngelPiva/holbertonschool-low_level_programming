#include <stdlib.h>

/**
*_calloc - allocates memory for an array, using malloc
*@nmemb: elements
*@size: of size bytes
*Return: ptr
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int n, x;

	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);
	x = nmemb * size;
	ptr = malloc(x);
	if (ptr == 0)
		return (NULL);
	for (n = 0; n < x; n++)
		ptr[n] = 0;
	return (ptr);
}
