#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers
 * @array: Array to sort
 * @sze: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int tmp;

	for (x = 0; x < size && size >= 2; x++)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
