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
	while (dlen < size && dest[dlen])
		dlen ++;
	slen = 0;
	while (src[slen])
		slen++;
	if (dlen == size)
		return (size + slen);
	i = 0;
	while(src[i] && dlen + i < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + 1] = '\0';
	return (dlen + slen);
}
