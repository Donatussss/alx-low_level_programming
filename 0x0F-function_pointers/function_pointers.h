#ifndef FUNCTIONPOINTERS
#define FUNCTIONPOINTERS

#include <stdlib.h>

/*
 * function prototypes
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
