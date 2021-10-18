#include "main.h"

/**
*
*
*/

unsigned int _strspn(char *s, char *accept)
{
	int c, d;
	int cont = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
		if (s[c] == accept[d])
			cont++;
		}
		if (s[c] == ' ')
			break;
	}
	return(cont);
}
