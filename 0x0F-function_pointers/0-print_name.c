#include "main.h"


/* betty style doc for function main goes there */
/**
 * print_name -function to call a function that prints a str
 * @f: pointer to callback function.
 * @name: char array to be printed.
 * Return: 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (0);
}
