#include <stddef.h> // For NULL
#include <stdlib.h> // For malloc
#include <ctype.h>  // For toupper

/**
 * Returns a new dynamically allocated string that is a copy of 's',
 * but with all lowercase letters converted to uppercase.
 * All non-lowercase characters remain unchanged.
 * The returned string is null-terminated.
 */

char* capitalize(const char* s) {
    if (s == NULL) {
        return NULL;
    }

    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    char* result = (char*)malloc(sizeof(char) * (len + 1));
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        result[i] = toupper((unsigned char)s[i]);
    }

    result[len] = '\0';
    return result;
}
