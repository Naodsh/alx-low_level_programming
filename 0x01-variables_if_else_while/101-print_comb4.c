#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int h, i, j;

	for (h = 0; h < 8; h++)
	{
		for (i = h + 1; i < 9; i++)
		{
			for (j = i + 1; j < 10; j++)
			{
				putchar(h + '0');
				putchar(i + '0');
				putchar(j + '0');

				if (h == 7 && i == 8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
