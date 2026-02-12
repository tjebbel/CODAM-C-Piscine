// function that takes a string as input and reverses it in place
// The function ft_strrev takes a string as input and reverses it in place. It first calculates the length of the string by iterating through it until it reaches the null terminator.
// Then, it uses a loop to swap characters from the beginning and end of the string until it reaches the middle. The loop continues until the index i is less than the index len, which ensures that all characters are swapped correctly. Finally, it returns the reversed string.
// The function ft_strrev can also be implemented using a loop that iterates through the string and uses a temporary variable to swap characters. In this approach, we can use two pointers, one starting at the beginning of the string and the other starting at the end of the string. We can then swap the characters at these two pointers and move them towards each other until they meet in the middle. This method achieves the same result of reversing the string in place.
// The function ft_strrev can also be implemented using recursion. In this approach, we can define a recursive function that takes the string and its length as arguments. The function can swap the first
// and last characters of the string, and then call itself with the substring that excludes the first and last characters. This process continues until the base case is reached (when the length of the substring is less than or equal to 1), at which point the string is fully reversed. This method also achieves the same result of reversing the string in place.
// In the main function, we can test the ft_strrev function by passing different strings and printing the results. The expected output will show the reversed versions of the input strings, confirming that the ft_strrev function correctly reverses the strings in place as expected.

char *ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	len = 0;
	while (str[len])
		len++;
	i = -1;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}

//

char *ft_strrev(char *str)
{
	char temp;
	int length = 0;
	int i = 0;

	length = 0;
	i = 0;
	while (str[length])
		length++;
	while (i < (length - 1))
	{
		temp = str[i];
		str[i] = str[length - 1];
		str[length - 1] = temp;
		i++;
		length--;}
	return (str);
}

//

void ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char *ft_strrev(char *str)
{
	char *begin;
	char *end;

	begin = str;
	end = str;
	while (*end)
		end++;
	end--;
	while (begin < end)
	{
		ft_swap(begin, end);
		begin++;
		end--;
	}
	return (str);
}

// 

#include <stdio.h>
#include <unistd.h>

char *ft_strrev(char *str);

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		printf("%s\n", ft_strrev(argv[1]));
	return (0);
}

// 

