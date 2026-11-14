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

// assignment: 
// check each base with rules of c04 (Spaces, Signs, Scans) and no white spaces; invalid means NULL
// use ft_atoi_base for nbr to read a long, reserve the result and split it over two files with a limit of 5 functions
// ft_itoa_base: : count numbers(+1 for each -), malloc (numbers + 1), fill from the right with n % base or len, prefixed by '-' if negative

int ft_check_base(char * base);
long ft_atoi_base(char * str, char * base, int len);

int ft_count_digits( long n, int len)
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

char *ft_itoa_base(long n, char *base, int len)
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

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
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