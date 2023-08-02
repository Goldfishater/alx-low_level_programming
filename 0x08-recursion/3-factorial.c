#include "main.h"

/**
 * factorial - This will return the factorial of any number
 * @n: the number that  the factorial will  return from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
