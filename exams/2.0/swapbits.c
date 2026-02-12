// program to swap the first 4 bits with the last 4 bits of an unsigned char
// The function swap_bits takes an unsigned char c as an argument and returns a new unsigned char where the first 4 bits of c are swapped with the last 4 bits.
// It does this by right-shifting c by 4 bits to move the last 4 bits to the position of the first 4 bits, and left-shifting c by 4 bits to move the first
// 4 bits to the position of the last 4 bits. The bitwise OR operator is then used to combine these two results, effectively swapping the bits.
// In the main function, we would declare an unsigned char variable, assign it a value, and call the swap_bits function with this variable as an argument. We would then print the resulting unsigned
// char to verify that the bits have been swapped correctly. The expected output will be the unsigned char with its first 4 bits and last 4 bits swapped, for example, if the input is 't' (ASCII 116, binary 01110100), the output will be 'G' (ASCII 71, binary 01000111).

unsigned char	swap_bits(unsigned char c)
{
	return ((c >> 4) | (c << 4));
}

// program for testing the swap_bits function by swapping the bits of a character and printing the results
// The expected output will show the original character, its binary representation, the swapped character, and

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

unsigned char   swap_bits(unsigned char c);
int asciiToBinary(int input);

int	main(void)
{
	char	c;

	c = 't';
	write(1, &c, 1);
	write(1, "\n", 1);
	printf("%08d %c\n", asciiToBinary(toascii(c)), c);
	c = swap_bits(c);
	printf("%08d %c\n", asciiToBinary(toascii(c)), c);
	write(1, &c, 1);
	write(1, "\n", 1);

	return (0);
}


int asciiToBinary(int input)
{
	int result = 0, i = 1, remainder;

	/* convert decimal to binary format */
	while (input > 0) {
		remainder = input % 2;
		result = result + (i * remainder);
		input = input / 2;
		i = i * 10;
	}

	/* print the resultant binary value */
	return(result);
}

// The function asciiToBinary takes an integer input (which represents an ASCII value) and converts it to its binary representation.
// It initializes an integer variable result to 0, which will hold the final binary value, and an integer variable i to 1, which will be used to calculate the place value of each binary digit.
// The function enters a while loop that continues as long as the input is greater than 0. Inside the loop, it calculates the remainder of the input divided by 2 to get
// the least significant bit of the binary representation. It then updates the result by adding the product of i and the remainder, effectively building the binary number in reverse order.
// The input is then divided by 2 to remove the least significant bit, and i is multiplied by 10 to move to the next place value in the binary representation.
// Once the loop exits, the function returns the result, which is the binary representation of the original ASCII value as an integer
// In the main function, we declare a character variable c and assign it the value 't'. We print the original character and its binary representation using the asciiToBinary function.
// We then call the swap_bits function with c as an argument to swap its bits, and print the swapped character and its binary representation again to verify that the bits have been swapped correctly. Finally
// The main function demonstrates the use of the swap_bits function by declaring two character variables, letter_t and letter_G, and assigning them the values 't' and 'G', respectively.
// It then calls the swap_bits function with each of these characters as arguments and prints the results to the standard output. The expected output will show that 't' is swapped to 'G' and 'G' is swapped to 't', confirming that the swap_bits function is working correctly.	
// 

#include <stdio.h>

unsigned char swap_bits(unsigned char c);

int main(void)
{
	char letter_t;
	char letter_G;
	letter_t = 't';
	letter_G = 'G';

	printf("letter_t after swap: %c", swap_bits(letter_t));
	printf("\n");
	printf("letter_G after swap: %c", swap_bits(letter_G));
	printf("\n");
	return (0);
}
