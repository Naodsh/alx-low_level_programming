#include "main.h"

/**
 *print_number - Prints an integer to the standard output.
 *@n: The integer to be printed.
 *
 *This function takes an integer as input and prints it to the standard output.
 */
void print_number(int n)
{
	int divisor;
	int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	divisor = 1;
	num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (n != 0)
	{
		divisor *= 10;
		n /= 10;
	}

	while (divisor > 1)
	{
		divisor /= 10;
		_putchar('0' + num / divisor);
		num %= divisor;
	}
}
