#include "main.h"
#include <stdio.h>

/**
 *_islower - checks for a lowercase character
 *@c: letter being tested
 * Return: Always 0
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
