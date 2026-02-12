/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 16:00:30 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:31:07 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/* 
#include <stdio.h>

int	main(void)
{
	char	*str1 = "WORDSANDLETTERS";
	char	*str2 = "WORDSANDlETTERS";

	printf("%s is uppercase? %d\n", str1, ft_str_is_uppercase(str1));	
	printf("%s is uppercase? %d\n", str2, ft_str_is_uppercase(str2));
}
 */

/* 
The function ft_str_is_uppercase takes a string (a pointer to a character) as an argument and checks if all characters in the string are uppercase letters (from 'A' to 'Z').
It iterates through the string using a while loop until it reaches the null terminator ('\0').
In each iteration, it checks if the current character is not an uppercase letter by verifying if it is outside the range of 'A' to 'Z'.
If it finds a character that is not an uppercase letter, it returns 0, indicating that the string does not consist entirely of uppercase letters.
If the loop completes without finding any non-uppercase characters, it returns 1, indicating that the string is composed entirely of uppercase letters.
In the main function, we declare two strings str1 and str2. We initialize str1 with "WORDSANDLETTERS", which consists entirely of uppercase letters, and str2 with "WORDSANDlETTERS", which contains a lowercase letter ('l').
We then call ft_str_is_uppercase with each string and print the results to verify that str1 returns 1 (true) and str2 returns 0 (false).
The expected output will be: | WORDSANDLETTERS is uppercase? 1 | WORDSANDlETTERS is uppercase? 0
*/