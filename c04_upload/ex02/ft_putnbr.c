/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 20:05:56 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 18:00:58 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// assignment: How to use recursion, deal with negative numbers trap(s) like the overflow at INT_MIN

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10); //  The function calls itself with n / 10, effectively reducing the number by one digit.
		n %= 10; // continue if modulo is larger than 10
	}
	ft_putchar(n + '0'); // convert to character
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
It first declares a long integer variable n and assigns it the value of nb. 
This is done to handle the case when nb is the minimum integer value (-2147483648), which cannot be represented as a positive integer in a 32-bit signed integer.
The function checks if n is negative. If it is, it prints a '-' character to indicate that the number is negative and then negates n to make it positive for further processing.
Next, the function checks if n is greater than 9. If it is, it means that n has more than one digit. 
In this case, it recursively calls ft_putnbr with n divided by 10 to print the digits before the last digit. 
After the recursive call, it updates n to be the remainder of n divided by 10 to isolate the last digit.
Finally, it prints the last digit of n by adding '0' to convert it from an integer to its corresponding ASCII character.
In the main function, we call ft_putnbr with various test cases to verify that it correctly prints the integer values, including positive numbers, zero, and negative numbers.
The expected output will be:
42 2147483647 0 -2147483648
*/