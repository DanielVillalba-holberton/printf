#include "holberton.h"
/**
 * print_char - print char with write
 * @arguments: char to be print
 *
 * Return: one
 */
int print_char(va_list arguments)
{
	int c;

	c = va_arg(arguments, int);
	if (c >= INT_MAX || c <= 0)
	{
		return (0);
	}
	_putchar(c);
	return (1);
}
/**
 * print_str - print string with write
 * @arguments: char to be print
 *
 * Return: number of chars printed
 */
int print_str(va_list arguments)
{
	int i;
	char *string = va_arg(arguments, char *);

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (i);
}
