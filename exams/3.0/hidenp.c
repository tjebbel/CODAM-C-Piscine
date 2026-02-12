//

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;
	j = 0;
	i = 0;
	if (ac == 3)
	{
		while (av[2][j] && av[1][i])
		{
			if (av[2][j] == av[1][i])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}

//

#include <unistd.h>

void hidenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 && *s1 == *s2)
			s1++;
		s2++;
	}
	if (!*s1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

//

#include <unistd.h>

void hidenp(char *s1, char *s2)
{
	while (*s2)
		if (*s1 == *s2++)
			s1++;
	(*s1 == '\0') ? write(1, "1", 1) : write(1, "0", 1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

//

