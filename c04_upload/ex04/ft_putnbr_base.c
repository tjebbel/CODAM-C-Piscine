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

// assignment: check base (more than 2 symbols, no doubles, no +/-)
// negative numbers get - and an invalid base results in no print
// use long for INT_MIN, print -, recursive output with / len and % len

void	ft_base_len(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if ( i < 2)
		return (0);
	return (i);
}

void	ft_put_in_base (long n, char *base, int len)
{
	if ( n >= len)
		ft_put_in_base(n / len, base, len);
	write(1, &base[n % len], 1);
}

void	ft_putnbr_base (int nb, char *base)
{
	int len;
	long n;

	len = ft_base_len(base)
	if (len == 0)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	ft_put_inbase(n, base, len);
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