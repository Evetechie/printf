#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	int count = 0, i;

	va_list args;
	va_start(args, format);

	/* _printf("%s", 'Hello') */

	for (i = 0; format[i] != '\0'; )
	{

	/* count the number of characters */
	/* print to the screen each character counted */
	if (format[i] != '%')
	{
	count += _putchar(format[i]);
	i++;
	}
	else if (format[i] == '%' && format[i + 1] != ' ')
	{
	switch (format[i + 1])
	{
	case 'c':
		/* print the character from the va_arguments */
		count += _putchar(va_arg(args, int));
		break;
	case 's':
		count += print_string(va_arg(args, char *));
		break;
	case '%':
		count += _putchar('%');
		break;
	case 'd':
		count += print_decimal(va_arg(args, int));
		break;
	case 'i':
		count += print_decimal(va_arg(args, int));
		break;
	case 'b':
		count += print_binary(va_arg(args, int));
		break;
	case 'u':
		count += print_unsigned(va_arg(args, unsigned int));
		break;
	default;
		break;
	}
	i += 2;
	}


	}

	return (count);
}
