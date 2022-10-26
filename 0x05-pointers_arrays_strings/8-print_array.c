#include <stdio.h>

/**
 * print_array - prints n elements of
 * an array of integers, followed by a new line.
 * @a: this is the array variable
 * @n: this is the legth of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d ,", a[i]);
	}
}

