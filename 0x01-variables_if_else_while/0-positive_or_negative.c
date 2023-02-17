#include <stdlib.h> 
#include <time.h> 
/**
 * more headers goes there
 * main - the main function generates random numbers
 * the if statement checks if the number is positive,z
 * ero or negative and outputs the corresponding stri
 * ng values (positive, zero, negative 
 */ 
/* betty style doc for function main goes there
 * main function opening braces is below function on a
 * new line
 */ 
 int main(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
         /* your code goes there */ 
if (n>0)
{
printf("%d: is positive\n",n);
} 
       else if  (n==0)
{
printf("%d: is zero\n",n);
} else 
{
printf("%d: is negative\n",n);
}
 return (0); 
}
