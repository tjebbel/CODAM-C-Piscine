/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                        :+:    :+:             */
/*                                                     +:+                    */
/*   By: tlodeize <tlodeize@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 13:49:41 by tlodeize      #+#    #+#                 */
/*   Updated: 2026/02/11 11:20:51 by tlodeize      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

// assignment: 6. ft_split gives an array of strings back ending on NULL, without empty strings, if a reservation fails halfway, free op memory what was already reserved
// Round 1: Count the words - skip separation marks, if followed by this that is a new word and continue until the end (REPEAT)
// Round 2: Reserve an array of strings - count +1 pointers (last one being NULL) - 
// Round 3: Fill - measure length of each word, malloc(len + 1), copy and close
