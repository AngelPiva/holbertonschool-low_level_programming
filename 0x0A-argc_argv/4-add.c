#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - program that adds positive numbers
*@argc: argument count
*@argv: argument value
*Return: 0
*/

int main(int argc, char *argv[])
{
	int b, suma = 0;
	unsigned int c;
	char *a;

	if (argc > 1)
	{
		for (b = 1; b < argc; b++)
		{
			a = argv[b];
			for (c = 0; c < strlen(a); c++)
			{
			if (a[c] < 48 || a[c] > 57)
			{
				printf("Error\n");
				return (1);
			}
			}
			suma = suma + atoi(argv[b]);
		}
		printf("%d\n", suma);
	}
	else
		printf("0\n");
	return (0);
}
