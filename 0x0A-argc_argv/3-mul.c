#include <stdio.h>
#include <stdlib.h>
/**
* main - Multiplies two arguments
* @argc: Number of arguments
* @argv: arguments
* Return: 1 if not 2 arguments
*/

int main(int argc, char **argv)
{
	if (argc == 3)
	{
	int result;

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
	}
	printf("Error\n");
	return (1);
}
