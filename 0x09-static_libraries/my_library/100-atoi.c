#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value extracted from the string.
 */
#include <stdio.h>
#include <limits.h>

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/* Handle leading spaces */
	while (s[i] == ' ')
	{
		i++;
	}

	/* Handle sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Convert digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/*check for overflow berore updateing result */
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}

		result = result * 10 + (s[i] - '0');

		i++;
	}

	return (result * sign);
}
