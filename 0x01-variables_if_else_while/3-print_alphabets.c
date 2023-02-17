#include <stdio.h>
/**
 * main - Entry point
 *
 * code prints small letters of the alphabet and then capital letters with a new line
 *
 * return always 0 (success)
 */
int main() {
	char c;
	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
	
	putchar(c);
	putchar('\n');
	return 0;
}
