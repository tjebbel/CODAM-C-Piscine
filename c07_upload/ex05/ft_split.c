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

// assignment:  ft_count_words skips separation marks, counts beginning of each word and skips the word
// reserve count + 1 pointers, the last one begin NULL
// for each start of the word ft_word_up measures the word and copies all to new string
// if a reservation fails, ft_free_all gives back all reservations and NULL is given back
// ft_split gives an array of strings back ending on NULL, without empty strings, if a reservation fails halfway, free op memory what was already reserved
// Round 1: Count the words - skip separation marks, if followed by this that is a new word and continue until the end (REPEAT)
// Round 2: Reserve an array of strings - count +1 pointers (last one being NULL) - 
// Round 3: Fill - measure length of each word, malloc(len + 1), copy and close

int ft_is_sep(char c, char *charset)
{
    while (*charset)
    {
        if (c == *charset)
            return (1);
        charset++;
    }
    return (0)
}

int ft_count_words(char *str, char *charset)
{
    int count;

    count = 0;
    while (*str)
    {
        while (*str && ft_is_sep(*str, charset))
            str++;
        if (*str)
            count++;
        while (*str && !ft_is_sep(*str, charset))
            str++;
    }
    return (count);
}

char *ft_word_dup(char *start, char *charset)
{
    char *word;
    int len;
    int i;

    len = 0;
    while (start[len] && !ft_is_sep(start[len], charset))
        len++;
    word = malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = start[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

void *ft_free_all(char **tab, int filled)
{
    while (filled > 0)
    {
        filled--;
        free(tab[filled]);
    }
    free(tab);
    return (NULL)
}

char **ft_split(char *str, char *charset)
{
    char **tab;
    int w;

    tab = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
    if (!tab)
        return(NULL);
    w = 0;
    while (*str)
    {
        while (*str && ft_is_sep(*str, charset))
            str++;
        if (*str)
        {
            tab[w] = ft_word_dup(str, charset);
            if (!tab[w])
                return (ft_free_all(tab, w));
            w++;
        }
        while (*str && !ft_is_sep(*str, charset))
            str++;
    }
    tab[w] = NULL;
    return (tab);
}
