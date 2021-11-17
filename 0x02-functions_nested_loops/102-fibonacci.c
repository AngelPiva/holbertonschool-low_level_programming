#include <stdio.h>

/**
 *main - main function
 *Return: 0
 */

int main(void)
{
	int n, s = 1, s2 = 2, b;
	long int sum = 0;

	printf("%d, %d, ", s, s2);
	for (n = 0; n < 50; n++)
	{
		sum = 0;
		sum = s + s2;
		printf("%lu", sum);
		if (n < 49)
		{
			printf(", ");
		}
		b = s;
		s = s2;
		s2 = b + s2;

	}
	printf("\n");
	return (0);
}
