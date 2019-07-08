 #include "fillit.h"
 
 /* it counts the number of tetriminos */

int		tetris_number(char *tetris_file)
{
	int i;
	int nb;

	i = 0;
	nb = 1;
	while (tetris_file[i])
	{
		if (tetris_file[i + 1] == '\n' && tetris_file[i] == '\n')
			nb++;
		i++;
	}
	return (nb);
}


/* function that reads and retuns the tetris_file */

char	*read_tetriminos_file(int fd)
{
	char			buff[BUFF_SIZE + 1];
	char			*tetris_file;
	int				i;

	i = 0;
	file = ft_strnew(0);
	while ((i = read(fd, buff, BUFF_SIZE)))
	{
		buff[i] = '\0';
		tetris_file = ft_strjoin(tetris_file, buff);
	}
	return (tetris_file);
}

int main(int ac, char **av)
{
    char    **tetris;
    char    *tetris_file;
    char    *tmp_line;
    int     fd;
    int     nb;
    int     checkchrs;
    int     blocknn;
    int     checkline;
    int     related;
    int     valid;

    if (ac == 2)
    {
        fd = open(av[1], O_RDONLY);
        tetris_file = read_tetriminos_file(fd);
        nb = tetris_number(tetris_file);
        tetris = split(tetris_file, nb;
        valid = is_valid(nb,tetris_file,tetris);
        printf("%d\n",valid);
    }
    else
        ft_putstr("usage : ./fillit file_name");
    return (0);
}