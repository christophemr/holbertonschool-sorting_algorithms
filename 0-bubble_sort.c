#include "sort.h"

/**
 * bubble_sort - sorts an array using the bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	/*outer loop iterates over the entire array*/
	for (i = 0; i < size - 1; i++)
	{
		/*inner loop iterates over the unsorted part of array*/
		for (j = 0; j < size - i - 1; j++)
		{
			/*compare adjacent element & swap if necessary*/
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}


}
