/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 15:59:15 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:30:42 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str1 = "wordsandletters";
	char	*str2 = "wordsandlEtters";

	printf("%s is lowercase? %d\n", str1, ft_str_is_lowercase(str1));	
	printf("%s is lowercase? %d\n", str2, ft_str_is_lowercase(str2));
} */

/* 
The function ft_str_is_lowercase takes a string (a pointer to a character) as an argument and checks if all characters in the string are lowercase letters (from 'a' to 'z').
It iterates through the string using a while loop until it reaches the null terminator ('\0').
In each iteration, it checks if the current character is not a lowercase letter by verifying if it is outside the range of 'a' to 'z'.
If it finds a character that is not a lowercase letter, it returns 0, indicating that the string does not consist entirely of lowercase letters.
If the loop completes without finding any non-lowercase characters, it returns 1, indicating that the string is composed entirely of lowercase letters.
In the main function, we declare two strings str1 and str2. We initialize str1 with "wordsandletters", which consists entirely of lowercase letters, and str2 with "wordsandlEtters", which contains an uppercase letter ('E').
We then call ft_str_is_lowercase with each string and print the results to verify that str1 returns 1 (true) and str2 returns 0 (false).
The expected output will be: | wordsandletters is lowercase? 1 | wordsandlEtters is lowercase? 0
*/