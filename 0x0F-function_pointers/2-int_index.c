#include <stdio.h>

/**
  * int_index - Find integer.
  * @array: Array.
  * @size: Size of array.
  * @cmp: Function.
  * Return: -1 or indices.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}


	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
