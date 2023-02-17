#include <stdio.h>

/**
 * main -Entry point
 *
 * prints all possible combination of single numbers
 * Return: Always 0.
 */

int main(void) 
{
	int n;
	int i;

	for (n = 9; n >= 0; n--)
	{
	for (i = 0; i <= n; i++)
	{
	putchar(i + '0');
	if (i < n)
	{
	putchar(',');
	putchar(' ');
		}
	}
	putchar('\n');
	}
	return 0;
}
