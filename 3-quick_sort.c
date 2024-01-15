#include "sort.h"

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

/**
 * lomuto_partition - function that track and compare
 * 
*/
int	lomuto_partition(int *array, int low, int high)
{
	int	pivot = array[high];
	int	i = low-1;
	int	j = low;

	for (; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[j], &array[i]);
			print_array(&array[j], &array[i]);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(&array[j], &array[i]);

	return(i + 1);
}
/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array : 
 * @size : 
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	

}