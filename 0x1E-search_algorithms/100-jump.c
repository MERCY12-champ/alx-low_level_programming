#include "search_algos.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/**
 * jump_search - searches a value using jump search algo
 * @array: array to be searched
 * @size: size of the array
 * @value: value of to be searched
 * Return: if found its index else -1
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump;
    size_t prev = 0;
    size_t point = 0;
    int min;

    if (array == NULL || size == 0)
        return (-1);

    jump = sqrt(size);

    /* Perform jump until value is greater than values in the array */
    printf("Value checked array[%lu] = [%d]\n", point, array[point]);

    while (point + jump < size && array[point + jump] < value)
    {
        prev = point;
        point += jump;
        printf("Value checked array[%lu] = [%d]\n", point, array[point]);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, point);

    while (array[prev] < value)
    {
        prev++;
        if (prev == fmin(size, point + 1))
            return (-1);
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
    }

    if (array[prev] == value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        return ((int) prev);
    }

    return (-1);
}
