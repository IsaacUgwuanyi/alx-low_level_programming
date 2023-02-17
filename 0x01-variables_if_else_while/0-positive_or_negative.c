#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the main function generates random numbers
 * the if statement checks if the number is positive, zero or negative
 * and outputs the corresponding string values (positive, zero, negative)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
