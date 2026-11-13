/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 20:05:17 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:03:23 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// assignment: count the number of signs/values and exclude the end ('\0'), print using write

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

/* 	//TEST CASES
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
} */

/*
The function ft_strlen calculates the length of a string by counting the number of characters until it reaches the null terminator ('\0').
It initializes an integer variable length to 0, which will be used to keep track of the number of characters in the string.
The function enters a while loop that continues as long as the character at index length of the string is not the null terminator.
Inside the loop, it increments the length variable by 1 for each character it encounters.
Once the loop exits, it means that the function has reached the null terminator, and the length variable now contains the total number of characters in the string.
Finally, the function returns the value of length, which represents the length of the string.
In the main function, we declare three strings str1, str2, and str3 with the values "Hello", "World ", and an empty string "", respectively.
We then print the length of each string using the ft_strlen function to verify that it correctly calculates the length of the strings.
The expected output will show that 'Hello' has 5 characters, 'World ' has 6 characters (including the space), and the empty string has 0 characters.
*/

