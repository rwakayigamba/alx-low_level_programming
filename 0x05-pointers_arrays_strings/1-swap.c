#include "main.h"
/**
 * swap_int - swapping two variables
 * @a: first value
 * @b: second value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
