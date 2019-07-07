#include "fillit.h"

/* this function is for checking if the the number 
tetriminos is equal or less than 26 .  
(26 tetriminos = 545*char) */

int     max_tetriminos(const char *tetris_file)
{
    int i;

    i = ft_strlen(tetris_file);
    if(i >= 20 && i <= 545)
            return(1);
    return(0);
}

/* this functions is for checking if there is only '\n' , '#'
'.' in the file
any other char is an error */

int    check_chars(const char *tetris_file) 
{
    int i;

    i = 0;
    while(tetris_file[i] != '\0')
    {
        if(tetris_file[i] != '\n' && tetris_file[i] 
        != '#' && tetris_file[i] != '.')
            return(0);
        i++;
    }
    return(1);
}

/* checking if '\n' is in the right place */
bro ra jani neas htal gheda w nkemel