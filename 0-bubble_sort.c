#include "sort.h"

/**
 * bubble_sort - function that sorts an array of int in ascending order
 * @array: array of integers to sort
 * @size: length of the array
**/

void bubble_sort(int *array, size_t size)
{
	size_t p, q = 0;
	int temp;

	if (array == NULL || size == 0)
		return;
	/*loop to access each array element*/
	for (p = 0; p < size; p++)
	{	/*loop to compare array elements*/
		for (q = 0; q < size - p - 1; q++)
		{	/*swap elements if current element is > adjacent element*/
			if (array[q] > array[q + 1])
			{
				temp = array[q + 1];
				array[q + 1] = array[q];
				array[q] = temp;
				print_array(array, size);
			}
		}
	}
}
