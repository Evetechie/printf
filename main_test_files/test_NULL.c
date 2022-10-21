#include <stdio.h>
#include "holberton.h"

/**
 * main - test for NULL string
 *
 * Return: Always 0
 */
int main(void)
{
	printf(NULL); /* Doesn't print anything but gives compilation warning */
	_printf(NULL);

	printf("Test: %s\n", NULL);
	_printf("Test: %s\n", NULL);

	printf("%s\n", NULL); /* seg fault */
	_printf("%s\n", NULL);
	return (0);
}
