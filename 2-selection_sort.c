#include "sort.h"

/**
 *selection_sort - sorts an array of integers
 *using the Selection sort algorithm
 *@array: array to be sorted
 *@size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_index;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		/*find the minimum element in the unsorted part*/
		for (j = i + 1; j < size; j++)
		{
			if (array[min_index] > array[j])
					min_index = j;
		}
		if (min_index != i)
		{
			/*swap the found minimum element with*/
			/*the 1st element found of the unsorted part */
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
/**
 * swap - swap to values
 * @a: first value to swap
 * @b: second value to swap
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

