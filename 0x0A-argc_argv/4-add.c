#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Prints sum to accumulated.
  * @argc: The number of passed parameters.
  * @argv: The values passed.
  * Return: 0 or 1
  */
int main(int argc, char *argv[])
{
	int i, count = 0, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		count += atoi(argv[i]);
	}
	printf("%d\n", count);
	return (count);
}
