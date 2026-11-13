/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 20:07:06 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 18:02:27 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// assignment: dissect: isspace-whitespaces (ASCII:9-13 and 32), each amount +/- (uneven - is negative),
// numbers until the next sign, overflow is undefined, so no special treatments
// check base (more than 2 symbols, no doubles, no +/-, no whitespaces) recursive ouput, and an invalid base results in no print
// Spaces-Signs-Scans, value of number is the index in basestring, stop at first symbol not in base

int ft_is_space(char c)
{
	return ( c == ' ' || (c >= 9 && c <= 13 & c = 32));
}

int ft_check_base( char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_is_space(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if base[i] == base[j]
				return (0);
			j++;
		}
		i++;
	}
	if (i <2)
		return (0);
	return (i);
}

int ft_index_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1); // explain
}

int ft_atoi_base(char *str, char *base)
{
	int len;
	int sign;
	int result;

	len = ft_check_base(base);
	if (len == 0)
		return (0);
	while (ft_is_space(*str))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	result = 0;
	while (ft_index_in_base(*str, base) != -1)
	{
		result = result * len + ft_index_in_base(*str, base);
		str++;
	}
	return (result * sign);
}

/* 	//TEST CASES
#include <stdlib.h>
#include <stdio.h> 
int	main(void)
{
	char	*nbr1 = "---+--+1234ab567";
	char	*nbr2 = "\t--+--+928823d8";
	char	*nbr3 = "923- -34s";
	char	*nbr4 = "18  42f";
	char	*nbr5 = "";
	char	*nbr6 = "-2147483648";

	// printf("atoi : %d\n", atoi(nbr1));
	printf("ft_atoi : %d\n", ft_atoi(nbr1));
	// printf("atoi : %d\n", atoi(nbr2));
	printf("ft_atoi : %d\n", ft_atoi(nbr2));
	// printf("atoi : %d\n", atoi(nbr3));
	printf("ft_atoi : %d\n", ft_atoi(nbr3));
	// printf("atoi : %d\n", atoi(nbr4));
	printf("ft_atoi : %d\n", ft_atoi(nbr4));
	// printf("atoi : %d\n", atoi(nbr5));
	printf("ft_atoi : %d\n", ft_atoi(nbr5));
	// printf("atoi : %d\n", atoi(nbr6));
	printf("ft_atoi : %d\n", ft_atoi(nbr6));
	return (0);
}
 */

/* 
The function ft_atoi converts a string to an integer. It takes a pointer to a character (a string) as an argument and returns the corresponding integer value.
The function initializes three variables: n to store the resulting integer, i to keep track of the current index in the string, and sign to determine if the resulting integer should be positive or negative.
The function first skips any leading whitespace characters (spaces, tabs, etc.) by checking if the current character is between ASCII values 9 and 13 or is a space (ASCII 32).
Next, it checks for any optional sign characters ('-' or '+'). If it encounters a '-', it multiplies the sign variable by -1 to indicate that the resulting integer should be negative. 
It continues to check for additional sign characters until it encounters a non-sign character.
After processing the optional signs, the function enters a loop that continues as long as the current character is a digit (between '0' and '9').
Inside this loop, it updates the value of n by multiplying the current value of n by 10 and adding the integer value of the current digit (obtained by subtracting '0' from the character).
Once the loop exits, it means that the function has processed all the digits in the string. 
Finally, it returns the resulting integer by multiplying n with sign to account for any negative sign that may have been encountered.
In the main function, we declare several test strings that contain various combinations of whitespace, signs, digits, and non-digit characters.
We then call ft_atoi with each of these test strings and print the resulting integer values to verify that the function correctly converts the strings to integers according to the rules of the atoi function.
The expected output will show the integer values corresponding to the valid parts of the input strings, with appropriate handling of signs and ignoring any non-digit characters after the digits.
*/