#include <stdio.h>

/**
*main - program that prints all arguments it receives
*@argc: argument count
*@argv: argument value
*Return: 0
*/

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
