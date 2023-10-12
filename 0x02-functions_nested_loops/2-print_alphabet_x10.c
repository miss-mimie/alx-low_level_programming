#include "main.h"
/**
 * print_alphabet_x10 - a function to print lowercase alphabets 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char x;
	int numb_row;

	for (numb_row = 0; numb_row < 10; numb_row++)
		for (x = 'a' ; x <= 'z' ; x++)
			_putchar(x);
	_putchar('\n');
}


