#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the updated string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		char current_char = str[i];

		if (current_char >= 'a' && current_char <= 'z')
		{
			if (capitalize_next)
			{
				str[i] = current_char - ('a' - 'A');
				capitalize_next = 0;
			}
		}
		else
		{
			capitalize_next = (current_char == ' ' || current_char == '\t' ||
				current_char == '\n' ||	current_char == ',' || current_char == ';' ||
				current_char == '.' || current_char == '!' || current_char == '?' ||
				current_char == '"' || current_char == '(' || current_char == ')' ||
				current_char == '{' || current_char == '}');
		}
		i++;
	}

	return (str);
}
