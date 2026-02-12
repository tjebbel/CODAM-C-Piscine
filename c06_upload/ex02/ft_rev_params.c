/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 13:01:30 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 10:31:51 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c; // Variable to track the current argument index
	int	i; // Variable to track the current character index within the argument

	c = argc - 1; // Start from the last argument (excluding the program name)
	while (c > 0) // Loop until the first argument is reached
	{
		i = 0; // Reset character index for each argument
		while (argv[c][i]) // Loop through each character of the current argument
		{
			write (1, &argv[c][i], 1); // Write the character to standard output
			i++; // Move to the next character
		}
		write (1, "\n", 1); // Write a newline after each argument
		c--; // Move to the previous argument
	}
	return (0);
}

/*
This C program effectively demonstrates how to reverse the order of command-line arguments and print them to the console. 
By utilizing loops and the write function, it showcases fundamental programming concepts in C. 
Understanding this code can serve as a stepping stone for more complex applications that require manipulation of command-line inputs.

1. 	Header Inclusion: The program begins by including the unistd.h header, which is essential for using the write function.
2. 	Main Function: The main function is defined to accept command-line arguments. 
	The argc parameter counts the number of arguments, while argv is an array of strings representing the arguments.
3. 	Reverse Looping: The variable c is initialized to argc - 1, which points to the last argument. The outer while loop continues until c is greater than 0.
4. 	Character Looping: Inside the outer loop, the variable i is initialized to 0 for each argument. 
	The inner while loop iterates through each character of the current argument until it reaches the null terminator.
5. 	Output: The write function is called to output each character to the standard output. 
	After printing all characters of an argument, a newline is printed, and c is decremented to move to the previous argument.
*/