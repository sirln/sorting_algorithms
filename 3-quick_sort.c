#include "sort.h"

/**
 * quick_sort - sorts the array in ascending order using Quicksort
 * @array: array of integers to be sorted
 * @size: length of the array
**/

void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1, size);
}

/**
 * quicksort_recursion - applies the divide and conquer rule
 * @array: array of integers
 * @low: lower index
 * @high: upper(higher) index
 * @size: array's length
**/
void quicksort_recursion(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{	/*position of the pivot*/
		pivot_index = partition(array, low, high, size);
		/*left hand portion of the array*/
		quicksort_recursion(array, low, pivot_index - 1, size);
		/*Right hand portion of the array*/
		quicksort_recursion(array, pivot_index + 1, high, size);
	}
}

/**
 * partition - partitions the array between low - high indexes by a pivot value
 * @array: array of integers
 * @low: lower index
 * @high: upper (higher) index
 * @size: array's length
 * Return: index of the pivot
**/

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], temp = 0;
	int i = low - 1, j = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
