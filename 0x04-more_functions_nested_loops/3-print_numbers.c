#include "main.h"
#include <stdio.h>

/**
 * print_numbers- Entry point
 * Description: prints numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
