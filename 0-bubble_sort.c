#include <sort.h>
#include <stdio.h>

/**
 * bubble_sort - Sorts an array using the bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
*/
void bubble_sort(int array[], int size)
{
	int i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

/**
 * print_array - Prints the elements of an array.
 * @array: The array to print.
 * @size: The size of the array.
*/
void print_array(int array[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
*/
int main(void)
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, n);
	print_array(arr, n);

	return (0);
}
