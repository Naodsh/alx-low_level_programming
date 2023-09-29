#include <stdio.h>
/**
 * main - Prints all possible combinations of two different digits,
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i == 8 && j == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
