#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name:The address of the name to print is passed in as *name
 * @f: pointer to the printing function where we will pass in the string to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
