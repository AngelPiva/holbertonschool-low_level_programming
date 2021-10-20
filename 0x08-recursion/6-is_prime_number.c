#include "main.h"

/**
*_aux_prime - auxiliar
*@n: number
*@i: integrer
*Return: aux i + 1
*/

int _aux_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (_aux_prime(n, i + 1));
}

/**
*is_prime_number - returns 1 if the input integer is a prime number
*@n: number
*Return: prime number
*/

int is_prime_number(int n)
{
	return (_aux_prime(n, 1));
}
