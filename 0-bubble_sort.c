#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order;
 * @array: unsorted array
 * @size: size of the array
 *
 * Description: array is sorted using the bubble sort algorithm
 *
 * Returns: Nothing
 */


void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, swap;
	int temp;

	/*check that array is not empty and it contains more than 2 elements*/
	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			/* variable that tracks if a swap happens */
			swap = 0;
			/* compare value at current index and next index */
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = 1;
			}

			/* print array if a swap happens */
			if (swap)
				print_array(array, size);
		}
	}
}
