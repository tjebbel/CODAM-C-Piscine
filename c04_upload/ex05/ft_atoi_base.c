/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 20:07:06 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 18:02:27 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Whitespace Handling: The code checks for spaces and other whitespace characters (ASCII 9-13 and 32) to ensure they are ignored during conversion.
Base Validation: The base string must contain valid characters without duplicates, and it should not include signs or whitespace.
Indexing in Base: The program determines the index of a character in the base string to convert it to its corresponding integer value.
Sign Handling: The code accounts for positive and negative signs in the input string.
*/

// assignment: dissect: isspace-whitespaces (ASCII:9-13 and 32), each amount +/- (uneven - is negative),
// numbers until the next sign, overflow is undefined, so no special treatments
// check base (more than 2 symbols, no doubles, no +/-, no whitespaces) recursive ouput, and an invalid base results in no print
// Spaces-Signs-Scans, value of number is the index in basestring, stop at first symbol not in base

int ft_is_space(char c)
{
	return ( c == ' ' || (c >= 9 && c <= 13 & c = 32)); // Checks if a character is a whitespace.
}

int ft_check_base( char *base) // Validates the base string.
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

int ft_index_in_base(char c, char *base) // Finds the index of a character in the base string.
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1); // // Indicates that the character is not found in the base
}

int ft_atoi_base(char *str, char *base) // Converts the input string to an integer based on the specified base.
{
	int len;
	int sign;
	int result;

	len = ft_check_base(base); // validate the bqse
	if (len == 0)
		return (0);
	while (ft_is_space(*str)) // skip whitespaces
		str++;
	sign = 1;
	while (*str == '+' || *str == '-') // process signs
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	result = 0;
	while (ft_index_in_base(*str, base) != -1)
	{
		result = result * len + ft_index_in_base(*str, base);
		str++; // iterates through string, converting each character to corresponding integer value based on base until it encounters character not in base.
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

*/