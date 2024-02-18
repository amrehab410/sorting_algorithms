#include "sort.h"

/**
 * selection_sort - sort list with selection_sort
 * @array: The array to be printed
 * @size: Number of elements in @array
 * Return: None
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, index = 0;
	int min = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				index = j;
			}
		}
		array[index] = array[i];
		array[i] = min;
		print_array(array, size);
	}
}
