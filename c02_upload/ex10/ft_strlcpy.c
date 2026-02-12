/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 13:07:01 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 13:58:54 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	if (size == 0)
		return (0);
	while (src[count] != '\0')
		count++;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

/* int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];
	unsigned int	size;
	size = 10;
	ft_strlcpy(dest, src, size);
	printf("ft_strlcpy result: '%s'\n", dest);
	return (0);
} */

/*
The function ft_strlcpy is a custom implementation of the standard library function strlcpy, which copies a string from src to dest, 
ensuring that the destination string is null-terminated and does not exceed the specified size.
The function takes three parameters: a pointer to the destination string (dest), a pointer to the source string (src), 
and an unsigned integer size that specifies the maximum number of characters to copy, including the null terminator.
The function first checks if the size is 0. If it is, it returns 0 immediately, as there is no space to copy any characters.
It then counts the length of the source string (src) by iterating through it until it reaches the null terminator, storing the count in the variable count.
Next, it copies characters from src to dest using a while loop, ensuring that it does not exceed size - 1 characters to leave space for the null terminator. 
The loop continues until it reaches the end of src or until it has copied size - 1 characters.
After the loop, it null-terminates the destination string by setting dest[i] to '\0'.
Finally, the function returns the total length of the source string (count), which allows the caller to determine if truncation occurred (if count is greater than or equal to size).
In the main function, we declare a source string src and a destination buffer dest with a size of 20 characters. 
We set the size parameter to 10, which means we want to copy at most 9 characters from src to dest (leaving space for the null terminator).
We then call ft_strlcpy with dest, src, and size as arguments, and print the resulting string in dest to verify that it has been copied correctly and truncated if necessary.
The expected output will be: | ft_strlcpy result: 'Hello, Wo' | since only the first 9 characters of src are copied to dest, followed by a null terminator.
*/