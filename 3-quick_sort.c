#include "sort.h"

/**
 * partition - array partition
 * @array: array to sort
 * @first_ele: first position
 * @last_ele: last position
 * @size: array size
 * Return: pivot index
 */
int partition(int *array, int first_ele, int last_ele, size_t size)
{
	int i = first_ele - 1, temp, j;

	for (j = first_ele; j <= last_ele - 1; j++)
	{
		if (array[j] < array[last_ele])
		{
			i++;
			if (i < j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[last_ele])
	{
		temp = array[i + 1];
		array[i + 1] = array[last_ele];
		array[last_ele] = temp;
		print_array(array, size);
	}

	return (i + 1);
}
/**
 * sorting - sorts an array of integers recursively
 * @array: array to sort
 * @first: first position
 * @last: last position
 * @size: array size
 */
void sorting(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		sorting(array, first, pivot - 1, size);
		sorting(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - sorts an array of integers using the Quick
 * sort algorithm in ascending order
 * @array: array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	sorting(array, 0, size - 1, size);
}
