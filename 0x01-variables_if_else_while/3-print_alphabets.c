#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase then uppercase.
 *
 * Return:(0) Always Seccess.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
