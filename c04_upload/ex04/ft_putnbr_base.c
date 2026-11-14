/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnb_base.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 20:07:06 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 18:02:27 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
Base: A numeral system's base indicates how many unique digits, including zero, are used to represent numbers. For example, base 10 uses digits 0-9, while base 2 uses 0 and 1.
Validation: The base must be validated to ensure it contains more than two unique symbols, does not include '+' or '-', and has no duplicate characters.
Negative Numbers: The program handles negative integers by printing a '-' sign before the number.
Recursion: The conversion process uses recursion to break down the number into manageable parts for printing.
*/

// assignment: check base (more than 2 symbols, no doubles, no +/-)
// negative numbers get - and an invalid base results in no print
// use long for INT_MIN, print -, recursive output with / len and % len

void	ft_base_len(char *base) // Validates the base and returns its length.
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-') // invalid character check
			return (0);
		j = i + 1;
		while (base[j]) // check duplicates
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if ( i < 2) // Ensure the base has at least two unique symbols.
		return (0);
	return (i); // Return the length of the valid base.
}

void	ft_put_in_base (long n, char *base, int len) // Recursively prints the number in the specified base.
{
	if ( n >= len) // If n is greater than or equal to the base length, continue recursion.
		ft_put_in_base(n / len, base, len);
	write(1, &base[n % len], 1); // Print the corresponding character for the current digit.
}

void	ft_putnbr_base (int nb, char *base) // Main function that prepares the number for conversion and handles negative values.
{
	int len;
	long n;

	len = ft_base_len(base) // Validate the base and get its length.
	if (len == 0) // If the base is invalid, exit the function.
		return ;
	n = nb; // Use a long variable to handle INT_MIN correctly.
	if (n < 0) // negative number check
	{
		write(1, "-", 1); // print negative sign
		n = -n;
	}
	ft_put_inbase(n, base, len); / Call the recursive function to print the number.
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
ft_base_len:
This function checks the validity of the base string.
It ensures that the base contains no '+' or '-' characters and that all symbols are unique.
If the base is valid and contains at least two symbols, it returns the length of the base; otherwise, it returns 0.

ft_put_in_base:
This function takes a long integer n, a base string, and the length of the base.
It recursively divides n by the base length until n is less than the base length, printing the corresponding character from the base string for each remainder.

ft_putnbr_base:
This is the main function that prepares the integer for conversion.
It first checks the validity of the base using ft_base_len.
If the number is negative, it prints a '-' sign and converts the number to positive.
Finally, it calls ft_put_in_base to perform the actual conversion and printing.
*/