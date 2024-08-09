/**
 * set_bit - this sets the bit at a given index
 * @n: number to set bits for
 * @index: index to set bit at
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	/* ensure that the index is between 0 and 63 */
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1); /* the returned index is out of range */
	}

	*n |= mask;

	return (1);
}
