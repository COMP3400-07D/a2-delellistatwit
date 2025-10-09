#include <stddef.h> // For NULL

/**
 * Copies integers from begin to end (inclusive) into the provided array.
 * Returns the number of integers copied.
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if(array == NULL || array_len <=0)
    {
        return 0;
    }

    int count = 0;
    for(int i = 0; i < array_len && begin + i <= end; i++)
    {
        array[i] = begin + i;
        count++;

    }
    return count;
}
