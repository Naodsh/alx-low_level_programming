#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                       using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: The index where @value is located,
 *         or -1 if @value is not present in @array or if @array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, low, high;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	bound = 1;

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array, low, high, value));
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: The lower bound index of the search range
 * @high: The higher bound index of the search range
 * @value: Value to search for
 *
 * Return: The index where @value is located,
 *         or -1 if @value is not present in the specified range
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
