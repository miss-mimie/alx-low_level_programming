#include <stdio.h>
#include "main.h"

/**
 * main - this prints the number of arguments passed to the program
 * @argc: this is the number of arguments
 * @argv: this is the array of arguements
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
