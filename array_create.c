#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc, free
#include <stdbool.h> // For true/false

/**
 * Creates an array of even integers from begin to end (inclusive).
 * If begin is odd, starts from the next even number.
 * Returns NULL if begin > end or if memory allocation fails.
 */
int* array_create_evens(int begin, int end) {
    if (begin > end) 
    {
        return NULL;
    }

    if (begin % 2 != 0) 
    {
        begin++;
    }

    if (begin > end) 
    {
        return NULL;
    }

    int count = ((end - begin) / 2) + 1;

    int* arr = malloc(sizeof(int) * count);
    if (arr == NULL) 
    {
        return NULL;
    }

    for (int i = 0; i < count; i++) 
    {
        arr[i] = begin + (i * 2);
    }

    return arr;
}
