#include <unistd.h>

// program for printing "z" followed by a newline

/* int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "z\n", 2);
	return (0);
} 

// program for taking first parameter from command line and printing it followed by a newline, if there is an argument, otherwise just print a newline

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (argv[1][i])
		{
			write(1, &argv[1][i++], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
*/
// program for taking last parameter from the command line and printing it followed by a newline, if there is an argument, otherwise just print a newline

int		main(int argc, char *argv[])
{
	int	i;

	i = -1;
	if (argc > 1)
	{
		while (argv[argc - 1][++i])
		{
			write(1, &argv[argc - 1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
