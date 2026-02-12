/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 15:59:15 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:32:30 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/* 
	//TEST CASES
#include <stdio.h>

int	main(void)
{
	char	str1[] = "HELLO WORLD!";
	char	str2[] = "hello world!";
	char	str3[] = "Hello World";
	char	str4[] = "hell0 w0rld";

	printf("\"%s\" upcased is ", str1);
	printf("\"%s\"\n", ft_strupcase(str1));
	printf("\"%s\" upcased is ", str2);
	printf("\"%s\"\n", ft_strupcase(str2));
	printf("\"%s\" upcased is ", str3);
	printf("\"%s\"\n", ft_strupcase(str3));
	printf("\"%s\" upcased is ", str4);
	printf("\"%s\"\n", ft_strupcase(str4));
}
 */

 /* 
The function ft_strupcase takes a string (a pointer to a character) as an argument and converts all lowercase letters in the string to uppercase.
It iterates through the string using a while loop until it reaches the null terminator ('\0').
In each iteration, it checks if the current character is a lowercase letter by verifying if its ASCII value is between 97 ('a') and 122 ('z').
If it finds a lowercase letter, it converts it to uppercase by subtracting 32 from its ASCII value (since the difference between lowercase and uppercase letters in the ASCII table is 32).
After processing all characters in the string, the function returns a pointer to the modified string, which now contains all uppercase letters where there were lowercase letters before.
In the main function, we declare four strings str1, str2, str3, and str4 with different combinations of uppercase and lowercase letters. 
We then call ft_strupcase with each string and print the results to verify that all lowercase letters have been converted to uppercase while non-alphabetic characters remain unchanged.
The expected output will be: "HELLO WORLD!" upcased is "HELLO WORLD!" | "hello world!" upcased is "HELLO WORLD!" | "Hello World" upcased is "HELLO WORLD" | "hell0 w0rld" upcased is "HELL0 W0RLD
 */