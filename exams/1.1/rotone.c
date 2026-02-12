// program for printing the input string with each alphabetical character replaced by the next character in the alphabet, and non-alphabetical characters unchanged, followed by a newline
// For example, 'a' becomes 'b', 'z' becomes 'a', 'A' becomes 'B', and 'Z' becomes 'A'.
// If there is no input string, just print a newline. 
// The expected output will be the transformed string based on the ROT13 cipher, for example, if the input is "Hello, World!", the output will be "Uryyb, Jbeyq!".
// The function rotone takes a string as an argument and iterates through each character of the string.
// For each character, it checks if it is an uppercase letter (between 'A' and 'Y') or a lowercase letter (between 'a' and 'y'). 
// If it is, it increments the character by 1. If it is 'Z' or 'z', it wraps around to 'A' or 'a'.
// Non-alphabetical characters are left unchanged

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while (*s)
	{
		if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
			ft_putchar(*s + 1);
		else if (*s == 'Z' || *s == 'z')
			ft_putchar(*s - 25);
		else
			ft_putchar(*s);
		++s;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}

// The function rotone takes a string as an argument and iterates through each character of the string.
// For each character, it checks if it is an uppercase letter (between 'A' and 'Y') or a lowercase letter (between 'a' and 'y'). 
// If it is, it increments the character by 1. If it is 'Z' or 'z', it wraps around to 'A' or 'a'.
// Non-alphabetical characters are left unchanged.

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	char	ltr;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ltr = argv[1][i];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				ltr += 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				ltr += 1;
			if (argv[1][i] == 'Z' || argv[1][i] == 'z')
				ltr -= 25;
			write(1, &ltr, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

