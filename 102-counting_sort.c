#include "sort.h"

/**
 * counting_sort - Sort out array with counting sort
 * @array: input array, contains integers
 * @size: Size of array
 * Return: nothing
 */

void counting_sort(int *array, size_t size)
{
	size_t i, k, m, n;
	int *count, *output, max = 0, j, l;

	if (!array || size < 2)
		return;
	/*maximum number*/
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	count = malloc((max + 1) * sizeof(size_t));
	/* Assign count elements to 0 */
	for (j = 0; j <= max; j++)
		count[j] = 0;
	/* count the occurence of each elements in the input array */
	for (k = 0; k < size; k++)
		count[array[k]]++;
	/*Modify the array to store the position of each element in the output array*/
	for (l = 1; l <= max; l++)
		count[l] += count[l - 1];
	/* Print array */
	print_array(count, max + 1);
	output = malloc(size * sizeof(int));

	/* Place each element in it's correct position in the output array */
	for (m = 0; m < size; m++)
	{
		output[count[array[m]] - 1] = array[m];
		count[array[m]]--;
	}
	/* copy the output array to the input array */
	for (n = 0; n < size; n++)
		array[n] = output[n];

	/* free memory */
	free(count);
	free(output);
}
