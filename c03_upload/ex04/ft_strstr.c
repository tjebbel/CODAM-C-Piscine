/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 19:59:08 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 15:02:54 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
  char str[40] = "what to find is here";
  char to_find[40] = "to find";

  char *ptr = ft_strstr(str, to_find);
  char *control = strstr(str, to_find);
  printf("%s\n", ptr);
  printf("%s", control);
  return 0;
}
 */
/* 
The function ft_strstr searches for the first occurrence of the substring to_find in the string str.
It returns a pointer to the beginning of the first occurrence of to_find in str, or NULL if to_find is not found.
The function ft_strlen is used to calculate the length of the string to_find.
The main function demonstrates how ft_strstr works by searching for a substring in a string and comparing it with the standard library function strstr.
In the main function, we declare a string str with the value "what to find is here" and a string to_find with the value "to find".
We then call ft_strstr with str and to_find as arguments, and store the result in ptr. We also call the standard library function strstr with the same arguments and store the result in control.
Finally, we print both ptr and control to verify that they point to the same substring in str, which should output "to find is here" for both.
The expected output will show that both ft_strstr and the standard strstr return the same pointer to the substring "to find is here" within the original string str, confirming that our implementation of ft_strstr is correct.
*/