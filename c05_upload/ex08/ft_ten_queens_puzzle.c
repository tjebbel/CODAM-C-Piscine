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

// assignment: use recusion and backtracking and give back the total number of options
// place one queen per column, go recursively to the next column and if stuck, undo and try next row 
// cols[c] = r > means that the queen is in column 'c' on row 'r'
// a new queen is safe if for each previous column 'p': cols[p] != row (meaning on the same row)
// and also |cols[p] - row| != col - p (meaning on the same diagonal line)

int ft_is_safe(int *cols, int col, int row) 
// checks previous columns and diagonal or (|row-difference == column-difference|)
{
    int prev;
    int diff;

    prev = 0;
    while (prev < col)
    {
        diff = cols[prev] - row;
        if (diff < 0)
            diff = -diff;
        if (cols[prev] == row || diff == col - prev)
            return (0);
        prev++;
    }
    return (1);
}

void ft_print_solution(int *cols)
{
    int i;
    char c;

    i = 0;
    while (i < 10)
    {
        c = cols[i] + '0';
        write(1, &c, 1);
        i++;
    }
    write(1,"\n",1);
}

void ft_solve(int *cols, int col, int *count) 
// tries every row in current column and continues rescursively, at column ten a solutions is printed
{
    int row;

    if (col == 10)
    {
        ft_print_solution(cols);
        (*count)++;
        return ;
    }
    row = 0;
    while (row < 10)
    {
        if (ft_is_safe(cols, col, row))
        {
            cols(col) = row;
            ft_solve(cols, col +1, count);
        }
        row++;
    }

    int ft_ten_queens(void)
    {
        int cols[10];
        int count;
        
        count = 0;
        ft_solve(cols, 0, &count);
        return (count);
    }
    