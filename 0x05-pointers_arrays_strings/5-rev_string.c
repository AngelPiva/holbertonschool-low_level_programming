#include "main.h"

/**
*rev_string -  reverses a string
*@s: pointer
*/

void rev_string(char *s)
{
	int i;
	int cont = 0;
	char f = s[0];

	while (s[cont] != 0)
		cont++;
	for (i = 0; i < cont; i++)
	{
		cont--;
		f = s[i];
		s[i] = s[cont];
		s[cont] = f;
	}
}
