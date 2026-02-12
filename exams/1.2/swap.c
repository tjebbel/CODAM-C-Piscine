// function for swapping the values of two integers

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// program for testing the ft_swap function by swapping the values of two integers and printing the results
// The function ft_swap takes two integer pointers as arguments and swaps the values they point to.
// It first declares an integer variable tmp to temporarily hold the value of *a.
// The function assigns the value pointed to by a to tmp, then assigns the value pointed to by b to *a, and finally assigns the value stored in tmp to *b, effectively swapping the values of the two integers.
// In the main function, we declare two integer variables old_age and young_age, and initialize them with the values 223 and 1, respectively. We print their values before the swap to verify their initial state.
// We then call ft_swap with the addresses of old_age and young_age to swap their values. After the swap, we print their values again to verify that the swap was successful. The expected output will show that old_age is now 1 and young_age is now 223, confirming that the values have been swapped correctly.
// The expected output will be: old_age: 223, young_age: 1 | swap them ages! -> old_age: 1, young_age: 223

#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int old_age = 223;
	int young_age = 1;
	printf("old_age: %d\nyoung_age: %d\n", old_age, young_age);
	ft_swap(&old_age, &young_age);
	printf("swap them ages!\n");
	printf("old_age: %d\nyoung_age: %d\n", old_age, young_age);
	return (0);
}

// The function ft_swap is a simple utility function that swaps the values of two integers using pointers.
// It takes two integer pointers as parameters, which point to the integers that need to be swapped.
// Inside the function, we declare a temporary integer variable tmp to hold the value of one of the integers during the swap process.
// The function first assigns the value pointed to by a to tmp, 
// then assigns the value pointed to by b to the location pointed to by a, 
// and finally assigns the value stored in tmp to the location pointed to by b. 
// This effectively swaps the values of the two integers without losing any data.