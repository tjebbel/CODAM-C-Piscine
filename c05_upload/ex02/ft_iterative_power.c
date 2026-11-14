/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 18:13:48 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 18:13:03 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	

// assignment: Loop iteratively, with the conventional mathematical theory

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0) // check for negative power
		return (0);
	else if (power == 0) // zero power means 1
		return (1);
	while (power > 0) // loop until power is reduced to zero
	{
		result *= nb; // multiply result by base
		power--; // decrement power
	}
	return (result);
}

/* int main(void)
{
	int nb;
	int power;

	nb = 2;
	power = 3;
	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
	return (0);
} */

/* 
The function ft_iterative_power calculates the result of raising an integer nb to the power of another integer power using an iterative approach.
It first initializes a variable result to 1, which will be used to store the intermediate results of the power calculation.
The function checks if power is less than 0. If it is, the function returns 0, as negative powers are not handled in this implementation.
If power is 0, the function returns 1, since any number raised to the power of 0 is defined to be 1.
For positive values of power, the function enters a while loop that continues as long as power is greater than 0. 
Inside the loop, it multiplies result by nb and then decrements power by 1.
This process continues until power is reduced to 0, at which point result contains the value of nb raised to the original power.
Finally, the function returns the value of result, which is the result of nb raised to the power of power.
In the main function, we declare two integer variables nb and power, and set them to 2 and 3, respectively. 
We then call ft_iterative_power with nb and power as arguments and print the result in the format "2^3 = 8".
The expected output will be: 2^3 = 8
*/
