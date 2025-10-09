#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h>  // For isupper, islower, isdigit

/**
 * Returns true if the password meets all requirements:
 * - Length is between 6 and 10 characters inclusive
 * - Contains only letters or digits
 * - Contains at least 2 lowercase letters
 * - Contains at least 2 uppercase letters
 */
bool valid_password(const char* s) {
    if(s == NULL)
    {
        return false;
    }

    int len = 0;
    int lower = 0;
    int upper = 0;

    while (s[len] != '\0') 
    {
        char c = s[len];
        if (!isupper(c) && !islower(c) && !isdigit(c)) 
        {
            return false; // invalid character
        }
        if (islower(c)) lower++;
        if (isupper(c)) upper++;
        len++;
    }

    if (len < 6 || len > 10) 
    {
        return false;
    }

    if (lower < 2 || upper < 2) 
    {
        return false;
    }

    return true;

}
