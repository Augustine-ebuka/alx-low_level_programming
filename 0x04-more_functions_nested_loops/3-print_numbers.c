#include "main.h"

/**
 *  print_numbers: if a function that prints
 *  numbers 1 to 9
 *  _putchar: prints the result
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
