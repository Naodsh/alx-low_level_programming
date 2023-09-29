#include "main.h"
/**
 * _strstr - Locates a substring in a string.
 *
 * @haystack: Pointer to the main input string.
 * @needle: Pointer to the substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0') /* If the entire substring is matched */
			return (haystack);
		haystack++;
	}

	return (NULL); /* Substring not found */
}
