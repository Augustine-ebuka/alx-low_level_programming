#include <stdio.h>

/**
 * factorial - the function return factorial
 * @n: num to find its factorial
 *
 * Return: return the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
