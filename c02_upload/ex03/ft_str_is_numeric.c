/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 15:57:20 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 17:37:59 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9')) // check if current character is a number
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str1 = "012356789";
	char	*str2 = "o12356789";

	printf("%s is numeric? %d\n", str1, ft_str_is_numeric(str1));	
	printf("%s is numeric? %d\n", str2, ft_str_is_numeric(str2));
} */

/*
The function ft_str_is_numeric takes a string (a pointer to a character) as an argument and checks if all characters in the string are numeric (digits from '0' to '9').
It iterates through the string using a while loop until it reaches the null terminator ('\0').
In each iteration, it checks if the current character is not a numeric character by verifying if it is outside the range of '0' to '9'.
If it finds a character that is not numeric, it returns 0, indicating that the string does not consist entirely of numeric characters.
If the loop completes without finding any non-numeric characters, it returns 1, indicating that the string is composed entirely of numeric characters.
In the main function, we declare two strings str1 and str2. We initialize str1 with "012356789", which consists entirely of numeric characters, and str2 with "o12356789", which contains a non-numeric character ('o').
We then call ft_str_is_numeric with each string and print the results to verify that str1 returns 1 (true) and str2 returns 0 (false).
The expected output will be: | 012356789 is numeric? 1 | o12356789 is numeric? 0
*/