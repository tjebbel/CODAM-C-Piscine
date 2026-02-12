// function that takes an array of integers and its length, and returns the maximum value in the array
// The function max takes an array of integers (tab) and its length (len) as arguments. It first checks if the length is zero, in which case it returns 0, as there are no elements to compare.
// If the length is not zero, it initializes a variable max to the last element of the array (tab[--len]) and then iterates through the array in reverse order using a while loop.
// In each iteration, it compares the current element (tab[len]) with the current maximum value
// If the current element is greater than the current maximum, it updates the max variable to this new value.
// After the loop finishes, it returns the maximum value found in the array.
// In the main function, we test the max function with different arrays of integers and print the results to verify that it correctly identifies the maximum value in each array. The expected output will show the maximum values for each of the test arrays, confirming that the max function works as intended.
// The function max takes an array of integers (tab) and its length (len) as arguments. It first checks if the length is zero, in which case it returns 0, as there are no elements to compare.
// If the length is not zero, it initializes a variable max to the last element of the array (tab[--len]) and then iterates through the array in reverse order using a while loop.
// In each iteration, it compares the current element (tab[len]) with the current maximum value
// If the current element is greater than the current maximum, it updates the max variable to this new value.
// After the loop finishes, it returns the maximum value found in the array.
// In the main function, we test the max function with different arrays of integers and print the results to verify that it correctly identifies the maximum value in each array. The expected output will show the

int max(int *tab, unsigned int len)
{
	int max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

// program to test the max function with different arrays of integers and print the results to verify that it correctly identifies the maximum value in each array. The expected output will show the maximum values for each of the test arrays, confirming that the max function works as intended.
// The function max takes an array of integers (tab) and its length (len) as arguments. It first checks if the length is zero, in which case it returns 0, as there are no elements to compare.
// If the length is not zero, it initializes a variable max to the last element of the array (tab[--len]) and then iterates through the array in reverse order using a while loop.
// In each iteration, it compares the current element (tab[len]) with the current maximum value
// If the current element is greater than the current maximum, it updates the max variable to this new value.
// After the loop finishes, it returns the maximum value found in the array.
// In the main function, we test the max function with different arrays of integers and print the results to verify that it correctly identifies the maximum value in each array. The expected output will show
// the maximum values for each of the test arrays, confirming that the max function works as intended.

#include <stdio.h>

int max(int *tab, unsigned int len);

int	main(void)
{
	int nums01[] = {-2, -3, -776, -9};
	printf("%d\n", max(nums01, 4));
	int nums02[] = {-2, 101, 23};
	printf("%d\n", max(nums02, 3));
	int nums03[] = {-2, 101, 23, 200, -2000, 4000, 3999, 89};
	printf("%d\n", max(nums03, 8));
	return (0);
}