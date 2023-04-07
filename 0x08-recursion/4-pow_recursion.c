#include "main.h"

/**
  * _pow_recursion - Determine power between two numbers.
  * @x: Base as integer.
  * @y: Power integer.
  * Return: Result.
  */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}i
