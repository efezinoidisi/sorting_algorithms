#include "sort.h"

/**
 * quick_sort - sorts an array in ascending order;
 * @array: unsorted array
 * @size: size of the array
 *
 * Description: array is sorted using the quick sort algorithm
 * with the lomuto partition scheme
 *
 * Returns: Nothing
 */


void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	sort_arr(array, 0, size - 1, size);
}


/**
 * sort_arr - sort array using quick sort
 * @array: array to be sorted
 * @low: least index of array
 * @high: highest index of array
 * @size: size of the array
 *
 * Returns: Nothing
 */

void sort_arr(int *array, unsigned int low, unsigned int high, size_t size)
{
	unsigned int pivot_index;

	if (low < high)
	{
		pivot_index = part(array, low, high, size);
		if (pivot_index != 0)
			sort_arr(array, low, pivot_index - 1, size);
		sort_arr(array, pivot_index + 1, high, size);
	}
}


/**
 * part - places pivot at correct position in an array
 * @array: array to be sorted
 * @low: least index of array
 * @high: highest index of array
 * @size: size of the array
 *
 * Return: index of pivot
 */

unsigned int part(int *array, unsigned int low, unsigned int high, size_t size)
{
	int i, j, pivot;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < (int)high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (array[high] < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * swap - swaps tp integer values
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
