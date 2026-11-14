/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 18:13:55 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:28:58 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	

// assignment: Display the fibonacci series, with 0 and 1 (non-fibonacci numbers, and index under 0 => -1)

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* int main(void)
{
	int index;

	index = 10;
	printf("The %dth Fibonacci number is %d\n", index, ft_fibonacci(index));
	return (0);
}

 */
/* 
The function ft_fibonacci calculates the Fibonacci number at a given index using a recursive approach.
It first checks if the index is less than 0. If it is, the function returns -1, as Fibonacci numbers are not defined for negative indices.
If the index is 0, the function returns 0, since the 0th Fibonacci number is defined to be 0.
If the index is 1, the function returns 1, since the 1st Fibonacci number is defined to be 1.
For indices greater than 1, the function returns the sum of the Fibonacci numbers at index - 1 and index - 2.
This is the recursive call that breaks down the problem into smaller instances until it reaches the base cases (index == 0 or index == 1).
The recursion continues until it reaches the base cases, at which point it starts returning values back up the call stack, 
summing them together to compute the final result of the Fibonacci number at the original index.
In the main function, we declare an integer variable index and set it to 10. 
We then call ft_fibonacci with index as an argument and print the result in the format "The 10th Fibonacci number is 55".
The expected output will be: The 10th Fibonacci number is 55
*/
 