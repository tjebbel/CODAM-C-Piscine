// function that takes an unsigned int and returns 1 if it is a power of 2, and 0 otherwise
// The function is_power_of_2 checks if a given unsigned integer n is a power of 2. It first checks if n is 0, in which case it returns 0, as 0 is not a power of 2. If n is not 0, it uses a bitwise operation to determine if n has only one bit set (which is the condition for being a power of 2). The expression (n & (-n)) isolates the least significant bit that is set in n, and if this value is equal to n itself, it means that n has only one bit set and is therefore a power of 2. If this condition is true, the function returns 1; otherwise, it returns 0.
// The function is_power_of_2 can also be implemented using a loop that checks if n is divisible by 2 until n becomes 1. If n becomes 1, it means that n is a power of 2 and the function returns 1. If n becomes odd (not divisible by 2) before it becomes 1, it means that n is not a power of 2 and the function returns 0.

int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else
		return ((n & (-n)) == n ? 1: 0);
}

// The function is_power_of_2 checks if a given unsigned integer n is a power of 2. It first checks if n is 0, in which case it returns 0, as 0 is not a power of 2. If n is not 0, it uses a bitwise operation to determine if n has only one bit set (which is the condition for being a power of 2). The expression (n & (-n)) isolates the least significant bit that is set in n, and if this value is equal to n itself, it means that n has only one bit set and is therefore a power of 2. If this condition is true, the function returns 1; otherwise, it returns 0.
// The function is_power_of_2 can also be implemented using a loop that checks if n is divisible by 2 until n becomes 1. If n becomes 1, it means that
// n is a power of 2 and the function returns 1. If n becomes odd (not divisible by 2) before it becomes 1, it means that n is not a power of 2 and the function returns 0.

int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

// The function is_power_of_2 checks if a given unsigned integer n is a power of 2. It first checks if n is 0, in which case it returns 0, as 0 is not a power of 2. If n is not 0, it uses a loop to check if n is divisible by 2. If n is divisible by 2, it divides n by 2 and continues the loop. If n becomes odd (not divisible by 2) before it becomes 1, it means that n is not a power of 2 and the function returns 0. If n becomes 1, it means that n is a power of 2 and the function returns 1.
// The function is_power_of_2 can also be implemented using a bitwise operation to determine if n has only one bit set (which is the condition for being a power of 2).
// The expression (n & (-n)) isolates the least significant bit that is set in n, and if this value is equal to n itself, it means that n has only one bit set and is therefore a power of 2. If this condition is true, the function returns 1; otherwise, it returns 0.
// In the main function, we test the is_power_of_2 function by passing different unsigned integer values and printing the results to verify that it correctly identifies whether each value is a power of 2 or not. The expected output will show "yep" for values that are powers of 2 and "nope" for values that are not, confirming that the is_power_of_2 function works as intended.

int is_power_of_2(unsigned int n)
{
	if (n == 2 || n == 1)
		return (1);
	if (n == 0)
		return (0);
	while (n % 2 == 1)
		return (0);
	while (n > 2)
	{
		if (n % 2 == 1)
			return (0);
		n = n / 2;
	}
	return (1);
}

// The function is_power_of_2 checks if a given unsigned integer n is a power of 2. It first checks if n is 1 or 2, in which case it returns 1, as both 1 (2^0) and 2 (2^1) are powers of 2. If n is 0, it returns 0, as 0 is not a power of 2. If n is greater than 2, it uses a loop to check if n is divisible by 2. If n is odd (not divisible by 2) at any point, it returns 0, indicating that n is not a power of 2. If n becomes less than or equal to 2 and has not been found to be odd, it returns 1, indicating that n is a power of 2.
// In the main function, we test the is_power_of_2 function by passing different unsigned integer values and printing the results to verify that it correctly identifies whether each value is a power of
// 2 or not. The expected output will show "yep" for values that are powers of 2 and "nope" for values that are not, confirming that the is_power_of_2 function works as intended.
// The function is_power_of_2 can also be implemented using a bitwise operation to determine if n has only one bit set (which is the condition for being a power of 2). The expression (n & (-n)) isolates the least significant bit that is set in n, and if this value is equal to n itself, it means that n has only one bit set and is therefore a power of 2. If this condition is true, the function returns 1; otherwise, it returns 0.
// The function is_power_of_2 can also be implemented using a loop that checks if n is divisible by 2 until n becomes 1. If n becomes 1, it means that n is a power of 2 and the function returns 1. If n becomes odd (not divisible by 2) before it becomes 1, it means that n is not a power of 2 and the function returns 0.
// In the main function, we test the is_power_of_2 function by passing different unsigned integer values and printing the results to verify that it correctly identifies whether each value is a power of 2 or not. The expected output will show "yep" for values that are powers of 2 and "nope" for values that are not, confirming that the is_power_of_2 function works as intended.

#include <stdio.h>

int is_power_of_2(unsigned int n);

int main(void)
{
	unsigned int num[7];
	num[0] = 0;
	num[1] = 200;
	num[2] = 32;
	num[3] = 256;
	num[4] = 13;
	num[5] = 1000;
	num[6] = 1024;
	int i;

	i = 0;
	while(i <= 6)
	{
	if (is_power_of_2(num[i]))
		printf("%s %d\n", "yep", num[i]);
	else
		printf("%s %d\n", "nope", num[i]);
	i++;
	}
}