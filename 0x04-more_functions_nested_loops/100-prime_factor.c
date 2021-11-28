#include <stdio.h>

/**
 *main - main
 *Return: 0
 */

int main(void)
{
	long int max_prime_factor = 0;
	long int run;
	long int primes = 2;
	long int max = 612852475143;

	for (run = primes; run <= 612852475143;)
	{
		if (max % primes == 0)
		{
			printf("%lu", primes);
			break;
		}
	}
	return (0);
}
