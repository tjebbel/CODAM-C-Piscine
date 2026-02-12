#include <unistd.h>

// program for countdown from 9 to 0, then print a newline

int	main(void)
{
	write(1, "9876543210\n", 11);
	return(0)
}

// function for numbers ascending

void	ft_print_numbers(void)
{
	write(1, "0123456789\n", 11);
}


