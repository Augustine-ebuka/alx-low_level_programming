#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to find its sqr
 *
 * Return: the answer
 */
int _sqrt_recursion(int n)
{
	int x;

	x = 2 ^ (n / 2);

	if (n < 0)
	{
		return (-1);
	}
	return (n + (n / x) / 2);
}
