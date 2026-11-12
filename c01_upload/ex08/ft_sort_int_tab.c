/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 13:47:27 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 13:50:23 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Assignment: Use a sorting algorithmn (like bubble sort) on an array


void	ft_sort_int_tab(int *tab, int size)
{
	int	i; // Loop counter for the outer loop
	int	j; // Loop counter for the inner loop
	int	temp; // Temporary variable for swapping

	i = 0; // Initialize outer loop counter
	while (i < size - 1) // Loop until the second last element
	{
		j = 0; // Initialize inner loop counter for each iteration of the outer loop
		while (j < size - 1 - i) // Loop through the unsorted portion
		{ // Compare adjacent elements
			if (tab[j] > tab[j + 1])
			{ // Swap if they are in the wrong order (ascending order)
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++; // Move to the next element
		}
		i++; // Move to the next pass
	} // After the outer loop completes, the array is sorted in ascending order
}

/* int	main(void)
{
	int	tab[] = {1, 2, 9, 3, 6, 5, 4, 8, 7, 0};
	int	size = sizeof(tab) / sizeof(tab[0]);
	int	i;

	printf("Original array: ");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("Sorted array: ");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return (0);
}
 */

 /* 
 
 The ft_sort_int_tab function effectively implements the Bubble Sort algorithm to sort an array of integers in ascending order. 
 While Bubble Sort is not the most efficient sorting algorithm for large datasets, its simplicity makes it an excellent choice for educational purposes and small arrays. Understanding this fundamental algorithm lays the groundwork for exploring more advanced sorting techniques in C programming.
 
1. 	Function Definition: The function ft_sort_int_tab takes two parameters: a pointer to an integer array (tab) and the size of the array (size).
2. 	Outer Loop: The outer loop iterates through the array, ensuring that each element is compared and potentially swapped with its adjacent element.
3. 	Inner Loop: The inner loop compares adjacent elements and swaps them if they are in the wrong order (i.e., if the current element is greater than the next element).
4. 	Swapping: If a swap is necessary, a temporary variable (temp) is used to hold the value of the current element while it is being swapped with the next element.
5. 	Sorting Completion: After the outer loop completes, the array is sorted in ascending order. 
	The function does not return a value, as it modifies the array in place.

Initialization: The variables i, j, and temp are declared. i is used for the outer loop, while j is for the inner loop. temp is a temporary variable used for swapping elements.
Outer Loop: The outer loop runs until i reaches size - 1, ensuring that all elements are processed.
Inner Loop: The inner loop runs through the unsorted portion of the array. It compares each element with the next one.
Swapping Logic: If the current element is greater than the next, they are swapped using the temp variable.
Completion: The process continues until the entire array is sorted.
 
 */