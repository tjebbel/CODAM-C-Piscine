// program for printing the first word of a string followed by a newline
// A word is defined as a part of a string delimited by spaces, tabs, or newlines, or by the start or end of the string. 
// If there are no words, just print a newline.
// The function last_word takes a string as an argument and prints the last word in the string followed by a newline.
// It initializes two integer variables, i and j, to 0.
// The function uses a while loop to iterate through the string until it reaches the null terminator ('\0').
// Inside the loop, it checks if the current character is a space and if the next character is a printable character (between ASCII values 33 and 126). 
// If this condition is true, it updates the variable j to the index of the next character, which is the start of a new word.
// After the loop, it uses another while loop to print the characters of the last word starting from index j until it reaches a non-printable character or the end of the string.
// Finally, it prints a newline character after printing the last word.

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && (*av[1] == ' ' || *av[1] == '\t' || *av[1] == '\n'
					|| *av[1] == '\r' || *av[1] == '\v' || *av[1] == '\f'))
			++av[1];
		while (*av[1] != '\0' && (*av[1] != ' ' && *av[1] != '\t' && *av[1] != '\n'
					&& *av[1] != '\r' && *av[1] != '\v' && *av[1] != '\f'))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}

// The function ft_isspace checks if a given character is a whitespace character (space, tab, newline, carriage return, vertical tab, or form feed) and returns 1 if it is, or 0 otherwise.
// In the main function, we check if there is exactly one argument passed to the program (besides the program name). If there is, we use a while loop to skip any leading whitespace characters in the input string.
// After skipping the leading whitespace, we use another while loop to print the characters of the first word until we encounter a whitespace character or the end of the string. 
// Finally, we print a newline character and return 0 to indicate that the program finished successfully.

#include <unistd.h>
int	ft_isspace(int i)
{
	if (i == '\t' || i == '\n' || i == '\r' || i == '\v' || i == '\f' || i == ' ')
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (ft_isspace((argv[1][i])))
			i += 1;
		while (!(ft_isspace(argv[1][i])) && argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}

// The function ft_isspace checks if a given character is a whitespace character (space, tab, newline, carriage return, vertical tab, or form feed) and returns 1 if it is, or 0 otherwise.
// In the main function, we check if there is exactly one argument passed to the program (besides the program name). If there is, we use a while loop to skip any leading whitespace characters in the input string by calling ft_isspace on each character.
// After skipping the leading whitespace, we use another while loop to print the characters of the first word until we encounter a whitespace character or the end of the string. We call ft_isspace again to check for whitespace characters while printing the first word.
// Finally, we print a newline character and return 0 to indicate that the program finished successfully.

#include <unistd.h>

void	last_word(char *str)
{
	int	j;
	int i;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
