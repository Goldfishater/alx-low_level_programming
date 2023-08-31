nclude "main.h"

/**
<<<<<<< HEAD
 *  * binary_to_uint - this func converts a binary number to unsigned int
 *   * @b: the string with the binary number
 *    *
 *     * Return: returns the converted number
 *      */
=======
 * binary_to_uint - this function must conv a binary number to unsigned int
 * @b: this is the string with the binary number
 *
 * Return: returns the converted No.
 */
>>>>>>> 44269f1762146c1eea1e4da4bed69759e04bd901
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
