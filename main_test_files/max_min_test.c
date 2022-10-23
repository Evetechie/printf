#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int max;
	int min;

	min -= -2147483648;
	max -= -2147483648;

	_printf("%d, %d\n", INT_MAX, INT_MIN);
	_printf("%i, %i\n", INT_MAX, INT_MIN);
	return (0);
}
