#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatinates the areguments.
 * @ac: Number of arguments.
 * @av: Arguments.
 * Return: String.
 */

char *argstostr(int ac, char **av)
{
	int i, j, count = 0;
	char *tmp;
	char *tmp1;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			count++;
		}
		count++;
	}
	count += 1;

	tmp = malloc(sizeof(char) * count);
	tmp1 = tmp;

	if (tmp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			*tmp = av[i][j];
			tmp++;
		}
		*tmp = '\n';
		tmp++;
	}

	return (tmp1);
}
