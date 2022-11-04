#include "main.c"

/**
 *  _strlen_recursion - a function thst returnsnthe length of a strng
 *  @s: a pointer to a strng variable
 *
 *  Return: the legnth of s
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		_putchar('\n');
		return(0);
	}
	return (i++);
	_strlen_recursion(s + 1);
}
