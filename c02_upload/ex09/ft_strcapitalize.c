/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 13:06:18 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/09 17:33:30 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/* 
#include <stdio.h>

int	main(void)
{
	char	str1[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char	str2[] = "hi, hOw aRe you? 42words forty-two; fifty+and+one";

	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	printf("'%s'\n", str1);
	printf("'%s'\n", str2);
	return (0);
}
 */

/* 
The function ft_strcapitalize takes a string (a pointer to a character) as an argument and capitalizes the first letter of each word in the string while converting the rest of the letters to lowercase.
It first calls the helper function ft_strlowcase to convert the entire string to lowercase. Then, it checks if the first character of the string is a lowercase letter and capitalizes it if necessary.
Next, it iterates through the string starting from the second character. For each character, it checks if the previous character is not an alphanumeric character (not a letter or a digit). 
If the previous character is not alphanumeric and the current character is a lowercase letter, it capitalizes the current character.
After processing the entire string, the function returns a pointer to the modified string, which now has the first letter of each word capitalized and the rest in lowercase.
In the main function, we declare two strings str1 and str2 with different combinations of uppercase and lowercase letters.
We then call ft_strcapitalize with each string and print the results to verify that the function correctly capitalizes the first letter of each word while converting the rest to lowercase.
The expected output will be: | 'Hi, How Are You? 42words Forty-Two; Fifty+And+One' | 'Hi, How Are You? 42words Forty-Two; Fifty+And+One'
*/