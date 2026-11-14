/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 13:49:41 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 11:20:51 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

// assignment: Measure, malloc(len + 1), copy - only malloc (no strlen and strcopy)

char *ft_strdup(char *src)
{
	char *dup;
	int len;
	int i;

	len = 0;
	while(src[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1))
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}


/* 
char	*ft_strdup(const char *s)
{
	char	*dup; // Pointer for the duplicated string
	size_t	len; // Variable to hold the length of the original string

	len = strlen(s); // Get the length of the original string
	dup = (char *)malloc(len + 1); // Allocate memory for the duplicate string (+1 for null terminator)
	if (dup == NULL) // Check if memory allocation was successful
		return (NULL); // Return NULL if allocation failed
	strcpy(dup, s); // Copy the original string to the duplicated string
	return (dup); // Return the pointer to the duplicated string
}

int	main(void)
{
	char	*original = "Hello, World!";
	char	*duplicate = ft_strdup(original);

	if (duplicate != NULL)
	{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
} */

/* 
The function ft_strdup takes a string s as input and returns a pointer to a new string which is a duplicate of the string s.
It first calculates the length of the input string s using the strlen function and stores it in the variable len.
Then, it allocates memory for the duplicate string using malloc, requesting len + 1 bytes to accommodate the characters of the string and the null terminator.
If the memory allocation fails (i.e., malloc returns NULL), the function returns NULL to indicate that the duplication was unsuccessful.
If the memory allocation is successful, it uses the strcpy function to copy the contents of the original string s into the newly allocated memory pointed to by dup.
Finally, the function returns the pointer dup, which now points to a duplicate of the original string s.
In the main function, we declare a string original and initialize it with the value "Hello, World!".
We then call ft_strdup with original as the argument and store the result in the pointer duplicate.
If the duplication is successful (i.e., duplicate is not NULL), we print both the original and duplicate strings to verify that they are the same.
After printing, we free the memory allocated for duplicate to prevent memory leaks.
If the duplication fails (i.e., duplicate is NULL), we print an error message indicating that memory allocation failed.
Finally, we return 0 to indicate that the program finished successfully, and the expected output will be:
Original: Hello, World!
Duplicate: Hello, World!

The function ft_strdup is structured as follows:

Function Declaration: It takes a constant character pointer s as an argument, which points to the string to be duplicated.
Variable Declarations: It declares a pointer dup for the duplicated string and a variable len to store the length of the original string.
Memory Allocation: It allocates memory for the new string, ensuring enough space for the original string plus a null terminator.
Error Checking: It checks if the memory allocation was successful.
String Copying: It uses strcpy to copy the contents of the original string to the newly allocated memory.
Return Statement: Finally, it returns the pointer to the duplicated string.

*/
