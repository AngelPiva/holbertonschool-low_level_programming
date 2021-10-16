#include "main.h"

/**
*cap_string - function that capitalizes all words of a string
*@str: string
*Return: str
*/

char *cap_string(char *str)
{
	int c = 0;
	int e;

	while (str[c] != '\0')
	c++;

	for (e = 0; e < c; e++)
	{
		if (e == 0 && str[e] >= 97 && str[e] <= 122)
			str[e] = str[e] - 32;
		if (str[e] >= 97 && str[e] <= 122)
		{
			if (str[e - 1] == ' ' || str[e - 1] == '\t' ||
				str[e - 1] == '\n' || str[e - 1] == ',' ||
				str[e - 1] == ';' || str[e - 1] == '.' ||
				str[e - 1] == '!' || str[e - 1] == '?' ||
				str[e - 1] == '"' || str[e - 1] == '(' ||
				str[e - 1] == ')' || str[e - 1] == '{' ||
				str[e - 1] == '}')
				str[e] = str[e] - 32;
		}
	}
	return (str);
}
