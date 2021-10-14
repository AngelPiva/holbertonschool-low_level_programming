#include "main.h"

/**
**_strcat - function that concatenates two strings
*@dest: string 1
*@src: string 2
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int l, s = 0;

	while (dest[s])
		s++;
	for (l = 0; src[l] != '\0'; l++)
	{
		dest[s] = (src[l]);
		s++;
	}
	return (dest);
}
