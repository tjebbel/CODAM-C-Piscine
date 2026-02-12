/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 14:58:39 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 17:36:36 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0') // This loop continues as long as i is less than n and the current character in the source string is not the null terminator. 
	// This ensures that we do not copy beyond the specified limit or until we reach the end of the source string.
	{
		dest[i] = src[i]; // Inside the loop, we copy the character from the source string to the destination string at the current index i.
		i++;
	}
	while (i < n) // After the first loop, this second loop runs to fill the remaining space 
	// in the destination string with null characters if the source string was shorter than n.
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	dest[] = "######";
	char	src[] = "Source";
	int	n = 2;
	
	printf("dest before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("dest after: %s\n", dest);
} */

/* 
The function ft_strncpy takes three arguments: a destination string (dest), a source string (src), and an unsigned integer n.
It copies up to n characters from the source string to the destination string.
The function uses a while loop to iterate through the source string, copying characters to the destination string until it reaches either n characters or the null terminator of the source string.
If the source string is shorter than n characters, the function fills the remaining space in the destination string with null characters ('\0') until it reaches n characters.
Finally, the function returns a pointer to the destination string, which now contains a copy of the source string up to n characters.
In the main function, we declare two character arrays dest and src, and an integer n. We initialize dest with "######" and src with "Source", and set n to 2.
We print the contents of dest before calling ft_strncpy to show its initial value. 
Then, we call ft_strncpy with dest, src, and n as arguments, which will copy the first 2 characters of src into dest. 
Finally, we print the contents of dest after the function call to verify that it now contains "So####", where "So" are the first two characters of "Source" and the remaining characters are unchanged from the original "######".
The expected output will be: dest before: ###### | dest after: So####
*/