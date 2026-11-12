/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 13:47:10 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 17:14:48 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Assignment: Swap the mirrored elements (i en size-1-i) u
// Until you reach the middle as then all will be in the right order

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2) // This loop will continue as long as i is less than half the size of the array.
	// This is because we only need to iterate through the first half of the array to swap elements with their corresponding counterparts in the second half.
	{
		temp = tab[i]; // stores current element in temp
		tab[i] = tab[size - 1 - i]; // assigns the value from the end of the array to the current position.
		tab[size - 1 - i] = temp; // places the value stored in temp into the corresponding position from the end of the array.
		i++;
	}
}

/* int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = sizeof(tab) / sizeof(tab[0]);
	int	i;

	printf("Original array: ");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	ft_rev_int_tab(tab, size);

	printf("Reversed array: ");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return (0);
}
 */

/* 
The ft_rev_int_tab function is a concise and efficient way to reverse an integer array in C. 
By utilizing pointers and a simple swapping mechanism, it achieves the desired outcome without requiring additional memory. 
Understanding such fundamental operations is crucial for any programmer looking to enhance their skills in C programming. 

*/ 