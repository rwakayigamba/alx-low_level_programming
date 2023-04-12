#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - Creates array according to size and character.
  * @size: Size of array.
  * @c: Character to initialized.
  * Return: Temporal array
  */
char *create_array(unsigned int size, char c)
{
	char *tmp;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(char) * size);
	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			tmp[i] = c;
		}

		return (tmp);
	}
}
