 #include "fillit.h"
 

char	*read_tetriminos_file(int fd)
{
	char			buff[BUFF_SIZE + 1];
	char			*file;
	int				i;

	i = 0;
	file = ft_strnew(0);
	while ((i = read(fd, buff, BUFF_SIZE)))
	{
		buff[i] = '\0';
		file = ft_strjoin(file, buff);
	}
	return (file);
}

int main(int ac, char **av)
{
    char    **tetris;
    char    *line;
    char    *tmp_line;
    int     fd;
    int     curs;
    int     valid;

    if (ac == 2)
    {
        fd = open(av[1], O_RDONLY);
        line = read_tetriminos_file(fd);
    }
    else
        ft_putstr("usage : ./fillit file_name");
    return (0);
}