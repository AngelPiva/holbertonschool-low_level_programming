#include "main.h"
int _strlen(char *s);

/**
*string_toupper -  changes all lowercase letters of a string to uppercase
*@str: string
*Return: str
*/

char *string_toupper(char *str)
{

	int c = 0;
	int e;

	while (str[c] != '\0')
	c++;

	for (e = 0; e < c; e++)
	{
		if (str[e] >= 97 && str[e] <= 122)
			str[e] = str[e] - 32;
	}
	return (str);
}
