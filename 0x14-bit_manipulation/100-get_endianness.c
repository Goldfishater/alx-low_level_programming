#include "main.h"

/**
 * get_endianness - function to checks if a machine is small or big
 * Return: retrns 0 if  big, 1 otherwise
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
