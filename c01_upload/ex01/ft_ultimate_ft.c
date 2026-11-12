/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_ft.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 14:30:34 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:15:25 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// Assignment: Create a nine level referenced pointer, so that x is a pointer to a pointer (nine times)

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*int	main(void)
{
	int	x;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	ptr1 = &x;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);
	printf("%d", x);
	return (0);
}*/

/*
The function ft_ultimate_ft takes a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to an integer as an argument and sets the value of the integer pointed to by nbr to 42.
In the main function, we declare an integer variable x and a series of pointers that point to each other, ultimately pointing to x. 
We then call ft_ultimate_ft with the pointer to the pointer to the pointer to the pointer to the pointer to the pointer to the pointer to the pointer to the integer (ptr9) as the argument, which sets the value of x to 42. 
Finally, we print the value of x to verify that it has been correctly set to 42.
*/
