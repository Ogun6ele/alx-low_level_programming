#include "main.h"

/**
 * _puts_recursion - prints a string, then a new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursiom(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
