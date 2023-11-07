#include <stdio.h>

/**
 * main - this prints CLI arguments, this includes the program name
 * @argc: this is the CLI args counter
 * @argv: this is the args which can be zero of a variable length
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		puts(argv[i]);

	return (0);
}
