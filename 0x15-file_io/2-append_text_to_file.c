#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file.
 *@filename: filename
 *@text_content: NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, _strlen(text_content));
	return (1);
}

/**
*_strlen - returns the length of a string
*@s: pointer
*Return: 0
*/

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	c++;
	return (c);
	return (0);
}
