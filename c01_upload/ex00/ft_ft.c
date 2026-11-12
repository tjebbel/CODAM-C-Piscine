/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 14:29:46 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:15:04 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// Assignment:

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* int	main(void)
{
	int	x;
	int	*ptr;

	ptr = &x;
	ft_ft(ptr);
	printf("%d", x);
	return (0);
}*/

/* 
The function ft_ft takes a pointer to an integer as an argument and sets the value of the integer pointed to by nbr to 42.
In the main function, we declare an integer variable x and a pointer ptr that points to x. We then call ft_ft with ptr as the argument, which sets the value of x to 42. 
Finally, we print the value of x to verify that it has been correctly set to 42.
*/
