#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function to print each element of the array on a new line
 * @array: array
 * @size: how many element to print from the array on new line
 * @action: pointer to print in regular or hexadecinal
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

