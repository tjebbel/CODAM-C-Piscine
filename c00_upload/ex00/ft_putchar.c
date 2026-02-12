/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 19:42:11 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 16:06:23 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* 
int	main(void)
{
	ft_putchar('k');
	printf("\n\n");
	return (0);
}
 */

/* 
The function ft_putchar takes a character c as an argument and writes it to the standard output using the write system call.
In the main function, we call ft_putchar with the character 'k' as the argument, which will print 'k' to the standard output. 
We then print two newline characters for formatting and return 0 to indicate that the program finished successfully.
*/
