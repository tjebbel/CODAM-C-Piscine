/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 13:01:42 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 10:27:57 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to compare two strings
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

// Function to print the parameters
int	ft_print_params(int argc, char **argv)
{
	int		j;
	int		i;

	i = 1; // Start from 1 to skip the program name
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1); // Print each character
			j++;
		}
		argv[i][j] = '\0';
		write(1, "\n", 1); // Print a newline after each parameter
		i++;
	}
	return (0);
}

// Main function to sort and print parameters
int	main(int argc, char **argv)
{
	char	*max;
	int		s;

	(void)argc;  // Suppress unused variable warning
	(void)argv;  // Suppress unused variable warning
	s = 1;  // Start sorting from the first parameter
	while (s < argc - 1)
	{
		if (ft_strcmp(argv[s], argv[s + 1]) > 0) // Compare adjacent strings
		{
			max = argv[s]; // Swap if they are out of order
			argv[s] = argv[s + 1];
			argv[s + 1] = max;
			s = 1; // Reset to start to ensure all are sorted
		}
		else
			s++;  // Move to the next parameter
	}
	ft_print_params(argc, argv);  // Print the sorted parameters
	return (0);
}

/* 
The provided C program effectively demonstrates how to sort command-line parameters using a custom string comparison function and a basic sorting algorithm. 
This example not only highlights the use of string manipulation in C but also emphasizes the importance of understanding how to handle command-line arguments. 
By mastering these concepts, programmers can enhance their skills in C and develop more complex applications.

1.	String Comparison (ft_strcmp): This function compares two strings character by character until a difference is found or the end of either string is reached. 
	It returns the difference between the first non-matching characters.

2.	Printing Parameters (ft_print_params): This function iterates through the command-line arguments starting from index 1 (to skip the program name) and prints each string followed by a newline.

3.	Sorting Logic (main): The main function implements a simple sorting mechanism. It compares adjacent strings using ft_strcmp. If the first string is greater than the second, they are swapped. 
	This process continues until all strings are sorted. The sorting resets to the beginning whenever a swap occurs to ensure all parameters are correctly sorted.
*/