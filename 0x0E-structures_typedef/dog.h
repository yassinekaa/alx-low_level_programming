#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a structure to represent information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to struct dog to initialize.
 * @name: Name to initialize.
 * @age: Age to initialize.
 * @owner: Owner to initialize.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
