#include "main.h"
/**
 * _strcpy - copy string using pointer
 * @dest: hold the copied string
 * @src: source string
 * Return: string pointer to char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = *(src + i);
	return (dest);
}
