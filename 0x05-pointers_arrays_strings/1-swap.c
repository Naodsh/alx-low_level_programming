#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: first int
 * @b: second int
 *
 * Return: void nothing to return
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
