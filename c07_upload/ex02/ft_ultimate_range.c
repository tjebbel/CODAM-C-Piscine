/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 13:49:53 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 11:30:59 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// assignment: give back an array through int **; size, 0 or -1

int ft_ultimate_range(int **range, int min, int max) 
{
    long i;

    // Check if the range is valid
    if (min >= max) {
        *range = NULL; // Set range to NULL if invalid
        return (0);    // Return 0 indicating no elements
    }
    // Allocate memory for the range
    *range = malloc(sizeof(int) * ((long)max-min));
    if (!*range) 
    {
        return (-1); // Return -1 if memory allocation fails
    }

    // Populate the allocated array
    i = 0;
    while (i < size) 
    {
        (*range)[i] = min + i; // Assign values to the array
        i++;
    }

    return (max - min); // Return the number of elements allocated or the size as size = (long)max - min
}

/* 
int ft_ultimate_range(int **range, int min, int max) 
{
    int i;

    // Check if the range is valid
    if (min >= max) {
        *range = NULL; // Set range to NULL if invalid
        return (0);    // Return 0 indicating no elements
    }

    // Allocate memory for the range
    *range = (int *)malloc((max - min) * sizeof(int));
    if (*range == NULL) {
        return (-1); // Return -1 if memory allocation fails
    }

    // Populate the allocated array
    i = 0;
    while (min + i < max) {
        (*range)[i] = min + i; // Assign values to the array
        i++;
    }

    return (max - min); // Return the number of elements allocated
}

The function ft_ultimate_range takes a pointer to an integer pointer (int **range), and two integers min and max. 
It creates an array of integers containing all the values from min (inclusive) to max (exclusive) and assigns the address of this array to *range. 
The function returns the number of integers in the range, which is max - min.
The function first checks if min is greater than or equal to max. If it is, it sets *range to NULL and returns 0, indicating that there are no integers in the range.
If min is less than max, the function allocates memory for an array of integers of size (max - min) using malloc.
If the memory allocation fails (i.e., malloc returns NULL), the function returns -1 to indicate an error.
If the memory allocation is successful, the function uses a while loop to fill the allocated array with integers starting from min up to max - 1.
Inside the loop, it assigns the value min + i to (*range)[i], where i is the index that starts at 0 and increments until min + i is less than max.
After the loop, the function returns the number of integers in the range, which is calculated as max - min.
In the main function, we would declare an integer pointer range and two integer variables min and max. 
We would then call ft_ultimate_range with the address of range, min, and max as arguments.
If the function returns a positive number, we would have a valid range of integers stored in the array pointed to by range.
We could then use a loop to print the values in the range array and free the allocated memory afterward.

Input Check: The function begins by checking if min is greater than or equal to max. If this condition is true, it sets the pointer *range to NULL and returns 0, indicating that no range is created.

Memory Allocation: The function allocates memory for the array that will hold the integers. The size of the memory allocated is (max - min) * sizeof(int), which ensures enough space for all integers in the range.

Error Handling: If the memory allocation fails (i.e., malloc returns NULL), the function returns -1 to indicate an error.

Filling the Array: A while loop iterates from min to max - 1, populating the allocated array with consecutive integers. The loop continues until all integers in the specified range are filled.

Return Value: The function concludes by returning the total number of integers created, which is max - min.

*/