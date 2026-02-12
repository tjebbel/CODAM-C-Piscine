/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 13:00:16 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 10:36:42 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to print a single character
void	ft_putchar(char c)
{
	write(1, &c, 1); // Writes the character 'c' to standard output
}

// Function to print a string
void	ft_putstr(char *str)
{
	int	i - 0; // Initialize index to 0

	while (str[i] != '\0')    // Loop through each character until the null terminator
	{
		write(1, &str[i], 1); // Write the current character to standard output
		i++; // Move to the next character
	}
}

// Main function to print command-line parameters
int	main(int argc, char **argv)
{
	int	i = 1; // Start from 1 to skip the program name (argv[0])
	while (i < argc) // Loop through each command-line argument starting from index 1 (skipping the program name)
	{
		ft_putstr(argv[i]); // Print the current argument using the ft_putstr function
		ft_putchar('\n'); // Print a newline character after each argument
		i++; // Move to the next argument
	}
	return (0);
}

/*
The provided C code effectively demonstrates how to handle and print command-line arguments using basic I/O functions. 
By utilizing the write function, the program outputs each argument followed by a newline, showcasing a straightforward approach to string manipulation and output in C. 
Understanding this code is essential for any C programmer looking to enhance their skills in handling user input and command-line interfaces.

1. 	Header Inclusion: The program includes the unistd.h header, which is necessary for using the write function to output characters to the standard output.
2. 	Character Output Function: The ft_putchar function is defined to take a single character as an argument and write it to the standard output using the write function.
3. 	String Output Function: The ft_putstr function is defined to take a string (character array) as an argument and loop through each character until it reaches the null terminator, writing each character to the standard output.
4. 	Main Function: The main function takes the command-line arguments (argc and argv) and uses a loop to iterate through each argument starting from index 1 (to skip the program name). 
	For each argument, it calls ft_putstr to print the argument followed by a newline character using ft_putchar.	
5. 	Output: The program outputs each command-line argument on a new line, demonstrating how to handle and display user input effectively in C.

*/