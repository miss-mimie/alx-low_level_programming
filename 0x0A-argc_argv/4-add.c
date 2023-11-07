#include <stdio.h>
#include <stdlib.h>
#define isdigit(c) (c >= '0' && c <= '9')

/**
 * main - this prints the sum of positive integers
 * @argc: CLI args counter
 * @argv: Operands... this can receive more than operand
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (!(argc > 1)) /* no other arguements received, nothing to do */
		printf("%d\n", sum);
	else
	{
		for (i = 1; < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j])) /* handle non-digits */
				{
					puts("Error");
					return (1);
				}
			}
			sum += atoi(argv[i]); /* update sum */
		}
		printf("%d\n", sum);
	}

	return (0);
}
