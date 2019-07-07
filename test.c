#include "libft/libft.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>

int     max_tetriminos(const char *tetris_file)
{
    int i;

    i = 0;
    while(tetris_file[i] != '\0')
    {
        if(strlen(tetris_file) > 524)
            return(0);
        i++;
        return(1);
    }
    return(0);
}

int main(int ac, char **av)
{
    int fd;
    int ret;
    char buf[BUFF_SIZE + 1];
   
    fd = open(av[1], O_RDONLY);
    ret = read(fd, buf, BUFF_SIZE);
    buf[ret] = '\0';
    max_tetriminos(av[1]);
    printf("%d\n",max_tetriminos(av[1]));
    return(0);
}