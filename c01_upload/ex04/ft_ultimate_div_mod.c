/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 14:31:16 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 17:06:19 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// Assignment: Calculate both results before overwriting the *a, check the order(!)

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 3;
	printf("Before: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("After: x = %d, y = %d\n", x, y);
	return (0);
}*/

/* 
The function ft_ultimate_div_mod takes two integer pointers a and b as arguments.
It calculates the integer division of the value pointed to by a, by the value pointed to by b and stores the result in a temporary variable div.
It also calculates the modulus of the value pointed to by a, by the value pointed to by b and stores the result in a temporary variable mod.
Then, it updates the value pointed to by a to be the result of the division (div) and updates the value pointed to by b to be the result of the modulus (mod).
In the main function, we declare two integer variables x and y, and initialize them with the values 10 and 3, respectively. 
We print their values before calling ft_ultimate_div_mod to show the initial state.
We then call ft_ultimate_div_mod with the addresses of x and y as arguments, which will update x to be the result of 10 divided by 3 (which is 3) and y to be the result of 10 modulus 3 (which is 1).
Finally, we print their values after the function call to verify that they have been updated correctly.
The expected output will be: | Before: x = 10, y = 3 | After: x = 3, y = 1
*/