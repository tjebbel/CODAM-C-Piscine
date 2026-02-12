/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 13:51:27 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 13:55:28 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0' - 1; // Initialize first to '0' - 1
	while (++first <= '9') // Loop through first digit
	{
		second = first; // Initialize second to first
		while (++second <= '9') // Loop through second digit
		{
			third = second + 1; // Initialize third to one more than second
			while (third <= '9') // Loop through third digit
			{
				ft_putchar(first); // Print first digit
				ft_putchar(second); // Print second digit
				ft_putchar(third); // Print third digit
				if (first != '7' || second != '8' || third != '9') // Check for last combination
				{
					ft_putchar(','); // Print comma
					ft_putchar(' '); // Print space
				}
				third++; // Increment third digit
			}
		}
	}
}

	//TEST CASE
int	main(void)
{
	ft_print_comb();
	return (0);
}


/* 
The function ft_print_comb is intended to print all possible combinations of three different digits in ascending order, separated by commas and spaces.

In the main function, we call ft_print_comb to execute the function and print the combinations.
Finally, we return 0 to indicate that the program finished successfully.
*/