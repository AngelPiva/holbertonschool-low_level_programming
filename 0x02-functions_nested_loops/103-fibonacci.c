#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum = 0, sum_mult = 2;
	int n, c;

	for (n = 0; n < 32; n++)
	{
		if (sum % 2 == 0)
		{
			sum_mult += sum;
		}
		sum = 0;
		sum = a + b;
		c = a;
		a = b;
		b = c + b;
	}
	printf("%lu\n", sum_mult);
	return (0);
}
