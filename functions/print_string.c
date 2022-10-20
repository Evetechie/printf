#include "main.h"

/**
 * print_string - prints string
 * @count: no. of chars
 *
 * return: count of chars in string
 */
int print_string(char *string)
{
	int count = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i]);
	}

	return (count);
}
