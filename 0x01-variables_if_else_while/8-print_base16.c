#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 Success
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	for (number = 'a'; number < 'g'; number++)
		putchar(number);

	putchar('\n');

	return (0);
}
