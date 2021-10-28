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
	unsigned int a, d, e;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	c = malloc((n + a) * sizeof(char));
	if (c == 0)
		return (NULL);
	for (d = 0; s1[d] != 0; d++)
	{
		c[d] = s1[d];
	}
	for (e = 0; e <= n; e++)
	{
		c[d] = s2[e];
		d++;
	}
	return (c);
}
