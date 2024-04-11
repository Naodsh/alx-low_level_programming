#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: The index where @value is located,
 *         or -1 if @value is not present in @array or if @array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1;
	size_t p;

	if (array == NULL)
		return (-1);

	while (l <= h && value >= array[l] && value <= array[h])
	{
		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		printf("Value checked array[%lu] = [%d]\n", p, array[p]);

		if (array[p] == value)
			return (p);

		if (array[p] < value)
			l = p + 1;
		else
			h = p - 1;
	}

	printf("Value checked array[%lu] is out of range\n", l);

	return (-1);
}
