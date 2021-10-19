#include "main.h"

/**
*_strpbrk - function that searches a string for any of a set of bytes
*@s: the  function locates the first occurrence in the string s
*@accept: of any of the bytes in the string accept
*Return: s
*/

char *_strpbrk(char *s, char *accept)
{
	int c, d;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
		if (s[c] == accept[d])
		{
			return (&s[c]);
		}
		}
	}
	return (s);
}
