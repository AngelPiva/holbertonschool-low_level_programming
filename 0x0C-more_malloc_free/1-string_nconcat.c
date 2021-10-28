#include <stdlib.h>

/**
*string_nconcat -  concatenates two strings
*@s1: string 1
*@s2: string 2
*@n: n bytes of s2
*Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a, b, d, v = 0, x = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n >= b)
		v = a + b;
	else
		v = a + n;

	c = malloc(v * sizeof(char));
	if (c == 0)
		return (NULL);
	for (d = 0; d <= v; d++)
	{
		if (d <= a)
			c[d] = s1[d];
		if (d >= a)
		{
			c[d] = s2[x];
			x++;
		}
	}
	return (c);
}
