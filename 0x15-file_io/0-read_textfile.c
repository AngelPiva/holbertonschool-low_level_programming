#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX stdout
 *@filename: filename
 *@letters: number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;
	char *buf = malloc((sizeof(char *)) * letters);

	if (letters <= 0)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
		return (0);
	r = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, r);
	free(buf);
	close(fd);
	return (r);
}
