#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints product of two numbers
 * @argc: Number of passed parameters
 * @argv: The passed values
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
}
