#include "sort.h"

/**
  * selection_sort - sorts an array of integers in ascending order
  *
  * @array: array of integers to sort
  * @size: length of array
  *
  */

void selection_sort(int *array, size_t size)
{
	int l, m, temp_index, temp;

	if (!array || size <= 0)
		return;

	for (l = 0; l < (int)size - 1; l++)
	{
		temp_index = l;
		for (m = temp_index + 1; m < (int)size; m++)
		{
			if (array[temp_index] > array[m])
				temp_index = m;
		}
		if (temp_index != l)
		{
			temp = array[l];
			array[l] = array[temp_index];
			array[temp_index] = temp;
			print_array(array, size);
		}
	}
}
