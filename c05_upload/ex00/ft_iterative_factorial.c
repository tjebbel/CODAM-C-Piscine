/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 18:13:40 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 18:10:20 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	

// assignment:

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0); // undefined for negative numbers
	if (nb == 0)
		return (1); // by convention 0! is 1
	result = 1; // initialize to 1
	while (nb > 1) 
	{
		result *= nb; // multiply result by current nb
		nb--; // decrement nb
	}
	return (result); // return computed factorial
}

/* int main(void)
{
	int nb;

	nb = 5;
	printf("%d! = %d\n", nb, ft_iterative_factorial(nb));
	return (0);
}
*/

/* 
The function ft_iterative_factorial calculates the factorial of a given integer nb using an iterative approach.
It first checks if nb is less than 0. If it is, the function returns 0, as factorials are not defined for negative numbers.
If nb is 0, the function returns 1, since the factorial of 0 is defined to be 1.
For positive values of nb, the function initializes a variable result to 1, which will be used to store the intermediate results of the factorial calculation.
It then enters a while loop that continues as long as nb is greater than 1. Inside the loop, it multiplies result by nb and then decrements nb by 1.
This process continues until nb is reduced to 1, at which point result contains the value of nb! (the factorial of nb).
Finally, the function returns the value of result, which is the factorial of the original input nb.
In the main function, we declare an integer variable nb and set it to 5. We then call ft_iterative_factorial with nb as an argument and print the result in the format "5! = 120".
The expected output will be: 5! = 120
*/