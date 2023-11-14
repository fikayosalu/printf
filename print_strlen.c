#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: Parameter of the function that represents a string pointer
 *
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlenc - Its like the _strlen function but it applies to constant
 * char pointer str
 * @str: char pointer
 *
 * Return: i
 */

int_strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
