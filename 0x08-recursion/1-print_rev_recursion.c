#include "main.h"

/**
 * _print_rev_recursion - this function reverse string
 * @s: the string that would be reverserd
 *
 * Return: return the reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
