#include "sort.h"

/**
 * swap - swaps tp integer values
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */
void swap(size_t a, size_t b)
{
	size_t tmp;

	tmp = a;
	a = b;
	b = tmp;

	return;
}

/**
 * selection_sort - arranges an array in descending order
 * using selction sort algorithm
 * @array: the array
 * @size: the length of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, min, j;

	for (i=0; i < size - 1; i++)
	{
		min = i;
		for (j = i+1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swap(array[i], array[min]);
			print_array(array, size);
		}
	}
	return;
}
