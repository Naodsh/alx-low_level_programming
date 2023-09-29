#include "main.h"
/**
 * _strncat - concatenates two str but use at most n byte.
 * @dest: char pointer destination
 * @src: char pointer source
 * @n: most byte to be used from src
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && i < n)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}

	*ptr = '\0';
	return (dest);
}
