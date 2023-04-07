#include "main.h"

/**
 * _print_rev_recursion - Print string by reversing.
 * @s: String.
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
