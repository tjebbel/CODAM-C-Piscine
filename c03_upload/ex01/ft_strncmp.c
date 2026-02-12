/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 19:58:22 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:00:59 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* #include <stddef.h>
#include <stdint.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main()
{
	char s1[] = "Word";
	char s2[] = "word";
	int n = 2;

	printf("Original: %d\n", strncmp(s1, s2, n));
	printf("Mine: %d\n", ft_strncmp(s1, s2, n));
}
 */

/*
The function ft_strncmp compares up to n characters of two strings, s1 and s2.
It initializes an unsigned integer variable i to 0, which will be used as an index to iterate through the characters of both strings.
The function enters a while loop that continues as long as i is less than n.
Inside the loop, it checks if the characters at index i of both strings are different or if the character at index i of s1 is the null terminator ('\0').
If either of these conditions is true, it means that a difference has been found between the two strings or that s1 has reached its end.
In that case, the function returns the difference between the ASCII values of the characters at index i of both strings (s1[i] - s2[i]).
If the characters are the same and s1 has not reached its end, the loop continues to the next character by incrementing i.
If the loop completes without finding any differences or reaching the end of s1, it means that the first n characters of both strings are identical, and the function returns 0.
In the main function, we declare two strings s1 and s2 with the values "Word" and "word", respectively, and an integer n with the value 2.
We then print the result of the original strncmp function and our custom ft_strncmp function to compare the first n characters of the two strings.
The expected output will show that the original strncmp and our ft_strncmp return the same value, which indicates that 'W' (ASCII 87) is less than 'w' (ASCII 119) by 32, resulting in a negative value.
*/
