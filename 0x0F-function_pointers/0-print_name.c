#include "function_pointers.h"

/**
 * print_name - prints a name using a given function pointer
 * @name: pointer to a character array containing the name to print
 * @f: pointer to a function that takes a pointer to a character array
 *     and returns no value
 * Return : nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
