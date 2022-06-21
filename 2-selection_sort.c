#include "sort.h"
/**
 * selection_sort - Sorts an array of integers Selection sort
 * @array: Array to sort
 * @size: Size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y;
	int min, aux, tmp, bool = 0;

	for (x = 0; x < size; x++)
	{
		min = array[x];
		aux = x;
		for (y = x; y < size; y++)
		{
			if (array[y] < min)
			{
				min = array[y];
				aux = y;
				bool = 1;
			}
		}
		if (bool)
		{
			tmp = array[x];
			array[x] = min;
			array[aux] = tmp;
			print_array(array, size);
			bool = 0;
		}
	}
}
