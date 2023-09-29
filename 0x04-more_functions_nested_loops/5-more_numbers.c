#include "main.h"

/**
 * more_numbers - diplay the numbers 1 up 14 ten times in different lines
 * Return: void
 */
void more_numbers(void)
{
	int number, tens, ones, i;

	for (i = 1; i <= 10; i++)
	{
		for (number = 0; number <= 14; number++)
		{
			tens = number / 10;
			ones = number % 10;
			if (number > 9)
				_putchar(tens + '0');

			_putchar(ones + '0');
		}
		_putchar('\n');
	}
}
