#include "main.h"

/**
 * print_char - prints a char
 * @val: arguments of the  function
 *
 * Return: 1
 */

int print_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
