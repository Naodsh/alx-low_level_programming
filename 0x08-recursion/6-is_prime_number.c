#include "main.h"
/**
 * is_prime_recursive - Checks if an integer is a prime number using recursion.
 * @n: The integer to be checked.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime numbers */
	}

	if (divisor == 1)
	{
		return (1); /* Base case: divisor has reached 1, so n is prime */
	}

	if (n % divisor == 0)
	{
		return (0); /* n is divisible by divisor, not a prime number */
	}

	return (is_prime_recursive(n, divisor - 1)); /* Check with the next divisor */
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 *
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_recursive(n, n - 1));
}
