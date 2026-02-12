/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 15:55:37 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 17:37:40 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z')))  // Check if the current character is not an alphabet, return 0 if non-alphabetic
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str1 = "abc";
	char	*str2 = "1s ";

	printf("%s is alpha? %d\n", str1, ft_str_is_alpha(str1));	
	printf("%s is alpha? %d\n", str2, ft_str_is_alpha(str2));	
} */

/*
The function ft_str_is_alpha takes a string (a pointer to a character) as an argument and checks if all characters in the string are alphabetic (either uppercase or lowercase letters).
It iterates through the string using a while loop until it reaches the null terminator ('\0').
In each iteration, it checks if the current character is not an alphabetic character by verifying if it is outside the ranges of 'a' to 'z' and 'A' to 'Z'.
If it finds a character that is not alphabetic, it returns 0, indicating that the string does not consist entirely of alphabetic characters.
If the loop completes without finding any non-alphabetic characters, it returns 1, indicating that the string is composed entirely of alphabetic characters.
In the main function, we declare two strings str1 and str2. We initialize str1 with "abc", which consists entirely of alphabetic characters, and str2 with "1s ", which contains a non-alphabetic character ('1' and space).
We then call ft_str_is_alpha with each string and print the results to verify that str1 returns 1 (true) and str2 returns 0 (false).
The expected output will be: | abc is alpha? 1 | 1s  is alpha? 0
*/