#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: the size that the array is going to be
 *  @c: char to initialize the array c
 *
 *  Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(*p) * size);
	if (p == NULL)
		return (0);

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	p[i] = '\0';

	return (p);

}
