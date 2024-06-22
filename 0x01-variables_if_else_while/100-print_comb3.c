#include <stdio.h>

/**
 * main - Entry point
 *
 * This prints all possible combinations of digits with caveats
 * The numbers must be separated by a , then followed by a space
 * This prints only the smallest combination of two digits
 * The Numbers should be printed in ascending order
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /*singles*/
		k = i / 10; /*doubles*/

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}

	putchar('\n');

	return (0);
}
