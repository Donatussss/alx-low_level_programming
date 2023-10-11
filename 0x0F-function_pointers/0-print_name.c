#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * this function calls a function that prints a name
 * @name: name to be printed
 * @f: function that is called
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
