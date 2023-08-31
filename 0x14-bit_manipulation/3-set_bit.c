#include "main.h"

/**
 * set_bit - func that must set a bit at a given indx to 1
 * @n: the pointer to the No. to be changed
 * @index: the index of the bit to be set to 1
 *
 * Return: returns1 if successful, but if failed -1 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
