#include "sort.h"

/**
 * bubble_sort - sort list with bubble
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t swaps = 0, i = 0, j = 0, temp = 0;

	if (size < 2 || array == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j + 1];
					array[j + 1] = array[j];
					array[j] = temp;
					swaps++;
					print_array(array, size);
				}
			}
			if (swaps == 0)
			{
				return;
			}
			swaps = 0;
		}
	}
}
