#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - main function that print the name of the file
 * @argc: this keep track of the number of argument
 * @argv: this is a vector to the arguments
 *
 * Return: this return the name of the file
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
