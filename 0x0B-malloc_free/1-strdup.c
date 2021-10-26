#include <stdlib.h>
#include "main.h"

/**
*_strdup - function that returns a pointer to a newly allocated space in memory
*@str: pointer
*Return: n
*/

char *_strdup(char *str)
{
	char *n;
	int a, c;

	if (str == NULL)
		return (NULL);
	for (c = 0; str[c] != 0; c++)
	{
	}
	if (c == 0)
		return (NULL);
	n = malloc(c * sizeof(char));
	if (n == NULL)
		return (NULL);
	for (a = 0; a < c; a++)
		n[a] = str[a];
	return (n);

}
