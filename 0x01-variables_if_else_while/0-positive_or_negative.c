#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - take the random number it is greater than,
 * lesser than or equal to zero
 *
 * 0 - zero
 *
 * Return:Always (0) success
 */
int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 if (n > 0)
		 printf("%d is positive\n",n);
	 else  if (n < 0)
		 printf("%d is negative\n",n);
	 else 
		 printf("%d is zero\n",n);
	 return (0);}
