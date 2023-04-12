#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - determines length of a string.
 * @s: String.
 * Return: The lenght, integer.
 */
int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i])
	{
		count++;
		i++;
	}

	return (count);
}

/**
 * str_concat - Concatinates two strings.
 * @s1: String.
 * @s2: String.
 * Return: Strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int i, j;
	int count1, count2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	count1 = _strlen(s1);
	count2 = _strlen(s2);

	tmp = malloc((sizeof(char) * count1) + (sizeof(char) * count2) + 1);

	if (tmp != NULL)
	{
		for (i = 0; i < count1; i++)
		{
			tmp[i] = s1[i];
		}
		for (j = 0; j < count2; j++)
		{
			tmp[i] = s2[j];
			i++;
		}
		tmp[i + 1] = '\0';
		return (tmp);
	}
	else
	{
		return (NULL);
	}
}
