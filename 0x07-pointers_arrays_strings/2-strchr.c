#include "main.h"

/**
*_strchr - function that locates a character in a string
*@s: string
*@c: character
*Return: p
*/

char *_strchr(char *s, char c)
{
	int d;
	char *p;

	for (d = 0; d < c || d < '\0'; d++)
	{
	if (s[d] == c)
	{
		p = &s[d];
		break;
	}
	else
		p = '\0';
	}
	return (p);
}
