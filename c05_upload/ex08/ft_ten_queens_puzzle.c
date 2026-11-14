/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 18:14:04 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 18:18:21 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	
/*
Recursion: This is a method where the solution to a problem depends on solutions to smaller instances of the same problem. In our case, we will recursively place queens column by column.
Backtracking: This technique involves exploring all possible configurations and abandoning those that do not lead to a solution. If we find that placing a queen in a certain position leads to a conflict, we backtrack and try the next possible position.
Safety Check: Before placing a queen in a specific position, we need to ensure that it does not conflict with any previously placed queens. This is done using the ft_is_safe function.
*/

// assignment: use recusion and backtracking and give back the total number of options
// place one queen per column, go recursively to the next column and if stuck, undo and try next row 
// cols[c] = r > means that the queen is in column 'c' on row 'r'
// a new queen is safe if for each previous column 'p': cols[p] != row (meaning on the same row)
// and also |cols[p] - row| != col - p (meaning on the same diagonal line)

int ft_is_safe(int *cols, int col, int row)  // Checks if a queen can be safely placed in a given row and column.
{
    int prev;
    int diff;

    prev = 0;
    while (prev < col)
    {
        diff = cols[prev] - row; // checks previous columns 
        if (diff < 0)
            diff = -diff;
        if (cols[prev] == row || diff == col - prev) // checks diagonal or (|row-difference == column-difference|)
            return (0); // conflict found
        prev++;
    }
    return (1); // queen can be placed
}

void ft_print_solution(int *cols) // Prints the current configuration of queens on the board.
{
    int i;
    char c;

    i = 0;
    while (i < 10)
    {
        c = cols[i] + '0'; // convert row number to charater
        write(1, &c, 1);
        i++;
    }
    write(1,"\n",1);
}

void ft_solve(int *cols, int col, int *count) // Recursively attempts to place queens in each column.
{
    int row;

    if (col == 10) // all queens are placed in different columns
    {
        ft_print_solution(cols);
        (*count)++; // increment solution count
        return ;
    }
    row = 0;
    while (row < 10)
// tries every row in current column and continues rescursively, at column ten a solutions is printed    
    {
        if (ft_is_safe(cols, col, row)) // check if safe to place queen
        {
            cols(col) = row; // place queen
            ft_solve(cols, col +1, count); // recur to place the next queen
        }
        row++;
    }

    int ft_ten_queens(void) // Initializes the process and counts the total solutions.
    {
        int cols[10]; // array to hold al the row positions of the queens
        int count; // solution counter
        
        count = 0;
        ft_solve(cols, 0, &count); // start solving form first column
        return (count); // return total number of solutions = 724
    }

/*
Safety Check (ft_is_safe): This function checks if placing a queen at a specific row in the current column is safe. 
It checks against all previously placed queens to ensure no conflicts arise.

Printing Solutions (ft_print_solution): This function outputs the current configuration of queens. Each queen's position is represented by its row number in the respective column.

Recursive Solver (ft_solve): This function attempts to place queens column by column. If a queen is placed successfully, it recursively calls itself to place the next queen. 
If all queens are placed (when col equals 10), it prints the solution and increments the solution count.

Main Function (ft_ten_queens): This initializes the process by declaring an array to hold the positions of the queens and starts the recursive solving process.
*/