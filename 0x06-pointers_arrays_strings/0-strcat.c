#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: char pointer destinatio
 * @src: char pointer source
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';
	return (dest);

}
