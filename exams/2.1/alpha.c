// program that takes a string as an argument and displays the string with each of its alphabetical characters replaced by the opposite alphabetical character, followed by a newline. The opposite alphabetical character is determined by the position of the character in the alphabet. For example, 'a' is replaced by 'z', 'b' is replaced by 'y', 'c' is replaced by 'x', and so on. The program should only modify alphabetical characters and leave non-alphabetical characters unchanged. If the number of arguments is not 1, the program should simply display a newline.
// The function ft_putchar is a helper function that takes a character as an argument and writes it to the standard output using the write system call. It is used to print individual characters in the alpha_mirror function.
// The function alpha_mirror takes a string as an argument and iterates through each character in the string. For each character, it checks if it is an uppercase letter (between 'A'
// and 'Z') or a lowercase letter (between 'a' and 'z'). If it is an uppercase letter, it calculates the opposite character by subtracting the ASCII value of the character from 'Z' and adding 'A'. If it is a lowercase letter, it calculates the opposite character by subtracting the ASCII value of the character from 'z' and adding 'a'. If the character is not an alphabetical character, it simply prints it as is. Finally, it prints a newline after processing the entire string.
// In the main function, we check if there is exactly one argument passed to the program (besides the program name). If there is, we call the alpha_mirror function with the argument
// string. After that, we print a newline character and return 0 to indicate that the program finished successfully. The expected output will be the input string with each alphabetical character replaced by its opposite, followed by a newline. For example, if the input string is "Hello, World!", the output will be "Svool, Dliow!".
// The function ft_putchar is a helper function that takes a character as an argument and writes it to the standard output using the write system call. It is used to print individual characters in the alpha_mirror function.
// The function alpha_mirror takes a string as an argument and iterates through each character in the string. For each character, it checks if it is an uppercase letter (between 'A'
// and 'Z') or a lowercase letter (between 'a' and 'z'). If it is an uppercase letter, it calculates the opposite character by subtracting the ASCII value of the character from 'Z' and adding 'A'. If it is a lowercase letter, it calculates the opposite character by subtracting the ASCII value of the character from 'z' and adding 'a'. If the character is not an alphabetical character, it simply prints it as is. Finally, it prints a newline after processing the entire string.
// In the main function, we check if there is exactly one argument passed to the program (besides the program name). If there is, we call the alpha_mirror function with the argument
// string. After that, we print a newline character and return 0 to indicate that the program finished successfully. The expected output will be the input string with each alphabetical character replaced by its opposite, followed by a newline. For example, if the input string is "Hello, World!", the output will be "Svool, Dliow!".

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	ltr;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ltr = argv[1][i];
			if ('A' <= argv [1][i] && 'Z' >= argv[1][i])
				ltr = 'Z' - argv[1][i] + 'A';
			if ('a' <= argv[1][i] && 'z' >= argv[1][i])
				ltr = 'z' -argv[1][i] + 'a';
			write(1, &ltr, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// The function ft_putchar is a helper function that takes a character as an argument and writes it to the standard output using the write system call. It is used to print individual characters in the alpha_mirror function.
// The function alpha_mirror takes a string as an argument and iterates through each character in the string. For each character, it checks if it is an uppercase letter (between 'A'
// and 'Z') or a lowercase letter (between 'a' and 'z'). If it is an uppercase letter, it calculates the opposite character by subtracting the ASCII value of the character from 'Z' and adding 'A'. If it is a lowercase letter, it calculates the opposite
// character by subtracting the ASCII value of the character from 'z' and adding 'a'. If the character is not an alphabetical character, it simply prints it as is. Finally, it prints a newline after processing the entire string.
// In the main function, we check if there is exactly one argument passed to the program (besides the program name). If there is, we call the alpha_mirror function with the argument
// string. After that, we print a newline character and return 0 to indicate that the program finished successfully. The expected output will be the input string with each alphabetical character replaced by its opposite, followed by a newline. For example, if the input string is "Hello, World!", the output will be "Svool, Dliow!".

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void alpha_mirror(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar('z' - (str[i] - 'a'));
		else if (str[i] >= 'A' && str[i] <= 'Z')
				ft_putchar('Z' - (str[i] - 'A'));
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}

// The function ft_putchar is a helper function that takes a character as an argument and writes it to the standard output using the write system call. It is used to print individual characters in the alpha_mirror function.
// The function alpha_mirror takes a string as an argument and iterates through each character in the string. For each character, it checks if it is an uppercase letter (between 'A'
// and 'Z') or a lowercase letter (between 'a' and 'z'). If it is an uppercase letter, it calculates the opposite character by subtracting the ASCII value of the character
// from 'Z' and adding 'A'. If it is a lowercase letter, it calculates the opposite character by subtracting the ASCII value of the character from 'z' and adding 'a'. If the character is not an alphabetical character, it simply prints it as is. Finally, it prints a newline after processing the entire string.
// In the main function, we check if there is exactly one argument passed to the program (besides the program name). If there is, we call the alpha_mirror function with the argument
// string. After that, we print a newline character and return 0 to indicate that the program finished successfully. The expected output will be the input string with each alphabetical character replaced by its opposite, followed by a newline. For example, if the input string is "Hello, World!", the output will be "Svool, Dliow!". 

#include <stdio.h>

int max(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int highest = -2147482648;
	unsigned int i = 0;
	while (i < len)
	{
		if (tab[i] > highest)
			highest = tab[i];
		i++;
	}
	return (highest);
}

