#include "fillit.h"

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

/* check  the number of blocks and newlines */

int     newlinesnblocks_number(const char *tetris_file,int nb)
{
    int i;
    int newline;
    int block;

    i = 0;
    newline = 0;
    block = 0;
    while(tetris_file[i] != '\0')
    {
        if(tetris_file[i] == '\n')
            newline++;
        if(tetris_file[i] == '#')
            block++;
        i++;
    }
    printf("number of newlines : %d\n",newline);
    printf("number of blocks : %d\n",block);
    if(newline != (5 * nb) - 1 || block != 4 * nb)
        return(0);
    return(1);
}

/* checking if '\n' is in the right place */
 
int    check_line(char **tetris)
{

	int i;
	int count;

	count = 0;
	while (tetris[count][i])
	{
		i = 0;
		while (tetris[count][i])
		{
            if (tetris[count][i] == '\n' && (i != 4 && i != 9 && i != 14 &&
            i != 19))
				return (0);
			i++;
		}
		count++;
	}
	return (1);
}

/* checking if the '#' are related  */

int		related_blocks(char **tetris)
{
	int count;
	int i;
	int related;

	count = 0;
	while (tetris[count])
	{
		i = 0;
		related = 0;
		while (tetris[count][i])
		{
			if (tetris[count][i] == '#')
			{
				if (tetris[count][i + 1] == '#')
					related++;
				if (tetris[count][i + 5] == '#')
					related++;
			}
			i++;
		}
		if (!(related == 3 || related == 4))
			return (0);
		count++;
	}
	return (1);
}

/*the validation function  it combines all the tests plus the lengh test*/

int     is_valid(int nb, char *tetris_file, char **tetris)
{
    int i;

    i = ft_strlen(tetris_file);
    if(i < 20 || i > 545)
        return(0);
    if(check_chars(tetris_file) != 1 || newlinesnblocks_number(tetris_file,nb) 
    != 1)
        return(0);
    if(check_line(tetris) != 1 || related_blocks(tetris) != 1)
        return(0);
    return(1);
}