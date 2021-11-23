#include "main.h"
#include <stdio.h>

/**
 *main - main
 *@ac: argument count
 *@av: argument value
 *Return: 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}

/**
 *cp_file - function that copies the content of a file to another file
 *@from: file copied
 *@to: file where it is copied
 *Return: 1 on succesfully
 */

int cp_file(char *from, char *to)
{
	int op_fr, op_to, r;
	char buf[1024];

	if (from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	op_fr = open(from, O_RDONLY);
	if (op_fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	op_to = open(to, O_RDWR | O_CREAT | O_TRUNC, 0664);

	r = read(op_fr, buf, 1024);
	r = write(op_to, buf, r);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", to);
		exit(99);
	}
	close(op_fr);
	close(op_to);
	return (0);
}
