#include "main.h"
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings, or NULL on failure or invalid input.
 */
char **strtow(char *str)
{
	int word_c = 0;
	int current_w = 0;
	int word_s = 0;
	int i, j, word_len;
	char **words = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			word_c++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
	words = (char **)malloc((word_c + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			word_s = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			word_len = i - word_s;
			words[current_w] = (char *)malloc((word_len + 1)
					* sizeof(char));
			if (words[current_w] == NULL)
			{
				for (j = 0; j < current_w; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			strncpy(words[current_w], str + word_s, word_len);
			words[current_w][word_len] = '\0';
			current_w++;
		}
	}
	words[word_c] = NULL;

	return (words);
}
