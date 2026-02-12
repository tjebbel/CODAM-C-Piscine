/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 19:58:38 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:01:38 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* #include <stddef.h>
#include <stdint.h> 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest1[10] = "dest";
	char	src1[4] = "src";

	ft_strcat(dest1, src1);
	printf("String: %s\n", dest1);

	char	dest2[10] = "dest";
	char	src2[4] = "src";

	strcat(dest2, src2);
	printf("String check: %s\n", dest2);
}
 */

/*
The function ft_strcat concatenates the string pointed to by src to the end of the string pointed to by dest. It assumes that dest has enough space to hold the resulting string.
The function first initializes an unsigned integer variable i to 0, which will be used to find the end of the dest string.
It enters a while loop that continues until it finds the null terminator ('\0') in dest, effectively moving i to the index of the null terminator.
Next, it initializes another unsigned integer variable j to 0, which will be used to iterate through the src string.
It enters another while loop that continues until it finds the null terminator in src. Inside this loop, it copies each character from src to the end of dest by assigning src[j] to dest[i + j].
After the loop, it null-terminates the resulting string in dest by setting dest[i + j] to '\0'.
Finally, the function returns a pointer to the resulting string in dest.
In the main function, we declare two character arrays dest1 and src1, and initialize them with the strings "dest" and "src", respectively. 
We then call ft_strcat with dest 1 and src1, and print the resulting string in dest1 to verify that it has been concatenated correctly.
We also declare another set of character arrays dest2 and src2 with the same values, and use the standard library function strcat to concatenate them, printing the result to verify that it matches the output of our ft_strcat function.
The expected output will show that both ft_strcat and strcat produce the same concatenated string "destsrc".
*/
