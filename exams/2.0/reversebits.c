// function that takes an unsigned char and returns the value of the bits reversed
// The function reverse_bits takes an unsigned char as input and returns an unsigned char with the bits reversed. It initializes a variable res to 0, which will hold the result of the reversed bits. It then uses a loop that iterates 8 times (the number of bits in an unsigned char) to reverse the bits. In each iteration, it multiplies res by 2 (to shift the bits to the left) and adds the least significant bit of octet (octet % 2) to res. Then it divides octet by 2 (to shift the bits to the right) and decrements the loop counter. Finally, it returns the resulting unsigned char with the bits reversed.
// The function reverse_bits can also be implemented using bitwise operations. It uses a series of bitwise shifts and masks to reverse the bits of the input unsigned char. It shifts each bit of octet to its corresponding position in the result by using right shifts and bitwise AND to isolate each bit, and then left shifts to place it in the correct position in the result. Finally, it combines all the shifted bits using bitwise OR to produce the final reversed result.
// In the main function, we test the reverse_bits function by passing an unsigned char with the value 38 (which is 00100110 in binary) and printing the result. The expected output will be the decimal value of the reversed bits, which is 70 (01001100 in binary). This confirms that the reverse_bits function correctly reverses the bits of the input unsigned char.

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res = 0;
	int i = 8;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

// function that takes an unsigned char and returns the value of the bits reversed using bitwise operations
// The function reverse_bits takes an unsigned char as input and returns an unsigned char with the bits reversed. It uses a series of bitwise shifts and masks to reverse the bits of the input unsigned char. It shifts each bit of octet to its corresponding position in the result by using right shifts and bitwise AND to isolate each bit, and then left shifts to place it in the correct position in the result. Finally, it combines all the shifted bits using bitwise OR to produce the final reversed result.
// The function reverse_bits can also be implemented using a loop that iterates 8 times (the number of bits in an unsigned char) to reverse the bits. In each iteration, it multiplies res by 2 (to shift the bits to the left) and adds the least significant bit of octet (octet % 2) to res. Then it divides octet by 2 (to shift the bits to the right) and decrements the loop counter. Finally, it returns the resulting unsigned char with the bits reversed.
// In the main function, we test the reverse_bits function by passing an unsigned char with the value 38 (which is 00100110 in binary) and printing the result. The expected output will be the decimal value of the reversed bits, which is 70 (01001100 in
// binary). This confirms that the reverse_bits function correctly reverses the bits of the input unsigned char.
// The function reverse_bits takes an unsigned char as input and returns an unsigned char with the bits reversed. It uses a series of bitwise shifts and masks to reverse the bits of the input unsigned char. It shifts each bit of octet to its corresponding position in the result by using right shifts and bitwise AND to isolate each bit, and then left shifts to place it in the correct position in the result. Finally, it combines all the shifted bits using bitwise OR to produce the final reversed result.
// The function reverse_bits can also be implemented using a loop that iterates 8 times (the number of bits in an unsigned char) to reverse the bits. In each iteration, it multipl

unsigned char	reverse_bits(unsigned char octet)
{
	return (((octet >> 0) & 1) << 7) | \
		   (((octet >> 1) & 1) << 6) | \
		   (((octet >> 2) & 1) << 5) | \
		   (((octet >> 3) & 1) << 4) | \
		   (((octet >> 4) & 1) << 3) | \
		   (((octet >> 5) & 1) << 2) | \
		   (((octet >> 6) & 1) << 1) | \
		   (((octet >> 7) & 1) << 0); 
}

// program to test the reverse_bits function
// The main function tests the reverse_bits function by passing an unsigned char with the value 38 (which is 00100110 in binary) and printing the result. The expected output will be
// the decimal value of the reversed bits, which is 70 (01001100 in binary). This confirms that the reverse_bits function correctly reverses the bits of the input unsigned char.
// The function reverse_bits takes an unsigned char as input and returns an unsigned char with the bits reversed. It uses a series of bitwise shifts and masks to reverse the bits of the input unsigned char. It shifts each bit of octet to its corresponding position in the result by using right shifts and bitwise AND to isolate each bit, and then left shifts to place it in the correct position in the result. Finally, it combines all the shifted bits using bitwise OR to produce the final reversed result.
// The function reverse_bits can also be implemented using a loop that iterates 8 times (the number of bits in an unsigned char) to reverse the bits. In each iteration, it multipl 

#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet);

int     main()
{
	printf("%d", reverse_bits(38));
	return (0);
}

/* ******************************************
** echo 00100110 | perl -lpe '$_=pack"B*",$_'
** echo "d" | perl -lpe '$_=unpack"B*"'
** ;; Convert binary to ascii with perl;
**
** echo "&" | perl -lpe '$_=unpack"B*"'
** echo 01100100 | perl -lpe '$_=pack"B*",$_'
** ;; Use perl to convert ascii char to binary
**
** echo "&" | perl -lpe '$_=unpack"B*"' && echo "d" | perl -lpe '$_=unpack"B*"'
** ;; See the bits reversed more easily 
** ******************************************
*/