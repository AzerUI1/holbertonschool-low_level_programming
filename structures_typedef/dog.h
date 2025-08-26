#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for storing dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* new type name for struct dog */
typedef struct dog dog_t;

/* Function prototypes */

/**
 * init_dog - initializes a dog structure
 * @d: pointer to the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a dog structure
 * @d: pointer to the dog structure
 *
 * Return: void
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees a dog structure and its allocated fields
 * @d: pointer to the dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d);

#endif /* DOG_H */

