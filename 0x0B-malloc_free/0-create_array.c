#include <stdlib.h>
#include "main.h"

/**
*create_array - creates an array of chars and initializes it with a specific ch
*@size: size of array
*@c: char
*Return: 0
*/

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int a;

	if (size == 0)
		return (NULL);
	n = malloc(size * sizeof(char));
	for (a = 0; a < size; a++)
		n[a] = c;
	if (n == 0)
		return (NULL);
	else
		return (n);
}
