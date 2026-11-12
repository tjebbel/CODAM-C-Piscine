/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 20:05:17 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:26:33 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// Assignment: count the number of signs/values and exclude the end ('\0')

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "World ";
	char	str3[] = "";

	printf("'%s' has %d characters\n", str1, ft_strlen(str1));
	printf("'%s' has %d characters\n", str2, ft_strlen(str2));
	printf("'%s' has %d characters\n", str3, ft_strlen(str3));
	return (0);
}
*/

/* 
The function ft_strlen takes a string (a pointer to a character) as an argument and returns the number of characters in the string.
It iterates through the string, counting each character until it reaches the null terminator ('\0').
The function returns the count of characters in the string.
*/