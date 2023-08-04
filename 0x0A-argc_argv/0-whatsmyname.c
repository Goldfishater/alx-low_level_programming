#include <stdio.h>
#include "main.h"

/**
 * main - Function Printing name of the program.
 * @argc: The number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
