#include "main.h"
#include <stdlib.h> // Include <stdlib.h> for the exit function

/**
 * malloc_checked - Allocates memory and checks for allocation success.
 *
 * @b: Size of memory to allocate
 *
 * Return: A pointer to the allocated memory (if successful)
 */
void *malloc_checked(unsigned int b)
{
    void *i;

    i = malloc(b);

    if (i == NULL)
    {
        exit(98);
    }

    return (i);
}
