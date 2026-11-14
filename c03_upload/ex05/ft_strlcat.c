/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 19:58:54 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:02:33 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

// assignment:strlcat: gives back the length of the string it was trying to make [ min(size, strlen(dest)) + strlen(src)]
// these functions are the tools to sort words, analyse and disjoint text and search for words etc.
// dlen = length of destination, never counted beyond size, if equal there is no '\0' in size bytes, so no space
// give back size + strlen(src), Leave room for '\0' by copyng signs as long as dlen + i < size -1
// quit program and give back dlen + strlen(src)
// what is the meaning of the size of the whole buffer and the return value?


char	*ft_strncat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = 0;
	while (dlen < size && dest[dlen]) // calculates length of destination
		dlen ++;
	slen = 0;
	while (src[slen]) // calculates length of source
		slen++;
	if (dlen == size) // If dest is full, return total length
		return (size + slen);
	i = 0;
	while(src[i] && dlen + i < size - 1)
	{
		dest[dlen + i] = src[i]; // Append src to dest
		i++;
	}
	dest[dlen + 1] = '\0';
	return (dlen + slen);
}

/*
The ft_strncat function follows a structured approach:

1. Calculate the Lengths: It first calculates the lengths of the destination and source strings.
The first two while loops calculate the lengths of dest and src. The length of dest is limited by size to prevent overflow.
2. Check Buffer Size: It checks if the destination string has enough space to accommodate the source string.
If dlen equals size, it indicates that there is no space left in dest for concatenation, and the function returns the total length of the intended concatenated string.
3. Concatenate Strings: If there is enough space, it appends the source string to the destination string.
The third while loop appends characters from src to dest until either the end of src is reached or there is no more space in dest (leaving room for the null terminator).
4. Null-Termination: It ensures that the resulting string is null-terminated.
After the loop, the function ensures that the resulting string is properly null-terminated.
5. Return Length: Finally, it returns the total length of the concatenated string.
Finally, it returns the total length of the concatenated string, which is useful for the caller to know how much space is needed.
*/