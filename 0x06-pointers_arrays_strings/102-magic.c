#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    int a[5];
    int *p;

    a[2] = 98;
    p = a;

    printf("a[2] = %d\n", *(p + 2));

    return (0);
}
