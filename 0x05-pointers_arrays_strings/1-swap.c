#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * in the allocated memory using pointers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
