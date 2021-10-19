#include "main.h"

/**
*_strstr - function that locates a substring
*@needle: finds the first occurrence of the substring
*@haystack: int this string
*Return:  a pointer to the beginning of the located substring
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
