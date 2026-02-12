/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_memory.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 13:43:10 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/10 17:54:13 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_get_hex(unsigned long long nb, int prev) // prev is used to determine if we are printing the address part (prev = 0) or the data part (prev = 1) of the memory dump, which affects how we handle leading zeros for values less than 16
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16 && prev == 1) // if prev is 1, it means we are printing the data part, and we want to print leading zeros for values less than 16
		ft_putchar('0', 1); // print a leading zero for values less than 16 in the data part to maintain a consistent two-digit hexadecimal representation
	if (nb >= 16) // if the number is greater than or equal to 16, we need to recursively call ft_get_hex to print the higher-order digits before printing the last digit
	{
		ft_get_hex(nb / 16, 0);
		ft_get_hex(nb % 16, 0);
	}
	else
	{
		ft_putchar(base[nb], 1);
	}
}

void	ft_print_addr(unsigned long long addr) // This function prints the memory address in hexadecimal format. It first calculates the number of leading zeros needed to ensure that the address is represented as a 16-character hexadecimal string (since an unsigned long long can be up to 16 hexadecimal digits). It then calls ft_get_hex to print the actual hexadecimal representation of the address.
{
	unsigned long long	tmp;
	int					i;

	tmp = addr;
	i = 1;
	while (i++ < 15) // We need to print leading zeros for addresses that are less than 16 hexadecimal digits to maintain a consistent 16-character representation of the address. The loop checks how many hexadecimal digits the address has by dividing it by 16 until it is less than 16, and for each digit that is missing (i.e., for each iteration of the loop), it prints a '0' character.
	{
		if (tmp < 16)
			ft_putchar('0', 1);
		tmp /= 16;
	}
	ft_get_hex(addr, 0);
}

void	ft_print_data(unsigned char *c, int size) // This function prints the data in hexadecimal format and also prints the corresponding characters (or dots for non-printable characters) for a given chunk of memory. It iterates through the data, printing the hexadecimal representation of each byte, and then prints the character representation of the data, replacing non-printable characters with a dot ('.').
{
	int		i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ', 1);
		if (i < size)
		{
			ft_get_hex((unsigned long long)*(c + i), 1); // We pass 1 as the second argument to ft_get_hex to indicate that we are printing the data part, which allows ft_get_hex to handle leading zeros for values less than 16 appropriately. This ensures that each byte of data is represented as a two-digit hexadecimal number, maintaining a consistent format in the memory dump output.
		}
		else if (i != 16)
		{
			ft_putchar(' ', 2);
		}
	}
	i = -1;
	while (i++ < size - 1)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putchar('.', 1);
		else
			ft_putchar(*(c + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	sendsize;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			sendsize = 16;
		else
			sendsize = size % 16;
		ft_print_addr((unsigned long long)c + (i * 16));
		ft_putchar(':', 1);
		ft_print_data(c + (i * 16), sendsize);
		ft_putchar('\n', 1);
		i++;
	}
	return (addr);
}


int main()
{
	char str[] = "\nHello, World! This is a test of ft_print_memory. \n Let's see how it works with non-printable characters like \t and \r.";
	ft_print_memory(str, sizeof(str));
	return 0;
}

/*
The function ft_print_memory is designed to print the memory content of a given address in a specific format.
It takes two parameters: a pointer to the memory address (addr) and the size of the memory to be printed (size).
The function uses a loop to iterate through the memory in chunks of 16 bytes. 
For each chunk, it calculates the size to be printed (sendsize) based on whether it is a full 16-byte chunk or a partial chunk at the end.
It then calls the helper function ft_print_addr to print the memory address in hexadecimal format, followed by a colon.
Next, it calls the helper function ft_print_data to print the actual data in hexadecimal format, along with a representation of the data as characters (non-printable characters are represented as dots).
Finally, it prints a newline character after each chunk of memory is printed.
In the main function, we declare a string str that contains the text "\nHello, World! This is a \n test of ft_print_memory." and call ft_print_memory with str and its size as arguments.
The expected output will show the memory address of str followed by the hexadecimal representation of its content and the corresponding characters, with non-printable characters represented as dots.
*/
