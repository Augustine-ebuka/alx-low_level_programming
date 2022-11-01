#include "main.h"
/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: the bytes to be filled
 * @n: number of byte that will be filled
 *
 * Return: the value filled with the char
 */
char _memset(char *s, char b, unsigned size_t n)
{
	int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
}
