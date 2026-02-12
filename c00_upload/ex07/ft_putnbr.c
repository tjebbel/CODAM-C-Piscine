/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 20:05:56 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 13:54:59 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n; // Use long to handle potential overflow

	n = nb; // Assign the input number to n
    if (n < 0) // Check if the number is negative
	{
		ft_putchar('-'); // If the number is negative, we print a '-' character to indicate that the number is negative. This is done before converting n to positive so that the sign is correctly displayed in the output.
		n = -n; // We convert n to positive by negating it. This allows us to handle the number as a positive value for further processing, which simplifies the logic for printing the digits. This is especially important for the edge case of the minimum integer value (-2147483648), which cannot be represented as a positive integer in a 32-bit signed integer, but can be handled correctly when using a long int.
	}
	if (n > 9)
	{
		ft_putnbr(n / 10); // If n is greater than 9, it means that n has more than one digit. In this case, we recursively call ft_putnbr with n divided by 10 to print the digits before the last one. This allows us to print all digits of the number in the correct order.
		n %= 10; // After the recursive call, we update n to be the remainder of n divided by 10 to isolate the last digit. This allows us to print the last digit of the number after all the preceding digits have been printed by the recursive calls.
	}
	ft_putchar(n + '0'); // // Print the last digit as a character
}

/* 	//TEST CASES
int	main(void)
{
	ft_putnbr(42);
	ft_putchar(' ');
	ft_putnbr(2147483647);
	ft_putchar(' ');
	ft_putnbr(-0);
	ft_putchar(' ');
	ft_putnbr(-2147483648);
	return (0);
}
 */

/*
The function ft_putnbr takes an integer nb as an argument and prints it to the standard output. 
It first converts the integer to a long int to handle the edge case of the minimum integer value.
If the number is negative, it prints a '-' character and converts the number to positive. 
Then, if the number is greater than 9, it recursively calls ft_putnbr with the quotient of n divided by 10 to print the digits before the last one, and updates n to be the remainder of n divided by 10 to print the last digit.
Finally, it prints the last digit by converting it to its corresponding ASCII character using '0' as an offset.
In the main function, we test ft_putnbr with various integers, including positive, negative, and edge cases.
The expected output will be the integer values printed to the standard output, separated by spaces.
For example, the output for the test cases will be:
42 2147483647 0 -2147483648
*/