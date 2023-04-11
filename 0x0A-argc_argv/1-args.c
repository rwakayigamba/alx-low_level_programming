#include <stdio.h>

/**
  * main - Prints number of passed arguments.
  * @argc: Number of passed  parameters.
  * @argv: Passed values.
  * Return: Name.
  */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
