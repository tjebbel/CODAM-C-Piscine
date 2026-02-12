// program that takes two strings and displays, without doubles, the characters that appear in either one of the strings, followed by a newline. The display will be in the order of the first appearance of the characters in the command line, and will be followed by a newline. If the number of arguments is not 2, the program displays a newline.
// For example, if the input strings are "abc" and "bcd", the output will be "abcd" since 'a' appears in the first string, 'b' appears in
// both strings but is only displayed once, 'c' appears in both strings but is only displayed once, and 'd' appears in the second string. The expected output will be "abcd" followed by a newline.
// The function ft_union takes two strings as arguments and displays the unique characters that appear in either
// one of the strings. It uses a helper function not_seen_before to check if a character has already been displayed before printing it. The main function checks if there are exactly two arguments and calls ft_union with those arguments, otherwise it just prints a newline.
// 

#include <unistd.h>

int		not_seen_before(char *s, int max_pos, char c)
{
	int	i;

	i = -1;
	while(++i < max_pos)
		if (s[i] == c)
			return (0);
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i])
		if (not_seen_before(s1, i, s1[i]))
			write(1, &s1[i], 1);
	j = -1;
	while (s2[++j])
		if (not_seen_before(s1, i, s2[j]) & not_seen_before(s2, j, s2[j]))
			write(1, &s2[j], 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

// 
