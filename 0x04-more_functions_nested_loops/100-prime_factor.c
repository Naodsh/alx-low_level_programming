#include <stdio.h>
#include <math.h>

/**
 * largestPrimeFactor - find the gretest prim factor
 * @num: - the number from the caller
 *
 * Return: - largestFactor
 */

long int largestPrimeFactor(long int num)
{
	long int largestFactor = -1;
	long int i;

	while (num % 2 == 0)
	{
		largestFactor = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largestFactor = i;
			num /= i;
		}
	}
	if (num > 2)
	{
		largestFactor = num;
	}

	return (largestFactor);
}

/**
 * main - test func
 *
 * Return: - 0 success
 */
int main(void)
{
	long int number = 612852475143;
	long int result = largestPrimeFactor(number);

	printf("%ld\n", result);

	return (0);
}
