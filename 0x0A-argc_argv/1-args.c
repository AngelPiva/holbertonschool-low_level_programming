#include <stdio.h>

/**
*main - program that prints the number of arguments passed into it
*@argc: argument count
*@argv: unused variable
*Return: 0
*/

int main(int argc, char *argv[]__attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
