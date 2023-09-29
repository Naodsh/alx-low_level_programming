#include "main.h"

/**
 * print_most_numbers - print numbers expect 2 & 4
 * @digit local var
 * return void
 */
void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit == '2' || digit == '4')
			continue;
		_putchar(digit);
	}

	_putchar('\n');
}
