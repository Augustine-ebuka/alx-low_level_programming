#include "main.h"

/**
 * _putchar - is afunction that write to standard output
 * @c : is the character to be returned.
 *
 * Return: 1 on success
 * Return: -1 on error
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}
