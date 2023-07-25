#include "sort.h"

/**
  * bubble_sort- bubble sort an array of integers
  *
  * @array: array of integers to be sorted
  * @size: size of the array
  *
  */

void bubble_sort(int *array, size_t size)
{
	int l, s, temp, swapped;

	if (!array || size < 2)
		return;

	for (l = 0; l < (int)size - 1; l++)
	{
		swapped = 0;
		for (s = 0; s < (int)size - l - 1; s++)
		{
			if (array[s] > array[s + 1])
			{
				temp = array[s];
				array[s] = array[s + 1];
				array[s + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
