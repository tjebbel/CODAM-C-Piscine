/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 13:01:16 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 18:19:26 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 0) // Check if there are command-line arguments
		ft_putstr(argv[0]); // Call ft_putstr with the program name
	write(1, "\n", 1);  // Print a newline character
}

/* 
This program prints the name of the program being executed.
It uses the argv[0] argument, which contains the program's name.
The ft_putstr function is used to print each character of the program name.
Finally, a newline is printed using write(1, "\n", 1).
*/