/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 14:58:39 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:28:58 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include  <stdio.h>

int	main(void)
{
	char	dest[] = "Dest";
	char	src[] = "Source";

	printf("dest before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest after: %s\n", dest);
}  */

/* 
The function ft_strcpy takes two strings as arguments: dest and src. 
It copies the contents of the src string into the dest string, including the null terminator at the end of the string.
The function uses a while loop to iterate through each character of the src string until it reaches the null terminator ('\0').
In each iteration of the loop, it assigns the current character from src to the corresponding position in dest and increments the index i to move to the next character.
After the loop, it adds a null terminator to the end of the dest string to ensure it is properly terminated.
Finally, the function returns a pointer to the dest string, which now contains a copy of the src string.
In the main function, we declare two character arrays dest and src, and initialize them with the strings "Dest" and "Source", respectively.
We print the contents of dest before calling ft_strcpy to show its initial value. 
Then, we call ft_strcpy with dest and src as arguments, which will copy the contents of src into dest. 
Finally, we print the contents of dest after the function call to verify that it now contains the string "Source".
The expected output will be: dest before: Dest | dest after: Source
*/