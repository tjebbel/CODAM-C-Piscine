// program for printing the ROT13 encoding of a given string followed by a newline

#include <unistd.h>

int		ft_putchar(char c)
{
	return (write(1, &c , 1));
}

void	ft_rot_13(char *str)
{
	while (*str++)
	{
		if ('a' <= *(str - 1) && *(str - 1) <= 'z')
			ft_putchar(((*(str - 1) - 'a' + 13) % 26) + 'a');
		else if ('A' <= *(str - 1) && *(str - 1) <= 'Z')
			ft_putchar(((*(str - 1) - 'A' + 13) % 26) + 'A');
		else
			ft_putchar(*(str - 1));
	}
}

int	main(int ac, char *av[])
{
	if (ac == 2)
		ft_rot_13(av[1]);
	ft_putchar('\n');
	return (0);
}

// The function ft_rot_13 takes a string as an argument and applies the ROT13 cipher to it.
// It iterates through each character of the string using a while loop.
// For each character, it checks if it is a lowercase letter (between 'a' and 'z') or an uppercase letter (between 'A' and 'Z').
// If the character is a lowercase letter, it applies the ROT13 transformation by subtracting 'a' from the character to get its position in the alphabet, adding 13 to shift it, taking the result modulo
// 26 to wrap around the alphabet, and then adding 'a' back to get the new character. 
// The same logic is applied for uppercase letters, but with 'A' instead of 'a'.
// If the character is not a letter, it is printed unchanged.
// The main function checks if there is exactly one argument passed to the program (besides the program name). 
// If there is, it calls ft_rot_13 with the argument. 
// Finally, it prints a newline character and returns 0 to indicate that the program finished successfully

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	char mvup;
	char mvdwn;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			mvup = argv[1][i] + 13;
			mvdwn = argv[1][i] - 13;
			if (('A' <= argv[1][i] && 'M' >= argv[1][i])
				|| ('a' <= argv[1][i] && 'm' >= argv[1][i]))
					write(1, &mvup, 1);
			else if (('N' <= argv[1][i] && 'Z' >= argv[1][i])
					|| ('n' <= argv[1][i] && 'z' >= argv[1][i]))
				write(1, &mvdwn, 1);
			else
				write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// The program takes a single command-line argument and applies the ROT13 cipher to it, which shifts each letter by 13 positions in the alphabet.
// It first checks if there is exactly one argument (besides the program name) and then iterates through each character of the argument string.
// For each character, it calculates the ROT13 transformation by adding 13 to the character's ASCII value for letters in the first half of the alphabet 
// ('A' to 'M' and 'a' to 'm') and subtracting 13 for letters in the second half of the alphabet ('N' to 'Z' and 'n' to 'z').
// If the character is not a letter, it is printed unchanged.
// Finally, it prints a newline character and returns 0 to indicate that the program finished successfully. 
// The expected output will be the ROT13 encoding of the input string, for example, 
// if the input is "Hello, World!", the output will be "Uryyb, Jb

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 0;
		while(av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = (av[1][i] - 'a' + 13) % 26 + 'a';
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
					av[1][i] = (av[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
