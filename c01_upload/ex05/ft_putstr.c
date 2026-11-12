/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 20:05:41 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:26:25 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Assignment: Walk through a string until you reach the end ('\0')

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	write(1, str, length);
}

	
int	main(void)
{
	char	*str1 = "Hello\n";
	char	*str2 = "World\n";

	ft_putstr(str1);
	ft_putstr(str2);
	return (0);
}


/* 
The function ft_putstr takes a string (a pointer to a character) as an argument and prints it to the standard output.
It first calculates the length of the string by iterating through it until it reaches the null terminator ('\0'), which indicates the end of the string. 
The length variable is incremented for each character in the string.
After calculating the length, it uses the write system call to write the string to the standard output. 

*/