#include "function_pointers.h"

/**
 * int_index - Return the index if comparison is true, else return -1.
 * @array: Array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function of one of the 3 in main.
 *
 * Return: Index or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || size <= 0 || cmp == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }
    return (-1);
}
