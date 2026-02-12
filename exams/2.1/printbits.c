// function that takes an unsigned char and prints its binary representation using bitwise operations
// The function print_bits takes an unsigned char as input and prints its binary representation to the standard
// output. It uses a loop to iterate through each bit of the unsigned char, starting from the most significant bit (128) down to the least significant bit (1). In each iteration, it checks if the current bit is set (i.e., if octet is greater than or equal to the current bit value). If it is, it prints '1' and subtracts the current bit value from octet. If it is not, it prints '0'. This process continues until all bits have been checked and printed, resulting in the binary representation of the input unsigned char being displayed. The expected output will be an 8-character string of '0's and '1's representing the binary form of the input unsigned char. For example, if the input is 5 (which is 00000101 in binary), the output will be "00000101".
// The function print_bits can also be implemented using bitwise shifts and masks to check each bit of the unsigned char. In this approach, we can use a loop that iterates 8 times (the number of bits in an unsigned char) and in each iteration, we can right shift the octet by the current bit index and use a bitwise AND with 1 to check if the bit is set. If it is set, we print '1', otherwise we print '0'. This method achieves the same result of printing the binary representation of the input unsigned char.
// The function print_bits can also be implemented using a loop that iterates 8 times (the number of bits in an unsigned char) and in each iteration, it multiplies the result by
// 2 (to shift the bits to the left) and adds the least significant bit of octet (octet % 2) to the result. Then it divides octet by 2 (to shift the bits to the right) and decrements the loop counter. Finally, it returns the resulting unsigned char with the bits reversed.
// In the main function, we test the print_bits function by passing different unsigned char values and
// printing the results. The expected output will show the binary representation of each input unsigned char, confirming that the print_bits function correctly converts the input to its binary form and prints it as expected.

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int div = 128;
	int num = octet;

	while (div != 0)
	{
		if (div <= num)
		{
			write(1, "1", 1);
			num = num % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}

// function that takes an unsigned char and prints its binary representation using bitwise operations
// The function print_bits takes an unsigned char as input and prints its binary representation to the standard
// output. It uses a loop to iterate through each bit of the unsigned char, starting from the most significant bit (128) down to the least significant bit (1). In each iteration, it checks if the current bit is set (i.e., if octet is greater than or equal to the current bit value). If it is, it prints '1' and subtracts the current bit value from octet. If it is not, it prints '0'. This process continues until all bits have been checked and printed, resulting in the binary representation of the input unsigned char being displayed. The expected output will be an 8-character string of '0's and '1's representing the binary form of the input unsigned char. For example, if the input is 5 (which is 00000101 in binary), the output will be "00000101".
// The function print_bits can also be implemented using bitwise shifts and masks to check each bit
// of the unsigned char. In this approach, we can use a loop that iterates 8 times (the number of bits in an unsigned char) and in each iteration, we can right shift the octet by the current bit index and use a bitwise AND with 1 to check if the bit is set. If it is set, we print '1', otherwise we print '0'. This method achieves the same result of printing the binary representation of the input unsigned char.
// The function print_bits can also be implemented using a loop that iterates 8 times (the number of bits in an unsigned char) and in each iteration, it multiplies the result by
// 2 (to shift the bits to the left) and adds the least significant bit of octet (octet % 2) to the result. Then it divides octet by 2 (to shift the bits to the right) and decrements the loop counter. Finally, it returns the resulting unsigned char with the bits reversed.
// In the main function, we test the print_bits function by passing different unsigned char values and printing the results. The expected output will show the binary representation of each input unsigned char, confirming that

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int	i;
	unsigned char bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

// function that takes an unsigned char and prints its binary representation using bitwise operations
// The function print_bits takes an unsigned char as input and prints its binary representation to the standard
// output. It uses a loop to iterate through each bit of the unsigned char, starting from the most significant bit (128) down to the least significant bit (1). In each iteration, it checks if the current bit is set (i.e., if octet is greater than or equal to the current bit value). If it is, it prints '1' and subtracts the current bit value from octet. If it is not, it prints '0'. This process continues until all bits have been checked and printed, resulting in the binary representation of the input unsigned char being displayed. The expected output will be an 8-character string of '0's and '1's representing the binary form of the input unsigned char. For example, if the input is 5 (which is 00000101 in binary), the output will be "00000101".
// The function print_bits can also be implemented using bitwise shifts and masks to check each bit
// of the unsigned char. In this approach, we can use a loop that iterates 8 times (the number of bits in an unsigned char) and in each iteration, we can right shift the octet by the current bit index and use a bitwise AND with 1 to check if the bit is set. If it is set, we print '1', otherwise we print '0'. This method achieves the same result of printing the binary representation of the input unsigned char.
// The function print_bits can also be implemented using a loop that iterates 8 times (the number of bits in an unsigned char) and in each iteration, it multiplies the result by
// 2 (to shift the bits to the left) and adds the least significant bit of octet (octet % 2) to the result. Then it divides octet by

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i;
	char c;

	i = 128;
	while (i > 0)
	{
		if (octet < i)
		{
			c = '0';
			i = i / 2;
			write(1, &c, 1);
		}
		else
		{
			c = '1';
			write(1, &c, 1);
			octet = octet - i;
			i = i / 2;
		}
	}
}

// program to test the print_bits function by passing different unsigned char values and printing the results. The expected output will show the binary representation of each input unsigned char, confirming that the print_bits function correctly converts the input to its binary form and prints it as expected.
// The function print_bits takes an unsigned char as input and prints its binary representation to the standard output. It uses a loop to iterate through each bit of the unsigned char, starting from the most
// significant bit (128) down to the least significant bit (1). In each iteration, it checks if the current bit is set (i.e., if octet is greater than or equal to the current bit value). If it is, it prints '1' and subtracts the current bit value from octet. If it is not, it prints '0'. This process continues until all bits have been checked and printed, resulting in the binary representation of the input unsigned char being displayed. The expected output will be an 8-character string of '0's and '1's representing the binary form of the input unsigned char. For example, if the input is 5 (which is 00000101 in binary), the output will be "00000101".
// The function print_bits can also be implemented using bitwise shifts and masks to check each bit of the unsigned char. In this approach, we can use a loop that iterates 8 times
// (the number of bits in an unsigned char) and in each iteration, we can right shift the octet by the current bit index and use a bitwise AND with 1 to check if the bit is set. If it is set, we print '1', otherwise we print '0'. This method achieves the same result of printing the binary representation of the input unsigned char.
// The function print_bits can also be implemented using a loop that iterates 8 times (the number of bits in an unsigned char) and in each iteration, it multiplies the result by
// 2 (to shift the bits to the left) and adds the least significant bit of octet (octet % 2) to the result. Then it divides octet by
// 2 (to shift the bits to the right) and decrements the loop counter. Finally, it returns the resulting unsigned char with the bits reversed.
// In the main function, we test the print_bits function by passing different unsigned char values and printing the results. The expected output will show the binary representation of each input unsigned char, confirming that
// the print_bits function correctly converts the input to its binary form and prints it as expected.

#include <unistd.h>

void print_bits(unsigned char octet);

int main(void)
{
	print_bits(0);
	write(1, "\n", 1);
	print_bits(1);
	write(1, "\n", 1);
	print_bits(2);
	write(1, "\n", 1);
	print_bits(10);
	write(1, "\n", 1);
	print_bits(113);
	write(1, "\n", 1);
	print_bits(255);
	write(1, "\n", 1);
	return (0);
}
