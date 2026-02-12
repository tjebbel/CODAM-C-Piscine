/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 18:48:51 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 17:38:25 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126) // check if current character is non-printable
			return (0);
		i++;
	}
	return (1);
}

/* 
#include <stdio.h>

int	main(void)
{
	char	str1[] = "aB3/!'.;Ko+ ";
	char	str2[] = "aB3/!'.;Ko±";

	printf("%s is printable? %d\n", str1, ft_str_is_printable(str1));	
	printf("%s is printable? %d\n", str2, ft_str_is_printable(str2));
}
 */

/* 
The function ft_str_is_printable takes a string (a pointer to a character) as an argument and checks if all characters in the string are printable characters.
It iterates through the string using a while loop until it reaches the null terminator ('\0').
In each iteration, it checks if the current character is not a printable character by verifying if it is outside the range of ASCII values from 32 to 126.
If it finds a character that is not printable, it returns 0, indicating that the string does not consist entirely of printable characters.
If the loop completes without finding any non-printable characters, it returns 1, indicating that the string is composed entirely of printable characters.
In the main function, we declare two strings str1 and str2. We initialize str1 with "aB3/!'.;Ko+ ", which consists entirely of printable characters, and str2 with "aB3/!'.;Ko±", which contains a non-printable character ('±').
We then call ft_str_is_printable with each string and print the results to verify that str1 returns 1 (true) and str2 returns 0 (false).
The expected output will be: | aB3/!'.;Ko+  is printable? 1 | aB3/!'.;Ko± is printable? 0
*/