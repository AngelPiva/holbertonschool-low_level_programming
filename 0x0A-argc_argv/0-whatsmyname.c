#include <stdio.h>

/**
*main - prints the number of arguments passed into it
*@argc: argument count
*@argv: argument value
*Return: 0
*/

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);
	return (0);
}
