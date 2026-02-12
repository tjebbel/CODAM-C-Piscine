// program for taking a string as an argument and replacing all occurrences of the first character of the second argument with the first character of the third argument, followed by a newline. If there are not exactly three arguments, just print a newline.

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (!argv[2][1] && !argv[3][1])
		{
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
					write(1, &argv[3][0], 1);
				else
					write(1, &argv[1][i], 1);
				i += 1;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}

// program for taking a string as an argument and replacing all occurrences of the first character of the second argument with the first character of the third argument, followed by a newline. If there are not exactly three arguments, just print a newline, using a function to perform the replacement.

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char 	letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = argv[1][i];
			if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
				letter += 32;
			if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
				letter -= 32;
			write(1, &letter, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// program for taking a string as an argument and replacing all occurrences of the first character of the second argument with the first character of the third argument, followed by a newline. If there are not exactly three arguments, just print a newline, using a function to perform the replacement and handling case sensitivity.

#include <unistd.h>

void	ulstr(char *s)
{
	char	c;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			c = *s - 32;
		else if (*s >= 'A' && *s <= 'Z')
			c = *s + 32;
		else
			c = *s;
		write(1, &c, 1);
		s++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
