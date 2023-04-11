#include <stdio.h>

/**
  * main - Prints its name.
  * @argc: Number of passed parameters.
  * @argv: Passed values.
  * Return: Always 0.
  */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
