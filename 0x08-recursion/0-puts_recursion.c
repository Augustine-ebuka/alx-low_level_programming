#include "main.h"

/**
 * _puts_recursion -  function tha print character
 * @s: the character to be returned
 *
 * Return: the string given to it
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
