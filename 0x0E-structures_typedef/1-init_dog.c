#include "dog.h"



/* betty style doc for function main goes there */
/**
 * init_dog -function to initialize type dog
 * @d: dog struct pointer
 * @name: dog name.
 * @age: dog age
 *@owner: dog owner
 * Return: 0 (success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
