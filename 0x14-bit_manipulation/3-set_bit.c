#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to set (0 for the least significant bit).
 *
 * Return: 1 if the operation is successful, or -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1ul << index);  /* Set the bit at the spec */

	return (1);
}
