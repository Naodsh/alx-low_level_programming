#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: Pointer to the input string.
 * @accept: Pointer to the string containing acceptable characters.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int match;
	char *a;

	while (*s != '\0')
	{
		match = 0;
		a = accept;
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				length++;
				match = 1;
				break;
			}
		}

		if (match == 0)
			break;

		s++;
	}

	return (length);
}
