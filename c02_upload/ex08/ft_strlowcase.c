/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 16:00:30 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:32:58 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

	//TEST CASES
/* #include <stdio.h>

int	main(void)
{
	char	str1[] = "HELLO WORLD!";
	char	str2[] = "hello world!";
	char	str3[] = "Hello World";
	char	str4[] = "hell0 w0rld";

	printf("\"%s\"", str1);
	printf(" lowcased is \"%s\"\n", ft_strlowcase(str1));
	printf("\"%s\"", str2);
	printf(" lowcased is \"%s\"\n", ft_strlowcase(str2));
	printf("\"%s\"", str3);
	printf(" lowcased is \"%s\"\n", ft_strlowcase(str3));
	printf("\"%s\"", str4);
	printf(" lowcased is \"%s\"\n", ft_strlowcase(str4));
	return (0);
}
 */

/* 
The function ft_strlowcase takes a string (a pointer to a character) as an argument and converts all uppercase letters in the string to lowercase.
It iterates through the string using a while loop until it reaches the null terminator ('\0').
In each iteration, it checks if the current character is an uppercase letter by verifying if its ASCII value is between 65 ('A') and 90 ('Z').
If it finds an uppercase letter, it converts it to lowercase by adding 32 to its ASCII value (since the difference between uppercase and lowercase letters in the ASCII table is 32).
After processing all characters in the string, the function returns a pointer to the modified string, which now contains all lowercase letters where there were uppercase letters before.
In the main function, we declare four strings str1, str2, str3, and str4 with different combinations of uppercase and lowercase letters. 
We then call ft_strlowcase with each string and print the results to verify that all uppercase letters have been converted to lowercase while non-alphabetic characters remain unchanged.
The expected output will be: "HELLO WORLD!" lowcased is "hello world!" | "hello world!" lowcased is "hello world!" | "Hello World" lowcased is "hello world" | "hell0 w0rld" lowcased is "hell0 w0rld
*/