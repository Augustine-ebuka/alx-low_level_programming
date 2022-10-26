#include <stdio.h>

/**
 * *_strcpy - unction that copies the
 * string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: this is the var to be copied int
 * @src: this is the var to be copied from
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count, i;

	i = 0;

	count = 0;

	while (src[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
