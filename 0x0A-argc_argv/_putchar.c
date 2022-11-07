#include "main.h"

/**
 * _putchar: function that print char
 * @c: the char to be be printed
 *
 * Return: return 0
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}
