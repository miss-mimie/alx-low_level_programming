#ifndef _dog_h_
#define _dog_h_

/**
 * dog_t - alias for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - this stores information of a dog
 * @name: this is the name of the dog
 * @age: this is the age of the dog
 * @owner: this is the owner of the dog
 *
 * Description: this is the struct that stores name, age
 * and the owner of the dog
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
