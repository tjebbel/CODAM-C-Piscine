/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 18:13:51 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:28:12 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	

// assignment: Loop recursively, with the conventional mathematical theory

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/* int main(void)
{
	int nb;
	int power;

	nb = 3;
	power = 4;
	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
	return (0);
} */
/* 
The function ft_recursive_power calculates the result of raising an integer nb to the power of another integer power using a recursive approach.
It first checks if power is less than 0. If it is, the function returns 0, as negative powers are not handled in this implementation.
If power is 0, the function returns 1, since any number raised to the power of 0 is defined to be 1.
For values of power greater than 0, the function returns the product of nb and the result of calling ft_recursive_power with nb and power - 1. 
This is the recursive call that breaks down the problem into smaller instances until it reaches the base case (power == 0).
*/