#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));

    printf("Size of pointer to char: %zu byte(s)\n", sizeof(char*));
    printf("Size of pointer to int: %zu byte(s)\n", sizeof(int*));
    printf("Size of pointer to float: %zu byte(s)\n", sizeof(float*));
    printf("Size of pointer to double: %zu byte(s)\n", sizeof(double*));
    printf("Size of pointer to short: %zu byte(s)\n", sizeof(short*));
    printf("Size of pointer to long: %zu byte(s)\n", sizeof(long*));
    printf("Size of pointer to long long: %zu byte(s)\n", sizeof(long long*));

    return 0;
}
