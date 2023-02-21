#include "main.h"

/**
 * main - Entry point ,this prints alphabets in
 * lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++);
		_putchar(alpha);

		_putchar('\n');
	}
