#include "main.h"
/**
 * _strpbrk - Entry point
 * @q: input
 * @take: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *q, char *take)
{
		int h;

		while (*q)
		{
			for (h = 0; take[h]; h++)
			{
			if (*q == take[h])
			return (q);
			}
		q++;
		}

	return ('\0');
}
