#include "main.h"
/**
 * clear_bit - Clears (sets to 0) the value of a bit at a given index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to clear (0 for the least significant bit).
 *
 * Return: 1 if the operation is successful, or -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1ul << index);  /* Clear the bit at the specified index */

	return (1);
}
