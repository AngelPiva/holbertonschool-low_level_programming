#include "main.h"

/**
*
*
*/

int _strcmp(char *s1, char *s2)
{
	int r = 0, t = 0;

	while (s1[r] == s2[r] && s1[r] != '\0' && s2[r] != '\0')
		r++;
	if (s1[r] != s2[r])
		t= s1[r] - s2[r];
	return(t);
}
