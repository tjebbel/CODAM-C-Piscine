/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 18:14:01 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 18:18:06 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	

// assignment: test the section up until the square root of n, if nothing found it is a prime number as it is not divisible by any other number than itself and 1

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2; // Start checking for factors from 2
	while (i * i <= nb)
	{ // If nb is divisible by i, it is not prime
		if (nb % i == 0) 
			return (0);
		i++;
	}
	return (1); // If no divisors found, nb is prime
}

/* int main(void)
{
	int nb;

	nb = 29;
	if (ft_is_prime(nb))
		printf("%d is a prime number.\n", nb);
	else
		printf("%d is not a prime number.\n", nb);
	return (0);
} 
*/

/* 
The function ft_is_prime checks if a given integer nb is a prime number. It returns 1 if nb is prime and 0 otherwise.
It first checks if nb is less than or equal to 1. If it is, the function returns 0, since prime numbers are defined as greater than 1.
Next, it initializes an integer variable i to 2, which will be used to check for divisibility.
The function enters a while loop that continues as long as i * i is less than or equal to nb. 
This is an optimization that allows us to check for factors only up to the square root of nb.
Inside the loop, it checks if nb is divisible by i (i.e., if nb % i == 0). If it is, the function returns 0, since nb cannot be prime if it has a divisor other than 1 and itself.
If nb is not divisible by i, the loop continues by incrementing i by 1.
If the loop completes without finding any divisors, it means that nb is prime, and the function returns 1.
In the main function, we declare an integer variable nb and set it to 29. We then call ft_is_prime with nb as an argument and print whether nb is a prime number or not.
The expected output will be: 29 is a prime number.
*/