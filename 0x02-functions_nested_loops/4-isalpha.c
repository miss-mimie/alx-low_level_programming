#include "main.h"
/**
 * _isalpha - a function to print lowercase alphabets
 * @c: input of the function _isalpha
 * Return: 0
 */

int _isapha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
