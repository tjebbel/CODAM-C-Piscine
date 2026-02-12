// function that copies the string pointed to by s2, including the terminating null byte ('\0'), to the buffer pointed to by s1. 
// The strings may not overlap, and the destination string s1 must be large enough to receive the copy. 
// The function returns a pointer to the destination string s1.

char	*ft_strcpy(char *s1, char *s2)
{
	while ((*s1++ = *s2++))
		;
	return (s1);
}

// function that copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest. 
// The strings may not overlap, and the destination string dest must be large enough to receive the copy. 
// The function returns a pointer to the destination string dest.

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// program for testing the ft_strcpy function by copying a string from one variable to another and printing the result

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
	
int main(void)
{
	char hero[] = "pacman";
	char villian [] = "frogger";

	ft_strcpy(hero, villian);
	printf("%s\n", hero);
	return 0;
}

// program for testing the ft_strcpy function by copying a string from one variable to another and printing the result, using different strings
// The expected output will be "sally" since the string "sally" is copied into the variable boy

#include <stdio.h>

char *ft_strcpy(char *s1, char *s2);

int main(void)
{
    char boy[] = "harry";
    char girl[] = "sally";

    printf("boy is: %s\n", boy);
    printf("girl is: %s\n", girl);
    ft_strcpy(boy, girl);
    printf("boy is: %s\n", boy);
    return (0);
}