/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 13:49:46 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 11:23:05 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// assignment: give the range where min is included and max is not; NULL if min >= max

int	*ft_range(int min, int max)
{
	int	*range; // Pointer to hold the address of the allocated memory
	int	i; // Loop counter
 
	// Check if the range is valid
	if (min >= max)
		return (NULL); // Return NULL if min is not less than max
	 // Allocate memory for the range
	range = malloc(sizeof(int) * ((long)max-min));
	if (!range)
		return (NULL);  // Return NULL if memory allocation fails
	// Populate the array with values from min to max - 1
	i = 0;
	while (min + i < max)
	{
		range[i] = min + i; // Assign the value to the array
		i++;
	}
	return (range); // Return the pointer to the array
}

/*
int	*ft_range(int min, int max)
{
	int	*range; // Pointer to hold the address of the allocated memory
	int	i; // Loop counter
 
	// Check if the range is valid
	if (min >= max)
		return (NULL); // Return NULL if min is not less than max
	 // Allocate memory for the range
	range = (int *)malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);  // Return NULL if memory allocation fails
	// Populate the array with values from min to max - 1
	i = 0;
	while (min + i < max)
	{
		range[i] = min + i; // Assign the value to the array
		i++;
	}
	return (range); // Return the pointer to the array
}


int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = 5;
	max = 10;
	range = ft_range(min, max);
	if (range != NULL)
	{
		for (i = 0; i < max - min; i++)
		{
			printf("%d ", range[i]);
		}
		printf("\n");
		free(range);
	}
	else
	{
		printf("Invalid range: min should be less than max.\n");
	}
	return (0);
} */

/*
The function ft_range takes two integers, min and max, and returns a pointer to an array of integers containing all the values from min (inclusive) to max (exclusive). 
If min is greater than or equal to max, the function returns NULL.
The function first checks if min is greater than or equal to max. If it is, it returns NULL, indicating that the range is invalid.
If the range is valid, it allocates memory for an array of integers that can hold (max - min) elements.
If the memory allocation fails (i.e., malloc returns NULL), the function returns NULL to indicate that the range cannot be created.
If the memory allocation is successful, it initializes an integer variable i to 0 and enters a while loop that continues as long as min + i is less than max. 
Inside the loop, it assigns the value of min + i to range[i] and increments i by 1.
This process fills the array with the values from min to max - 1.
Finally, the function returns the pointer to the array containing the range of integers.
In the main function, we declare two integer variables min and max, and set them to 5 and 10, respectively. 
We then call ft_range with min and max as arguments and store the result in the pointer range.
If range is not NULL, we use a for loop to print the values in the range array, which should output "5 6 7 8 9". After printing, we free the allocated memory for range.

Memory Allocation: The line range = (int *)malloc((max - min) * sizeof(int)); allocates enough memory to hold all integers from min to max - 1. If malloc fails, it returns NULL, which is handled appropriately.

Looping Through the Range: The while loop iterates from min to max - 1, filling the array with consecutive integers. The expression min + i calculates the current integer to be stored in the array.

Return Value: The function returns the pointer to the first element of the array. If the range is invalid or memory allocation fails, it returns NULL.

*/