#include <stdio.h>
#include "main.h"
/**
* main - Prints name of its file
* @argc: Counts the command line arguments
* @argv: Stores the command line arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	printf("%s\n", argv[0]);
	return (0);
}
