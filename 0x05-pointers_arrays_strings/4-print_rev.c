#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 * @s: pointer to char
 * Return: void nothing.
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	_putchar(s[i]);
	_putchar('\n');
}
