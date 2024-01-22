#include "sort.h"

/**
 * swap - function for swapping
 * @lp: left position element
 * @rp: right position element
 */

void swap(int *lp, int *rp)
{
	int tmp = *lp;
	*lp = *rp;
	*rp = tmp;
}

/**
 * bubble_sort - a function for sorting algorithm
 * @array: - the array to be sorted
 * @size: - the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		}

		if (swapped == false)
			break;
	}
}
