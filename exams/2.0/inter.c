// program that takes two strings as arguments and displays, without doubles, the characters that appear in both strings, followed by a newline. If the number of arguments is not 2, the program displays a newline.
// The function iter takes a string, a character, and a length as arguments and checks if the character appears in the string within the specified length. If the length is -1, it checks the entire string. It returns 1 if the character is found and 0 otherwise.
// In the main function, we check if there are exactly 2 arguments. If so, we iterate through each character of the first string (argv[1]) and check if it does not appear in the first string up to the current index (to avoid duplicates) and if it appears in the second string (
// argv[2]) using the iter function. If both conditions are met, we write the character to the standard output. Finally, we write a newline character and return 0.
// The expected output will be the characters that appear in both strings without duplicates, for example, if the input strings are "hello" and "world", the output will be "lo" followed by a newline.
// The function iter takes a string, a character, and a length as arguments and checks if the character appears in the string within the specified length. If the length is -1, it checks the entire string. It returns 1 if the character is found and 0 otherwise.
// In the main function, we check if there are exactly 2 arguments. If so, we iterate through each character of the first string (argv[1]) and check if it does not
// appear in the first string up to the current index (to avoid duplicates) and if it appears in the second string (argv[2]) using the iter function. If both conditions are met, we write the character to the standard output. Finally, we write a newline character and return 0.
// The expected output will be the characters that appear in both strings without duplicates, for example,
// if the input strings are "hello" and "world", the output will be "lo" followed by a newline.

#include <unistd.h>

int	inter(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// The function inter takes a string, a character, and a length as arguments and checks if the character appears in the string within the specified length. If the length is -1, it checks the entire string. It returns 1 if the character is found and 0 otherwise.
// In the main function, we check if there are exactly 2 arguments. If so, we iterate through each character of the first string (argv[1]) and check if it does not
// appear in the first string up to the current index (to avoid duplicates) and if it appears in the second string (argv[2]) using the inter function. If both conditions are met, we write the character to the standard output. Finally, we write a newline character and return 0.
// The expected output will be the characters that appear in both strings without duplicates, for example,
// if the input strings are "hello" and "world", the output will be "lo" followed by a newline.

#include <unistd.h>

int	scan(char *str, char c, int nb)
{
	while (nb >= 0)
	{
		if (str[nb] == c)
			return (0);
		nb--;
	}
	return (1);
}

void	inter(char *str1, char *str2)
{
	int i = 0;
	int	j;

	while(str1[i])
	{
		j = 0;
		while(str2[j])
		{
			if (str1[i] == str2[j])
			{
				if (scan(str1, str1[i], i - 1))
					write(1, &str1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

//