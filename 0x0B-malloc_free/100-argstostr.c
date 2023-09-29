#include "main.h"
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: An array of pointers to the argument strings.
 *
 * Return: A pointer to the concatenated string,
 * or NULL on failure or invalid input.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, position;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length needed for the concatenated string */
	for (i = 0; i < ac; i++)
	{
		/* +1 for newline character */
		total_length += strlen(av[i]) + 1;
	}

	/* Allocate memory for the concatenated string */
	result = (char *)malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	position = 0;

	/* Concatenate the arguments with newline separator */
	for (i = 0; i < ac; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';
	}

	result[total_length] = '\0';

	return (result);
}
