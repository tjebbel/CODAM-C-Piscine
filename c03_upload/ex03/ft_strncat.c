/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 19:58:54 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:02:33 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>


int	main(void)
{
	char	dest1[15] = "i need";
	char	src1[15] = " extra space";
	int	n = 12;

	ft_strncat(dest1, src1, n);
	printf("%s\n", dest1);

	char	dest2[15] = "i need";
	char	src2[15] = " extra space";

	ft_strncat(dest2, src2, n);
	printf("%s\n", dest2);
	
	return (0);	
}
 */

/*
The function ft_strncat concatenates up to nb characters from the string pointed to by src to the end of the string pointed to by dest. It assumes that dest has enough space to hold the resulting string.
The function first initializes two unsigned integer variables i and j to 0. The variable i is used to find the end of the dest string, while j is used to iterate through the src string.
It enters a while loop that continues until it finds the null terminator ('\0') in dest, effectively moving i to the index of the null terminator.
Next, it enters another while loop that continues as long as j is less than nb and the character at index j of src is not the null terminator. 
Inside this loop, it copies each character from src to the end of dest by assigning src[j] to dest[i], then increments both i and j.
After the loop, it null-terminates the resulting string in dest by setting dest[i] to '\0'.
Finally, the function returns a pointer to the resulting string in dest.
In the main function, we declare two character arrays dest1 and src1, and initialize them with the strings "i need" and " extra space", respectively. 
We also declare an integer n with the value 12.
We then call ft_strncat with dest1, src1, and n as arguments, and print the resulting string in dest1 to verify that it has been concatenated correctly and truncated if necessary.
We repeat the same process with dest2 and src2 to further verify the functionality of ft_strncat.
The expected output will show that the original ft_strncat and the standard strncat produce the same result, which is "i need extra space" since n is large enough to include the entire src string.
*/

