#include <stdio.h>
/**
* main - Prints number of arguments
* @argc: Number of arguments
* @argv: arguments
* Return: 0
*/

int main(int argc, char **argv)
{
	if (*argv)
	printf("%d\n", argc - 1);
	return (0);
}
