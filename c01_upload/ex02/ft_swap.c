/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 14:30:46 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:23:11 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// Assignment: Swap the temporary variable with the help of pointers

void	ft_swap(int *a, int *b)
{
	int	backup;

	backup = *a;
	*a = *b;
	*b = backup;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 9;
	printf("%d\n", x);
	printf("%p\n", &x);
	printf("%d\n", y);
	printf("%p\n", &y);
	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}*/

/*
The function ft_swap takes two integer pointers a and b as arguments and swaps the values they point to.
It uses a temporary variable backup to store the value pointed to by a, then assigns the value pointed to by b to the location pointed to by a, and finally assigns the value stored in backup to the location pointed to by b.
In the main function, we declare two integer variables x and y, and initialize them with the values 1 and 9, respectively. We then print their values and memory addresses before calling ft_swap to swap their values. 
After the swap, we print their values again to verify that they have been swapped successfully. Finally, we return 0 to indicate that the program finished successfully.
*/