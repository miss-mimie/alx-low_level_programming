#include <stdio.h>

/**
 * main - Entry point
 *
 * This prints all base 10 digits with only putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
