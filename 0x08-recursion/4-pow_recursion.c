#include "main.h"

/**
 * _pow_recursion -  f(n) that returns the value of x raised to the power of y
 * @x: a number to be raised to the power of y
 * @y: a power of x
 *
 * Return: return the result of x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
