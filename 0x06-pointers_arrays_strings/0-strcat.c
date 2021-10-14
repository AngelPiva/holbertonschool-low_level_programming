#include "main.h"

/**
*
*
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
