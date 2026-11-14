/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 13:49:55 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/12 15:55:47 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// assignment: size <= 0 -> give back empty string that can be freed (malloc(1) + '\0')
// total length = sum of lengths + (size - 1) * len(sep) + 1; size 0 is a "" that can be freed
// ft_append copies a string and gives it back where it stopped, so that cursor moves, put separation mark between strings and quit at the end

int ft_len(char *s)
{
    int len;

    len = 0;
    while (s[len]
        len++;
    return (len)
}

int ft_total_len(int size, char **strs, char *sep)
{
    int i;
    int total;

    total =0;
    i = 0;
    while (i < size)
    {
        total += ft_len(strs[i]);
        i++;
    }
    total += ft_len(sep) * (size - 1);
    return (total);
}

char *ft_append(char *dest, char *src)
{
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *result;
    char *cursor;
    int i;

    if (size <= 0)
    {
        result = malloc(1);
        if (result)
            result[0] = '\0';
        return (result);
    }
    result = malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
    if (!result)
        return (NULL);
    cursor = result;
    i = 0;
    while (i < size)
    {
        cursor = ft_append(cursor, str[i]);
        if (i < size - 1)
            cursor = ft_append(cursor, sep);
        i++;
    }
    *cursor = '\0'
    return (result)
}

// Other option
/*
int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int total_length(int size, char **strs, int size_sep) 
{
    int i; // Declare an integer variable for indexing
    int len; // Declare an integer variable to hold the total length

    i = -1; // Initialize index to -1 to start from the first string
    len = size_sep * -1; // Start length at -size_sep to account for the first string without a preceding separator

    while (++i < size) // Loop through each string in the array
        len += size_sep + ft_strlen(strs[i]); // Add the length of the separator and the current string's length to total length

    return (len); // Return the total calculated length
}

char *ft_strjoin(int size, char **strs, char *sep) 
{
    int i;
    char *res;
    int len;

    // Check if size is zero
    if (size == 0) 
	{
        res = (char*)malloc(1); // Allocate memory for an empty string
        return (res);
    }

    // Calculate total length needed for the result string
    len = total_length(size, strs, ft_strlen(sep));
    i = -1;

    // Allocate memory for the result string
    if (!(res = malloc(sizeof(char) * (len + 1))))
        return (0); // Return NULL if memory allocation fails

    // Concatenate strings with the separator
    while (++i < size) 
	{
        res = ft_strcpy(res, strs[i]); // Copy the current string to res
        if (i + 1 < size)
            res = ft_strcpy(res, sep); // Copy the separator if not the last string
    }

    *res = '\0'; // Null-terminate the resulting string
    return (res - len); // Return the pointer to the start of the result string
}
*/

/*
int main() {
    char *strs[] = {"Hello", "World", "from", "C"};
    char *sep = ",";
    int size = sizeof(strs) / sizeof(strs[0]);

    char *result = ft_strjoin(size, strs, sep);
    if (result) {
        printf("Joined String: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
 */
