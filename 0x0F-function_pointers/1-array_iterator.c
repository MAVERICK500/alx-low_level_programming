#include "function_pointers.h"

/**
 * array_iterator - applies a given function to each element of an array
 * @array: pointer to an integer array
 * @size: size of the array
 * @action: pointer to a function that takes an integer argument and
 *          returns no value
 *
 * This function applies the specified function to each element of the array.
 * If either the array or action pointer is NULL, the function returns without
 * doing anything.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int *end = array + size - 1;

	if (array && size && action)
	    while (array <= end)
		    action(*array++);
}
