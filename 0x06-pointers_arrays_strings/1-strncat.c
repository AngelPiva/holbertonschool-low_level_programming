#include "main.h"

/**
**_strncat - function that concatenates two strings.
*dest: string 1
*src: string 2
*/

char *_strncat(char *dest, char *src, int n)
{
	int l, s = 0;

	while (dest[s])
		s++;
	for (l = 0; l < n && src[l] != '\0'; l++)
	{
		dest[s + l] = (src[l]);
	}
		dest[s + l] = '\0';	
	return (dest);
}
