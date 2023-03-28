#include "main.h"

/**
 * swap_int - swaps the values of tow integers
 *              using two in put parameters
 *
 *@a: input parameter 1
 *@b: input parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
