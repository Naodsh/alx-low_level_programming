#include "main.h"

/**
 * print_numbers: - print numbers
 * @digit local var
 * return void
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}

	_putchar('\n');
}
