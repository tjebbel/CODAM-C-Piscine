// program for calculating the length of a string

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// program for testing the ft_strlen function by calculating the length of a string and printing the result

#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, World!";
	int	length;

	length = ft_strlen(str);
	printf("The length of the string '%s' is: %d\n", str, length);
	return (0);
}

// program for testing the ft_strlen function with a string that contains spaces and printing the result
// The expected output will show that the length of the string "Hello World" is 11
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char str[] = "Hello World";
	printf("%s has %d characters", str, ft_strlen(str));
	return (0);
}
