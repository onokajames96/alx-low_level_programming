#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 *                using the binary search algorithm
 * @array: The array.
 * @size: The size of arrays
 * @value: value.
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{

	size_t j, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}

	return (-1);
}
