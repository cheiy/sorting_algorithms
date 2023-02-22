#include "sort.h"

/**
 * selection_sort - Sort an array of integers in ascending order.
 * @array: An array of integers which we are to sort.
 * @size: The size of the array.
 *
 * Description: Function sorts an array of integers in ascending order.
 *
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t index1, index2;

	if (array == NULL || size < 2)
		return;

	for (index1 = 0; index1 < size - 1; index1++)
	{
		min = array + index1;
		for (index2 = index1 + 1; index2 < size; index2++)
			min = (array[index2] < *min) ? (array + index2) : min;

		if ((array + index1) != min)
		{
			swap_nums(array + index1, min);
			print_array(array, size);
		}
	}
}

/**
 * swap_nums - Function swaps two numbers in an array.
 * @num1: The first number to swap.
 * @num2: The second number to swap.
 *
 * Description: Function Swaps two numbers in an array.
 *
 * Return: Nothing.
 *
 */
void swap_nums(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

