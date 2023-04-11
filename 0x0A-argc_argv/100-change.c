#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints minimum number of money to be changed.
  * @argc: The number of parameters passed.
  * @argv: The values passed.
  * Return: The minimum number of money to be changed.
  */
int main(int argc, char *argv[])
{
	int num, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("%d\n", count);
		return (0);
	}

	count += num / 25;
	num = num % 25;
	count += num / 10;
	num = num % 10;
	count += num / 5;
	num = num % 5;
	count += num / 2;
	num = num % 2;
	count += num;

	printf("%d\n", count);
	return (0);
}
