#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Adds natural numbers
* @argc: Number of arguments
* @argv: arguments
* Return: 1 if not 2 arguments
*/

int main(int argc, char **argv)
{
	int i, j, result, test;

	result = 0;
	if (argc == 1)
	printf("0\n");
	else
	{
	for (j = 1 ; argv[j] ; j++)
	{
	for (i = 0 ; argv[j][i] ; i++)
	{
		test = isdigit(argv[j][i]);
		if (test == 0)
		break;
	}
		if (test == 0)
		{
		printf("Error\n");
		return (1);
		}
		else
		result += atoi(argv[j]);
	}
		printf("%d\n", result);
	}
	return (0);
}
