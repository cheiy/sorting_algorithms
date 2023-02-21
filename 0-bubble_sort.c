#include "sort.h"

/**
 * bubble_sort - Function implements the Bubble Sort algorithm.
 * @array: The array that we want to sort.
 * @size: The size of the array.
 *
 * Description: Function implements the Bubble Sort algorithm.
 *
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t index, index2;

	index = index2 = 0;
	for (index = 0; index < size - 1; index++)
	{
		for (index2 = 0; index2 < size - index - 1; index2++)
		{
			if (array[index2] > array[index2 + 1])
			{
				swap_values(&array[index2], &array[index2 + 1]);
				print_array(array, size);
			}
		}
		/*
		 * print_array(array, size);
		 *
		 */
	}
}
/**
 * swap_values - Function swaps the previous value with the next value
 * if the next value is smaller than the previous value.
 * @prev: The previous value in the array.
 * @next: The next value in the array.
 *
 * Description: Function swaps the previous value with the next value
 * if the next value is smaller than the previous value.
 *
 * Return: Returns nothing.
 */
void swap_values(int *prev, int *next)
{
	int temp;

	temp = *prev;
	*prev = *next;
	*next = temp;
}
