#include "main.h"
/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 *
 * @s: Pointer to the input string.
 * @c: The character to search for.
 *
 * Return: A pointer to the first occurrence of character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
