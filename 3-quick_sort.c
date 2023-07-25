#include "sort.h"

/**
  * swapper - swaps two integers
  *
  * @a: pointer to first integer
  * @l: pointer to second integer
  *
  */
void swapper(int *a, int *l)
{
	int temp;

	temp = *a;
	*a = *l;
	*l = temp;
}


/**
  * partition - partions the array
  *
  * @array: array of integers
  * @swap: starting index of array partition to order
  * @pivot_index: last index of array partition to order
  * @size: size of the array
  * Return: position of the pivot in the array (pivot_index)
  *
  */
int partition(int *array, int swap, int pivot_index, size_t size)
{
	int l;

	for (l = swap; l < pivot_index; l++)
	{
		if (array[l] < array[pivot_index])
		{
			swapper(&array[swap], &array[l]);
			if (array[swap] != array[l])
				print_array(array, size);
			swap++;
		}
	}
	swapper(&array[swap], &array[l]);
	if (array[swap] != array[l])
		print_array(array, size);
	return (swap);
}

/**
  * quick_sort_recursion - applies the divide and conquer rule
  *
  * @array: array of integers
  * @swap: starting index of array partition to order
  * @pivot_index: last index of array partition to order
  * @size: size of array
  *
  */
void quick_sort_recursion(int *array, int swap, int pivot_index, size_t size)
{
	int new_pivot_index;

	if (swap < pivot_index)
	{
		new_pivot_index = partition(array, swap, pivot_index, size);
		quick_sort_recursion(array, swap, new_pivot_index - 1, size);
		quick_sort_recursion(array, new_pivot_index + 1, pivot_index, size);
	}
}

/**
  * quick_sort - sorts the array in ascending order using Quicksort
  *
  * @array: array of integers to be sorted
  * @size: length of the array
  *
  */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	 quick_sort_recursion(array, 0, size - 1, size);
}
