#include "sort.h"
/**
 * quick_sort - Sorts an array of integers Quick sort
 * @array: Array to sort
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size >= 2)
	{
		aux_quick_sort(array, 0, size - 1, size);
	}
}
/**
 * aux_quick_sort - Sort quick sort recursively
 * @array: Array to sort
 * @lo: Low index
 * @hi: High index
 * @size: Size of array
 */
void aux_quick_sort(int *array, int lo, int hi, size_t size)
{
	int partition;

	if (lo < hi)
	{
		partition = lomuto_partition(array, lo, hi, size);
		if (partition != 0)
			aux_quick_sort(array, lo, partition - 1, size);
		aux_quick_sort(array, partition + 1, hi, size);
	}
}
/**
 * lomuto_partition - Lomuto's partition
 * @array: Array to use
 * @lo: Low index
 * @hi: High index
 * @size: Size of array
 * Return: int
 */
int lomuto_partition(int *array, size_t lo, size_t hi, size_t size)
{
	size_t x, y = lo;

	for (x = y; x < size; x++)
	{
		if (array[x] < array[hi])
		{
			if (x != y)
			{
				swap(array, x, y);
				print_array(array, size);
			}
			y++;
		}
	}
	if (y != hi && array[y] != array[hi])
	{
		swap(array, y, hi);
		print_array(array, size);
	}
	return (y);
}
/**
 * swap - Swap lo to hi
 * @array: Array to use
 * @lo: Lo variable in lomuto
 * @hi: Hi variable in lomuto
 */
void swap(int *array, int lo, int hi)
{
	int tmp;

	tmp = array[lo];
	array[lo] = array[hi];
	array[hi] = tmp;
}
