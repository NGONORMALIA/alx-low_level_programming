#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - entry point
 * @name: the first element of our struct
 * @age: the second element
 * @owner: the third element
 *
 * Description: the attributes
 */
struct dog 
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new typedef for our struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
