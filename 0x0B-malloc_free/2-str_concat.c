#include <stdlib.h>

/**
*str_concat - function that concatenates two strings
*@s1: string 1
*@s2: string 2
*Return: 0
*/

char *str_concat(char *s1, char *s2)
{
	int n, a, b, c = 0, d = 0;
	char *x;

	for (n = 0; s1[n] != 0; n++)
	{
	}
	for (a = 0; s2[a] != 0; a++)
	{
	}
	x = malloc((a + n) * sizeof(char));
	for (b = 0; s1[b] != 0; b++)
	{
		x[b] = s1[c];
		c++;
	}
	for (d = 0; s2[d]; d++)
	{
		x[c] = s2[d];
		c++;
	}
	if (x == NULL)
		return (0);
	return (x);
}
