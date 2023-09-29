#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which the square root is to be calculated.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helper function for calculating square root using recursion.
 * @n: The number for which the square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n if found, or -1 if not found.
 */
int sqrt_helper(int n, int guess)
{
	if (n < 0)
		return (-1);

	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (sqrt_helper(n, guess + 1));

}
