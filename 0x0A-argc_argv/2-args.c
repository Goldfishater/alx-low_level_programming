#include <stdio.h>
#include "main.h"

/**
 * main - Function that Prints all the arguments received.
 * @argc: Number of arguments.
 * @argv: The Array of arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
