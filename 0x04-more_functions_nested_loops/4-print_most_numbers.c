#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */
<<<<<<< HEAD
void print_most_numbers()
=======
void print_most_numbers(void)
>>>>>>> 2cb33a02a8e0d62b1c234d3592d05df55487add6
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
