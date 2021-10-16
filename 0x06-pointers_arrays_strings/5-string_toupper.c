#include "main.h"
int _strlen(char *s);

/**
*
*
*
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
