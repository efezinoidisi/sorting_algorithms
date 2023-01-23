#include "sort.h"

/**
 * shell_sort - sorts an array of integers
 * @array: array to be sorted
 * @size: size of array
 *
 * Description: sorts an array of integers in ascending order using the shell
 * sort algorithm, using the Knuth sequence
 *
 * Return: Nothing
 */


void shell_sort(int *array, size_t size)
{
	unsigned int inner, outer, interval = 1;
	int value;

	if (!array || size < 2)
		return;

	while (interval < size / 3)
		interval = interval * 3 + 1;

	while (interval)
	{
		for (outer = interval; outer < size; outer++)
		{
			value = array[outer];
			inner = outer;

			while (inner > interval - 1 && array[inner - interval] >= value)
			{
				array[inner] = array[inner - interval];
				inner = inner - interval;
			}

			array[inner] = value;
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
