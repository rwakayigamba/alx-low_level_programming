#include "main.h"

/**
 * function - Function.
 * @i: Counter.
 * @b: Cumber.
 * Return: Result in int
 */
int function(int i, int b)
{
	if (b < 2)
	{
		return (0);
	}

	if (i < b)
	{
		if (b % i == 0)
		{
			return (0);
		}
		else
		{
			return (function(i + 1, b));
		}
	}
	return (1);
}

/**
 * is_prime_number - Determine if is a prime number..
 * @n: Unknown integer number
 * Return: Integer result
 */
int is_prime_number(int n)
{
	return (function(2, n));
}
