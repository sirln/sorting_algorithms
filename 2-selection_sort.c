#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array of integers to sort
 * @size: the length of the array
**/

void selection_sort(int *array, size_t size)
{
	size_t p, q, min = 0;
	int temp = 0;

	if (array == NULL || size == 0)
		return;

	for (p = 0; p < size; p++)
	{
		min = p;

		for (q = p + 1; q < size; q++)
		{
			if (array[q] < array[min])
			min = q;
		}
		if (min != p)
		{
			temp = array[p];
			array[p] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
