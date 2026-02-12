// program for duplicating a string using dynamic memory allocation
// The function ft_strdup takes a string as an argument and returns a pointer to a new string that is a duplicate of the original string.
// It first calculates the length of the input string by iterating through it until it reaches the null terminator ('\0').
// Then, it allocates memory for the new string using malloc, ensuring that there is enough space to hold the duplicate string and the null terminator.
// If the memory allocation fails, it returns NULL. Otherwise, it copies the characters from the original string to the
// newly allocated string using a while loop, and finally returns a pointer to the duplicated string.
// The expected output will be a duplicate of the input string, for example, if the input string is "Hello", the output will also be "Hello".
// The function ft_strdup is a custom implementation of the standard library function strdup, which is used to create a duplicate of a string by allocating memory for it and copying the contents of the original string into the newly allocated memory.

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*sptr;
	char	*dptr;

	sptr = src;
	while (*sptr++)
		;
	dup = malloc(sptr - src + 1);
	if (!dup)
		return (NULL);
	dptr = dup;
	while ((*dptr++ = *src++) != '\0')
		;
	return (dup);
}
	
// The function ft_strdup takes a string src as an argument and creates a duplicate of it by allocating memory and copying the characters.
// It first initializes a pointer sptr to the beginning of the input string src and iterates through the string until it reaches the null terminator ('\0') to calculate the length of the string.
// Then, it allocates memory for the duplicate string dup using malloc, ensuring that there is enough space to hold the duplicate string and the null terminator. The size of the allocated memory is determined by the difference between sptr and src, which gives the length of the string, plus one for the null terminator.
// If the memory allocation fails, it returns NULL. Otherwise, it initializes a pointer dptr to the beginning of the newly allocated memory dup and uses a while loop to copy each character from the original string src to the duplicate string dup until it reaches the null terminator.
// Finally, it returns a pointer to the duplicated string dup, which contains the same characters as the original string src. The expected output will be a duplicate of the input string, for example, if the input string is "Hello", the output will also be "Hello".
// The function ft_strdup is a custom implementation of the standard library function strdup, which is used to create a duplicate of a string by allocating memory for it and copying the contents of the original string into the newly allocated memory.

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*strcpy;

	length = 0;
	while (src[length])
		length++;
	strcpy = malloc(length + 1);
	if (strcpy != NULL)
	{
		i = 0;
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}

// program for testing the ft_strdup function by duplicating a string and printing the result
// The expected output will be a duplicate of the input string, for example, if the input string is "Hello", the output will also be "Hello".
// The function ft_strdup is a custom implementation of the standard library function strdup, which is used to create a duplicate of a string by allocating memory for it and copying the contents of the original string into the newly allocated memory.
// In the main function, we declare a string greet with the value "Salut" and another string test1 with a longer value. We then call ft_strdup with greet and test1 as arguments to create duplicates of these strings, storing the results in test2 and the return value of ft_strdup(greet), respectively. Finally, we print the duplicated strings to verify that they have been copied correctly.

#include <stdio.h>
char    *ft_strdup(char *src);

int main(void) {
	char *greet = "Salut";
	char *test1 = "Gonna pass this test, even if I gotta dup!\n";
	char *test2 = ft_strdup(test1);

	printf("%s\n", ft_strdup(greet));
	printf("test1: %s", test1);
	printf("test2: %s", test2);
	return 0;
}