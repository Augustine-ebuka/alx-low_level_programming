#include "main.h"

/**
 * is_prime_number -  function that returns 1 if the input integer is a prime
 *  number, otherwise return 0.
 *  @n: the number to check
 *
 *  Return: true or false
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
	 	return (0);	
	}
	if (n % n == 0 && n % 1 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (is_prime_number(n-1));
}
