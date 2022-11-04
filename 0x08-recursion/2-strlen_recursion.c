#include "main.h"

/**
 *  _strlen_recursion - a function thst returnsnthe length of a strng
 *  @s: a pointer to a strng variable
 *
 *  Return: the legnth of s
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
