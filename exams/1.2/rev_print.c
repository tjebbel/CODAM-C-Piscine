// program for printing the reverse of a string passed as an argument followed by a newline
// If there is no argument, just print a newline.
// The function takes a string as an argument and calculates its length.
// It then uses a loop to print the characters of the string in reverse order, starting from the last character and moving towards the first character.
// Finally, it prints a newline character after printing the reversed string.
// The expected output will be the reverse of the input string, for example, if the input is "Hello, World!", the output will be "!dlroW ,olleH".

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i += 1;
		while (i)
			write(1, &av[1][--i], 1);
	}
	write(1, "\n", 1);
	return (0);
}

// The function main takes the command-line arguments as input and checks if there is exactly one argument (besides the program name). 
// If there is, it calculates the length of the string by iterating through it until it reaches the null terminator. 
// Then, it uses a loop to print the characters of the string in reverse order by starting from the last character (at index i-1) and moving towards the first character (at index 0).

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int	len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (len--)
			write(1, &av[1][len], 1);
	}
	ft_putchar('\n');
}
