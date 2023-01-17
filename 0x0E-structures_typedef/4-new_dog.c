#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - entry function
 * copies the string pointed to by src, including the terminating null byte(\0)
 * , to the buffer pointed to by dest
 * @src: source string
 * @dest: destination buffer to be copied to.
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	long len, index;

	len = 0;

	while (*src != '\0')
	{
		len++;
		src++;
	}

	src -= len;
	for (index = 0; index <= len; index++)
		dest[index] = src[index];

	return (dest);
}

/* betty style doc for function main goes there */
/**
 * new_dog -function to create new dog
 * @name: dog name.
 * @age: dog age
 *@owner: dog owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_n, len_o;

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog || !name || !owner)
		return (NULL);
	for (len_n = 0; *(name + len_n); len_n++)
		;
	for (len_o = 0; *(owner + len_o); len_o++)
		;
	new_dog->name = malloc(len_n * sizeof(char) + 1);
	new_dog->owner = malloc(len_o * sizeof(char) + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);

	return (new_dog);
}
