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

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (n = 0; s1[n] != 0; n++)
	{
	}
	for (a = 0; s2[a] != 0; a++)
	{
	}
	a += 1;
	x = malloc((a + n) * sizeof(char));
	if (x == NULL)
		return (0);
	for (b = 0; s1[b] != 0; b++)
	{
		x[b] = s1[c];
		c++;
	}
	for (d = 0; s2[d] != 0; d++)
	{
		x[c] = s2[d];
		c++;
	}
	return (x);
}
