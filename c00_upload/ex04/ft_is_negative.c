/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 13:38:41 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:17:13 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

/* 
int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
 */

/* 
The function ft_is_negative takes an integer n as an argument and checks if it is negative or not.
If n is greater than or equal to 0, it writes the character 'P' to the standard output, indicating that the number is positive.
If n is less than 0, it writes the character 'N' to the standard output, indicating that the number is negative.
In the main function, we call ft_is_negative with the argument -1, which will print 'N' to the standard output since -1 is a negative number. 
Finally, we return 0 to indicate that the program finished successfully.

*/