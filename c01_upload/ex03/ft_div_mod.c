/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 14:31:02 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:23:57 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// Assignment: Give two values back through output pointers

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 17;
	y = 5;
	ft_div_mod(x, y, &div, &mod);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}*/

/*
The function ft_div_mod takes two integers a and b, and two integer pointers div and mod as arguments. 
It calculates the integer division of a by b and stores the result in the location pointed to by div, and calculates the modulus of a by b and stores the result in the location pointed to by mod.
In the main function, we declare two integer variables x and y, and two integer variables div and mod to store the results of the division and modulus operations. We initialize x with 17 and y with 5.
We then call ft_div_mod with x, y, and the addresses of div and mod as arguments. 
After the function call, div will contain the result of 17 divided by 5 (which is 3), and mod will contain the result of 17 modulus 5 (which is 2).
Finally, we print the values of x, y, div, and mod to verify that the function works correctly. 
The expected output will be: 17 5 3 2
*/
