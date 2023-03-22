#include <stdlib.h>
#include "function_pointer.h"

/**
* print_name - prints a name
* @name: name to print
* @f: pointer to function that prints a name
*/

void print_name(char *name, void (*f)(char *))
{
	if (!namee || !f)
		return;
	f(name);
}
