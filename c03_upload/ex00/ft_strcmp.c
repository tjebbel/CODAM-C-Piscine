/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 19:58:04 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:00:27 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "words";
	char	*s2 = "Words";

	printf("Original: %d\n", strcmp(s1, s2));
	printf("Mine: %d\n", ft_strcmp(s1, s2));
}
 */

/*
The function ft_strcmp compares two strings, s1 and s2, character by character.
It initializes an integer variable i to 0, which will be used as an index to iterate through the characters of both strings.
The function enters a while loop that continues as long as the characters at index i of both strings are equal and neither of the characters is the null terminator ('\0').
Inside the loop, it increments the index i to move to the next character in both strings.
Once the loop exits, it means that either a difference was found between the two strings or one of the strings has reached its end.
The function then returns the difference between the ASCII values of the characters at index i of both strings (s1[i] - s2[i]). 
This return value will be zero if the strings are identical, a positive value if s1 is greater than s2, and a negative value if s1 is less than s2, based on the ASCII values of the first differing characters.
In the main function, we declare two strings s1 and s2 with the values "words" and "Words", respectively.
We then print the result of the original strcmp function and our custom ft_strcmp function to compare the two strings.
The expected output will show that the original strcmp and our ft_strcmp return the same value, which indicates that 'w' (ASCII 119) is greater than 'W' (ASCII 87) by 32.
*/
