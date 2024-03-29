#ifndef _dog_h_
#define _dog_h_

/**
 * dog_t - a typedef type of dog
 */
typedef struct dog dog_t;

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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
