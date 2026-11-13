/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 20:05:41 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:04:00 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// assignment:  Walk through a string until you reach the end ('\0'), print using write

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		write(1, &str[length], 1);
		length++;
	}
}

/* 	//TEST CASES
int	main(void)
{
	char	*str1 = "Hello\n";
	char	*str2 = "World\n";

	ft_putstr(str1);
	ft_putstr(str2);
	return (0);
}
 */

 /* 
The function ft_putstr takes a string (a pointer to a character) as an argument and prints it to the standard output.
It initializes an integer variable length to 0, which will be used to keep track of the number of characters in the string.
The function enters a while loop that continues as long as the character at index length of the string is not the null terminator ('\0').
Inside the loop, it uses the write system call to print the character at index length of the string to the standard output. 
The write function takes three arguments: the file descriptor (1 for standard output), a pointer to the data to be written (the address of the character), and the number of bytes to write (1 byte for a single character).
After printing the character, it increments the length variable by 1 to move to the next character in the string.
Once the loop exits, it means that the function has reached the null terminator, and all characters in the string have been printed.
In the main function, we declare two strings str1 and str2 with the values "Hello\n" and "World\n", respectively.
We then call ft_putstr with str1 and str2 as arguments, which will print "Hello" followed by a newline and then "World" followed by another newline to the standard output.
The expected output will be:
Hello
World
 */