#include<stdlib.h>
#include<stdio.h>
#include "dog.h"
#include<math.h>
/**
 * print_dog - prints the details of a dog
 *
 * @d: pointer to the address of the struct containing the dog's details
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
{
	if ((*d).name == NULL)
{
	printf("Name: (nil)\n");
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}

	else if ((*d).age == NAN)
{
	printf("Name: %s\n", (*d).name);
	printf("Age: (nil)");
	printf("Owner: %s\n", (*d).owner);
}
	else if ((*d).owner == NULL)
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: (nil)");
}
	else
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
}
}
