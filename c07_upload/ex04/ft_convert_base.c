/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_base.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 13:49:41 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 11:20:51 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
/*
Base: A base is the number of unique digits, including zero, used to represent numbers in a positional numeral system. For example, base 10 (decimal) uses digits 0-9, while base 2 (binary) uses digits 0 and 1.

ft_check_base: This function checks if the provided base is valid according to specific rules (like no duplicate characters and valid characters).

ft_atoi_base: This function converts a string representation of a number in a specified base to a long integer.

ft_itoa_base: This function converts a long integer back into a string representation in a specified base.

Memory Management: The code uses dynamic memory allocation to create strings, which is crucial for handling variable-length outputs.
*/

// assignment: 
// check each base with rules of c04 (Spaces, Signs, Scans) and no white spaces; invalid means NULL
// use ft_atoi_base for nbr to read a long, reserve the result and split it over two files with a limit of 5 functions
// ft_itoa_base: : count numbers(+1 for each -), malloc (numbers + 1), fill from the right with n % base or len, prefixed by '-' if negative

int ft_check_base(char * base); // validate the base
long ft_atoi_base(char * str, char * base, int len); // converts a string to a long integer based on specific base

int ft_count_digits( long n, int len) // Counts the number of digits required to represent a number in a given base.
{
    int count;

    count = 1;
    if (n < 0)
    {
        count++;
        n = -n;
    }
    while (n >= len)
    {
        n /= len;
        count++;
    }
    return (count);
}

char *ft_itoa_base(long n, char *base, int len) // Converts a long integer to a string representation in a specified base.
{
    char *result;
    int size;
    int stop;

    size = ft_count_digits(n, len);
    result = malloc(sizeof(char) * (size + 1));
    if (!result)
        return (NULL);
    result[size] = '\0';
    stop = 0;
    if (n < 0)
    {
        result[0] = '-';
        n = -n;
        stop = 1;
    }
    while (size > stop)
    {
        result[size - 1] = base[n % len];
        n /= len;
        size--;
    }
    return (result);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to) // The main function that ties everything together, converting a number from one base to another.
{
    int len_from;
    int len_to;
    long value;

    len_from = ft_check_base(base_from);
    len_to = ft_check_base(base_to);
    if (len_from == 0 || len_to == 0)
        return (NULL);
    value = ft_atoi_base(nbr, base_from, len_from);
    return (ft_itoa_base(value, base_to, len_to));
}
