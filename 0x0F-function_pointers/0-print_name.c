#include<stdlib.h>


/**
 * print_name - calls functions using their pointers
 *@f: pointer to the function
 *@name: argument to the functions
 */



void print_name(char *name, void (*f)(char *))

{
	if (f != NULL)
	f(name);
}
