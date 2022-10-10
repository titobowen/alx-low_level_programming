#ifndef DOD_H
#define DOG_H

/**
 * struct dog - struture definition of dog
 * @name: name character string
 * @age: integer
 * @owner: caharacter string
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif	
