#include "main.h"

/**
*leet - encodes a string into 1337
*@a: string
*Return: a
*/

char *leet(char *a)
{
	char letras[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char numeros[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int s = 0, n = 0;

	while (a[s])
	{
		n = 0;
		while (n < 10)
		{
			if (a[s] == letras[n])
				a[s] = numeros[n];
			n++;
		}
	s++;
	}
	return (a);
}
