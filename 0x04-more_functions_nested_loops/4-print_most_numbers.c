#include "main.h"

/**
 *  main - check the code
 *
 *  Return: Always 0.
 */
int print_most_numbers()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			break;
		}
		_putchar(i + '0');
		continue;
	}
	_putchar('\n');
}
