#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 success
 */
int main(void)
{
	long int f[50];
	int i;

	f[0] = 0;
	f[1] = 1;

	for (i = 2; i < 52; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		printf("%ld", f[i]);
		if (i != 51)
			printf(", ");
	}
	printf("\n");

	return (0);
}
