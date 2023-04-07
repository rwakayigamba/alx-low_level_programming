#include "main.h"

/**
 * factorial - Determine factorial of number.
 * @n: Integer number.
 * Return: Result.
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
