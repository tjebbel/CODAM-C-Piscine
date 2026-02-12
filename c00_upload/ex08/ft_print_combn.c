/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combn.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 13:52:02 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 13:54:04 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *range, int n) // Defines a function to print the current combination.
{
	int	i;
	int	display;

	display = 1; // Initialize display to true (1).
    i = 0; // Start index at 0.
    while (++i < n) // Loop through the range array.
        if (range[i - 1] >= range[i]) // Check if the previous element is greater than or equal to the current.
            display = 0; // If so, set display to false (0).
    if (!display) // If display is false, exit the function.
        return ;
    i = -1; // Reset index for printing.
    while (++i < n) // Loop through the range array again.
        ft_putchar(range[i] + 48); // Print each number as a character (ASCII conversion).
    if (range[0] < (10 - n)) // Check if the first element is less than 10 minus n.
    {
        ft_putchar(','); // Print a comma.
        ft_putchar(' '); // Print a space.
	}
}

void ft_print_combn(int n) {
    int i;
    int range[10];

    // Check if n is out of bounds
    if (n > 10 || n < 0) 
        return;

    // Initialize the range array with the first n digits
    i = -1;
    while (++i < n)
        range[i] = i;

    // Main loop to generate combinations
    while (range[0] <= (10 - n) && n >= 1) {
        print(range, n); // Call the print function to display the current combination

        // If n is 10, we have reached the maximum combination and exit the function
        if (n == 10)
            break;

        // Increment the last digit
        range[n - 1]++;
        i = n;

        // Adjust previous digits if necessary
        while (i && n > 1) {
            i--;
            if (range[i] > 9) {
                range[i - 1]++; // Increment the previous digit
                range[i] = 0;   // Reset the current digit
            }
        }
    }
}
/* 	//TEST CASES
int	main(void)
{
	// ft_print_combn(2);
	// ft_putchar(' ');
	// ft_print_combn(2147483647);
	// ft_putchar(' ');
	// ft_print_combn(-0);
	// ft_putchar(' ');
	ft_print_combn(2);
	return (0);
}
 */

 /* 
The function ft_print_combn is intended to print all possible combinations of n different digits in ascending order, separated by commas and spaces.
However, the function is currently empty and does not contain any implementation to achieve this functionality.
In the main function, we call ft_print_combn with the argument 2 to execute the function and print the combinations of two different digits. 
Finally, we return 0 to indicate that the program finished successfully.
The expected output for ft_print_combn(2) will be:
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
For ft_print_combn(3), the expected output will be:
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089
And so on for higher values of n, with the combinations consisting of n different digits in ascending order.
 */