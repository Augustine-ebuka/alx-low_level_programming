#include "main.h"

/**
 * _memcpy - -function that copy byte into dest
 * @dest: byte is copied int dest
 * @src: byte is copied from src
 * @n: number byte to be copied
 *
 * Return: return a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
