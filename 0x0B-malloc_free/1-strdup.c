#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string.
 *
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 * or memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	duplicate = (char *)malloc(len * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
