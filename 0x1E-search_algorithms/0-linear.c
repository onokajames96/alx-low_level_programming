#include "search_algos.h"

/**
 * linear_search -searches for a value in an array of integers.
 * @array: array of integers
 * @size: The size.
 * @value:The value being searched.
 *
 * Return: The index of the  value in array,
 *         or -1 if value is not present or array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);


	for (j = 0; j < size; ++j)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
