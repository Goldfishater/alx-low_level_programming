
#include "main.h"
/**
 * _memset - This fills a block of memory with a specific value
 * @s: Initial address of memory to be filled
 * @b: the wanted value
 * @n: Number of bytes to be changed
 *
 * Return: the array that has been changed with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
