/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_non_printable.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 13:41:17 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 15:34:47 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0; // Initialize the index to 0
    while (str[i] != '\0') // Loop until the end of the string
    {
        if (str[i] < 32 || str[i] > 126) // Check if the character is non-printable
        {
            ft_putchar('\\'); // Print the escape character
            ft_putchar("0123456789abcdef"[str[i] / 16]); // Print the first hex digit
            ft_putchar("0123456789abcdef"[str[i] % 16]); // Print the second hex digit
        }
        else
            ft_putchar(str[i]); // Print the character if it is printable
        i++; // Move to the next character
    }
}

int	main(void)
{
	char	str[] = "Hello\nHow are you 0\t0 11\f1 222\r2?";

	ft_putstr_non_printable(str);
	return (0);
}


/* 
The function ft_putstr_non_printable takes a string (a pointer to a character) as an argument and prints it to the standard output.
It iterates through the string using a while loop until it reaches the null terminator ('\0').
In each iteration, it checks if the current character is a non-printable character by verifying if its ASCII value is less than 32 or greater than 126.
If it finds a non-printable character, it prints a backslash ('\') followed by the two-digit hexadecimal representation of the character. 
The hexadecimal representation is obtained by dividing the character's ASCII value by 16 to get the first digit and using the modulus operator to get the second digit.
If the character is a printable character, it simply prints it using the ft_putchar function.
In the main function, we declare a string str that contains the text "Hello\nHow are you?" where '\n' is a non-printable newline character.
We then call ft_putstr_non_printable with str as the argument, which will print "Hello\0aHow are you?" to the standard output, 
where '\0a' is the hexadecimal representation of the newline character. 
Finally, we return 0 to indicate that the program finished successfully and the expected output will be: Hello\0aHow are you?
*/