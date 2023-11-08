#include "3-calc.h"

/**
 * main - this performs basic arithmetics and prints the result
 * @argc: this is the number of arguements received on the command line
 * @argv: this is the arguments received on the command line.
 * It must follow this syntex <operand1> <operator> <operand2>
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;
	int (*operation)(int, int);

	/* check whether the right number of arguments are given */
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	/* get the right function to perform arithmetic */
	operation = get_op_func(op);

	/* check for invalid operator */
	if (operation == NULL)
	{
		puts("Error");
		exit(99);
	}

	/* compute result of operation */
	result = operation(a, b);
	printf("%d\n", result);

	return (0);
}
