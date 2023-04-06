#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - printing string in recursition
 * @s: string to be displayed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
