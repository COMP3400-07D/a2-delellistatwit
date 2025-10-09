#include <stddef.h> // For NULL

/**
 * Fills the destination array with character 'c' and null-terminates it.
 * Only fills up to dest_cap - 1 characters to leave space for the '\0' terminator.
 * If dest is NULL or dest_cap <= 0, does nothing.
 */
    void string_fill(char dest[], int dest_cap, char c) 
{
    if (dest == NULL || dest_cap <= 0) {
        return;
    }

    int i;
    for (i = 0; i < dest_cap - 1; i++) {
        dest[i] = c;
    }

    // Null-terminate the string
    dest[i] = '\0';
}
