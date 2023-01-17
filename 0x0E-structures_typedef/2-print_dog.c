#include "dog.h"
#include <stdio.h>



/* betty style doc for function main goes there */
/**
 * print_dog -function to print  type dog
 * @d: dog struct pointer
 * Return: 0 (success)
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("nil\n");

		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("nil\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil\n");
	}
}
