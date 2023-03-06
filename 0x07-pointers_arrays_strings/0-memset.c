#include "main.h"

/**
 * _memset - fills memory with constant byte
 *
 * Return: s pointer
 */

char *_memset(char *s, char b, unsigned int n);
{
	char *s;
	char b;
	unsigned int n;
	unsigned int i;

	for (i = 0; i < n; i++)
	*(s + i) = b;

	return (s);
}
