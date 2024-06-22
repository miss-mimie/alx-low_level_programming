#include <stdio.h>

/**
 * main - Entry point
 *
 * This prints the lowercase alphabets in reverse
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
