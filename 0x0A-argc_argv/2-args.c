#include <stdio.h>

/**
  * main - Prints name of passed arguments.
  * @argc: Number of passed  parameters.
  * @argv: Values passed.
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
