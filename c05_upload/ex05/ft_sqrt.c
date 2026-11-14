/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 18:13:58 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 18:15:27 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	

// assignment: only give the roots for full squares, otherwise zero, loop using i <= nb / i because ther will be overflow at INT_MAX - because 46341 * 46341 is larger than nb = 2147483647


int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i < nb) // Loop until i squared is less than nb
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/* int main(void)
{
	int nb;

	nb = 36;
	printf("The square root of %d is %d\n", nb, ft_sqrt(nb));
	return (0);
}

 */
/* 
The function ft_sqrt calculates the integer square root of a given integer nb. If nb is not a perfect square, it returns 0.
It first checks if nb is less than 0. If it is, the function returns 0, as square roots are not defined for negative numbers in this context.
Next, it initializes an integer variable i to 0, which will be used to find the integer square root of nb.
The function enters a while loop that continues as long as i * i is less than nb. Inside the loop, it increments i by 1.
This loop effectively finds	the smallest integer i such that i * i is greater than or equal to nb.
After the loop, it checks if i * i is equal to nb. If it is, then i is the integer square root of nb, and the function returns i.
If i * i is not equal to nb, it means that nb is not a perfect square, and the function returns 0.
In the main function, we declare an integer variable nb and set it to 36. We then call ft_sqrt with nb as an argument and print the result in the format "The square root of 36 is 6".
*/