#include "main.h"

/**
 * print_rev_string - function  that prints a string in reverse
 * @args: arguments of the function
 *
 * Return: return the length of the string
 */

int print_rev_string(va_list args)
{

	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
