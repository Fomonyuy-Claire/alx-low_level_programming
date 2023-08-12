#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main – checks if a number is negative, positive or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
             {
		printf("The %d is positive\n", n);
               }
	else if (n == 0)
             {
		printf("The %d is zero\n", n);
                }
	Else
               {
		printf("The %d is negative\n", n);
                 }

	return (0);
}
