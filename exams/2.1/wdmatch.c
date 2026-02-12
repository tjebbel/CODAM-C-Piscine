// program to check if the characters of the first string appear in the second string in the same order, and if so, print the first string. The expected output will show the first string if it is a subsequence of the second string, and a newline character if it is not. This confirms that the wdmatch function correctly identifies whether the characters of the first string appear in the second string in the same order and prints the first string accordingly.
// The function wdmatch takes two strings as arguments (s1 and s2) and checks if the characters of s1 appear in s2 in the same order. It first calculates the length
// of s1 by iterating through it until it reaches the null terminator. Then, it iterates through s2 while keeping track of the index of the current character in s1. If a character in s2 matches the current character in s1, it increments the index for s1. If the index for s1 reaches the length of s1, it means that all characters of s1 have been found in s2 in the correct order, and it prints s1. Finally, it prints a newline character after checking the strings.
// The function wdmatch can also be implemented using a loop that iterates through s2 and uses a pointer to keep track of the current position in s1. If a character in s2
// matches the current character pointed to in s1, it advances the pointer for s1. If the pointer for s1 reaches the end of s1, it means that all characters of s1 have been found in s2 in the correct order, and it prints s1. Finally, it prints a newline character after checking the strings.
// The function wdmatch can also be implemented using a loop that iterates through s2 and uses a counter to keep track of the number of characters of s1 found in s2. If a character in s2 matches the current character in s1, it increments the counter. If the counter reaches the length of s1, it means that all characters of s1 have been found in s2 in the correct order, and it prints s1. Finally, it prints a newline character after checking the strings.

#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
	int len;
	int i;
	
	len = 0;
	i = 0;
	while (s1[len])
		++len;
	while (*s2 && i < len)
		(*s2++ == s1[i]) ? ++i : 0;
	if (i == len)
		write(1, s1, len);
}

int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

// program to check if the characters of the first string appear in the second string in the same order, and if so, print the first string. The expected output will show the first string if it is a subsequence of the second string, and a newline character if it is not. This confirms that the wdmatch function correctly identifies whether the characters of the first string appear in the second string in the same order and prints the first string accordingly.
// The function wdmatch takes two strings as arguments (s1 and s2) and checks if the characters of s1 appear in s2 in the same order. It first calculates the length
// of s1 by iterating through it until it reaches the null terminator. Then, it iterates through s2 while keeping track of the index of the current character in s1. If a character in s2 matches the current character in s1, it increments the index for s1. If the index for s1 reaches the length of s1, it means that all characters of s1 have been found in s2 in the correct order, and it prints s1. Finally, it prints a newline character after checking the strings.
// The function wdmatch can also be implemented using a loop that iterates through s2 and uses a pointer to keep track of the current position in s1. If a character in s2
// matches the current character pointed to in s1, it advances the pointer for s1. If the pointer for s1 reaches the end of s1, it means that all characters of s1 have been found in s2 in the correct order, and it prints s1. Finally, it prints a newline character after checking the strings.
// The function wdmatch can also be implemented using a loop that iterates through s2 and uses a counter to keep track of the number of characters of s1 found in s2. If
// a character in s2 matches the current character in s1, it increments the counter. If the counter reaches the length of s1, it means that all characters of s1 have been found in s2 in the correct order, and it prints s1. Finally, it prints a newline character after checking the strings.
// In the main function, we check if there are exactly three command-line arguments (the program name and two strings). If so, we call the wdmatch function with the first and second arguments. After that, we print a newline character and return 0 to indicate successful execution of the program.

#include <unistd.h>

void ft_putstr(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char const *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[2][j])
			if (argv[2][j++] == argv[1][i])
				i += 1;
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

// program to check if the characters of the first string appear in the second string in the same order, and if so, print the first string. The expected output will show the first string if it is a subsequence of the second string, and a newline character if it is not. This confirms that the wdmatch function correctly identifies whether the characters of the first string appear in the second string in the same order and prints the first string accordingly.
// The function wdmatch takes two strings as arguments (s1 and s2) and checks if the characters of s1 appear in s2 in the same order. It first calculates the length
// of s1 by iterating through it until it reaches the null terminator. Then, it iterates through s2 while keeping track of the index of the current character in s1. If a character in s2 matches the current character in s1, it increments the index for s1. If the index for s1 reaches the length of s1, it means that all characters of s1 have been found in s2 in the correct order, and it prints s1. Finally, it prints a newline character after checking the strings.
// The function wdmatch can also be implemented using a loop that iterates through s2 and uses a pointer to keep track of the current position in s1. If a character in s2
// matches the current character pointed to in s1, it advances the pointer for s1. If the pointer for s1 reaches the end of s1, it means that all characters of s
// 1 have been found in s2 in the correct order, and it prints s1. Finally, it prints a newline character after checking the strings.
// The function wdmatch can also be implemented using a loop that iterates through s2 and uses a counter to keep track of the number of characters of s1 found in s2. If
// a character in s2 matches the current character in s1, it increments the counter. If the counter reaches the length of s1, it means that all characters of s1 have been
// found in s2 in the correct order, and it prints s1. Finally, it prints a newline character after checking the strings.
// In the main function, we check if there are exactly three command-line arguments (the program name and two strings). If so, we call the wdmatch function with the first and second arguments
// After that, we print a newline character and return 0 to indicate successful execution of the program.
// The function ft_putstr is a helper function that takes a string as an argument and prints it to the standard output using the write system call. It iterates through the string until it reaches the null terminator, printing each character one by one. This function is used in the wdmatch function to print the first string if it is a subsequence of the second string.

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i] && s1[j])
	{
		if (s2[i] == s1[j])
			j++;
		i++;
	}
	if (j == ft_strlen(s1))
		ft_putstr(s1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

