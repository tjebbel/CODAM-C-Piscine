// program for printing "z" followed by a newline

#include <unistd.h>

int		main(void)
{
	write(1, "z\n", 2);
	return (0);
}	

// program for printing the alphabet in lowercase followed by a newline
int		main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	return (0);
}

// function for printing the alphabet in uppercase followed by a newline

void	ft_print_alphabet(void)
{
	write(1, "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n", 27);
}
// program for printing the alphabet in uppercase followed by a newline, using a loop
int main(void)
{
	int		i;
	char	c;	

	i = 0;
	c = 'A';
	while (i < 26)
	{
		write(1, &c, 1);
		c += 1;
		i += 1;
	}
	write(1, "\n", 1);
	return (0);
}

// function for printing the alphabet in lowercase followed by a newline, using a loop
void	ft_print_lowercase_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		write(1, &c, 1);
		c += 1;
		i += 1;
	}
	write(1, "\n", 1);
}

// function for printing the alphabet in lowercase followed by a newline, using a loop and a conditional to skip 'q' and 'e'

void	ft_print_alphabet_except_q_and_e(void)
{
	int		i;
	char	c;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		if (c != 'q' && c != 'e')
			write(1, &c, 1);
		c += 1;
		i += 1;
	}
	write(1, "\n", 1);
}

// program for printing the alphabet in lowercase followed by a newline, using a loop and a conditional to skip 'q' and 'e', and using a function to print the characters

void	ft_print_alphabet_except_q_and_e(void)
{
	int		i;
	char	c;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		if (c != 'q' && c != 'e')
			write(1, &c, 1);
		c += 1;
		i += 1;
	}
	write(1, "\n", 1);
}

// program for taking arguments from the command line and printing "a" followed by a newline if "a" is found in the first argument, otherwise just print a newline

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			i += 1;
		}
		write(1, "\n", 1);
		return (0);
	}
}

// program for taking arguments from the command line and printing "a" followed by a newline if "a" is found in the first argument, otherwise just print a newline, using a function to check for the presence of 'a'

int		ft_contains_a(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i += 1;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	else
	{
		if (ft_contains_a(argv[1]))
			write(1, "a", 1);
		write(1, "\n", 1);
		return (0);
	}
}
