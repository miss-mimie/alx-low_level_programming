/**
 * get_bit -This returns the value of a bit at a given index
 * @n: number to check
 * @index: index
 *
 * Return: the value of the bit at @index in @n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	/* ensure that the index is between 0 and 63 */
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1); /* the returned index is out of range */
	}

	bit = (n & (1 << index)) ? 1 : 0;

	return (bit);
}
