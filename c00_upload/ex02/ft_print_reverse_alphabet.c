/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 13:12:16 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:16:34 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}

/* 
int	main(void)
{
	ft_print_reverse_alphabet();
	 return(0);
}
 */

 /* 
The function ft_print_reverse_alphabet prints the lowercase letters of the English alphabet in reverse order to the standard output.
It initializes a character variable letter to 'z' and uses a while loop to iterate through the letters until it reaches 'a'. 
In each iteration of the loop, it writes the current letter to the standard output using the write system call and then decrements the letter variable to move to the previous letter in the alphabet.
In the main function, we call ft_print_reverse_alphabet to execute the function and print the alphabet in reverse. Finally, we return 0 to indicate that the program finished successfully.
 */