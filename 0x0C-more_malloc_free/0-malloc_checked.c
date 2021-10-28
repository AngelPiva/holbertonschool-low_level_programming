#include <stdlib.h>

/**
*
*
*
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (unsigned int *) malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
