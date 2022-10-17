#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is greater than %d", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d and is %d", n);
	}
	else if (n < 6)
	{
		printf("Last digit of %d and is less than %d and not 0\n", n);
	}
}
