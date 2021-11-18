#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, x = 1, c = 0;

	if (b == NULL)
		return (0);
	while (b[n])
		n++;
	while (n--)
	{
		if (b[n] == '1')
		{
			c = c + x;
			x = x * 2;
		}
		else if (b[n] == '0')
		{
			c = c;
			x = x * 2;
		}
		else
		{
			return (0);
		}
	}
	return (c);
}
