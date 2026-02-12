/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 13:51:46 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 13:55:13 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + '0'); // Print the first digit of 'a'
			ft_putchar(a % 10 + '0'); // Print the second digit of 'a'
			ft_putchar(' ');           // Print a space
			ft_putchar(b / 10 + '0'); // Print the first digit of 'b'
			ft_putchar(b % 10 + '0'); // Print the second digit of 'b'
			if (a != 98 || b != 99)    // Check to avoid trailing comma
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

/* 	//TEST CASE
int	main(void)
{	ft_print_comb2();
	return (0);
}
 */

/*
The function ft_print_comb2 is designed to print all possible combinations of two different two-digit numbers in ascending order, separated by a space and a comma.
It uses two nested while loops to iterate through the numbers from 0 to 99. 
The outer loop iterates through the first number (a) from 0 to 98, while the inner loop iterates through the second number (b) starting from a + 1 to 99, ensuring that b is always greater than a.
In each iteration of the inner loop, the function prints the two numbers in the required format.
The numbers are printed using the ft_putchar function, which converts the digits to their corresponding ASCII characters by adding '0' to the integer value.
After printing each combination, the function checks if it is not the last combination (98 99) and if so, it prints a comma and a space to separate the combinations.
In the main function, we call ft_print_comb2 to execute the function and print all the combinations. Finally, we return 0 to indicate that the program finished successfully.
*/
 