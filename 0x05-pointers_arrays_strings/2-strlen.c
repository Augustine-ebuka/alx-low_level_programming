#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s : is a pointer to the character
 *
 * Return : the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
