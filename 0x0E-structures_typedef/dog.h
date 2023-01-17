#ifndef _dog_h_
#define _dog_h_


/**
 * struct dog - Dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 *
 * Description: for dog's Longer description. stores dog name, age
 * and dog ownwer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
