#include "main.h"

/**
*
*
*/

char *_strstr(char *haystack, char *needle)
{
	int n, h;

	for (n = 0; haystack[n] != '\0'; n++)
	{
		for (h = 0; needle[h] != '\0'; h++)
		{
			if (haystack[n + h] != needle[h])
				break;
		}
		if (needle[h] == '\0')
			return (haystack + n);
	}
	return (0);
}
