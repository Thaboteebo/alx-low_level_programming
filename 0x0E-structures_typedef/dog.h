#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * init_dog - Initializes a struct dog
 * @d: pointer to a struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to a struct dog
 */

void print_dog(struct dog *d);

/**
 * new_dog - Creates a new struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory occupied by a dog
 * @d: Pointer to a struct dog
 */

void free_dog(dog_t *d);

/**
 * _strcpy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src);

/**
 * _strlen - Computes the length of a string
 * @s: Input string
 * Return: Length of the string
 */

int _strlen(char *s);

#endif
