#include "main.h"

/**
 *print_alphabet -function that  Print a -z small latter
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
