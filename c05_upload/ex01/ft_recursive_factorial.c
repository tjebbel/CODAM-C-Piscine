/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 18:13:44 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:27:16 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	

// assignment: Loop recursively, with the conventional mathematical theory

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* int main(void)
{
	int nb;

	nb = 5;
	printf("%d! = %d\n", nb, ft_recursive_factorial(nb));
	return (0);
}

 */
/* 
The function ft_recursive_factorial calculates the factorial of a given integer nb using a recursive approach.
It first checks if nb is less than 0. If it is, the function returns 0, as factorials are not defined for negative numbers.
If nb is 0 or 1, the function returns 1, since the factorial of both 0 and 1 is defined to be 1.
For values of nb greater than 1, the function returns the product of nb and the result of calling ft_recursive_factorial with nb - 1. 
This is the recursive call that breaks down the problem into smaller instances until it reaches the base case (nb == 0 or nb == 1).
The recursion continues until it reaches the base case, at which point it starts returning values back up the call stack, multiplying them together to compute the final result of nb!.
In the main function, we declare an integer variable nb and set it to 5. We then call ft_recursive_factorial with nb as an argument and print the result in the format "5! = 120".
The expected output will be: 5! = 120
*/