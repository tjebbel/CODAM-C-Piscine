#ifndef YOURFT_H
#define YOURFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Function to output a character

void ft_putchar(char c) 
{
    if (c == '\0') 
        fprintf(stderr, "Error: Null character cannot be printed.\n");
        return;
    putchar(c);
}

// Function to swap two integers
void ft_swap(int *a, int *b) 
{
    if (a == NULL || b == NULL) {
        fprintf(stderr, "Error: Null pointer passed to ft_swap.\n");
        return;
    }
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to output a string
void ft_putstr(char *str) 
{
    if (str == NULL) {
        fprintf(stderr, "Error: Null string cannot be printed.\n");
        return;
    }
    printf("%s", str);
}

// Function to calculate the length of a string
int ft_strlen(char *str) 
{
    if (str == NULL) {
        fprintf(stderr, "Error: Null string passed to ft_strlen.\n");
        return -1; // Indicating an error
    }
    return strlen(str);
}

// Function to compare two strings
int ft_strcmp(char *s1, char *s2) {
    if (s1 == NULL || s2 == NULL) {
        fprintf(stderr, "Error: Null string passed to ft_strcmp.\n");
        return -1; // Indicating an error
    }
    return strcmp(s1, s2);
}

#endif // YOURFT_H

// Explanation of the Code

// Header Guards: The #ifndef, #define, and #endif directives prevent multiple inclusions of the header file.
// Function Prototypes: Each function is defined with appropriate error handling to manage null pointers and invalid inputs.
// Error Handling: Each function checks for null pointers and prints an error message to stderr if an invalid argument is encountered.
// Return Values: Functions that return an integer indicate errors with a specific return value, allowing the caller to handle these cases appropriately.
// This header file serves as a foundational utility for various string and character operations in C, ensuring that the functions are both functional and robust against common errors.