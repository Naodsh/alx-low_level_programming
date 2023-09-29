#include "main.h"
#include <string.h>

/**
 * puts_half - check the code
 * @str: pointer to char
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int i;
	int half;

	len = strlen(str);
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len + 1) / 2;
	}

	for (i = half; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
