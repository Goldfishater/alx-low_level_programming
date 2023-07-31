#include "main.h"
/**
 * _strspn - The entry point
 * @p: input
 * @take: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *p, char *take)
{
	unsigned int n = 0;
	int r;

	while (*p)
	{
		for (r = 0; take[r]; r++)
		{
			if (*p == take[r])
			{
				n++;
				break;
			}
			else if (take[r + 1] == '\0')
				return (n);
		}
		p++;
	}
	return (n);
}
