/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                        			:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlodeize <tlodeize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:12:16 by tlodeize          #+#    #+#             */
/*   Updated: 2026/01/27 13:35:08 by tlodeize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = '0';
	while (digit <= '9')
	{
		write(1, &digit, 1);
		digit++;
	}
}

/* 
int	main(void)
{
	ft_print_numbers();
}
 */

 /* 
The function ft_print_numbers prints the digits from 0 to 9 to the standard output.
It initializes a character variable digit to '0' and uses a while loop to iterate through the digits until it reaches '9'. 
In each iteration of the loop, it writes the current digit to the standard output using the write system call and then increments the digit variable to move to the next digit.
In the main function, we call ft_print_numbers to execute the function and print the digits. Finally, we return 0 to indicate that the program finished successfully.
 */