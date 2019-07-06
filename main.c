/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 00:37:55 by hkchikec          #+#    #+#             */
/*   Updated: 2019/07/03 00:37:57 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>

int main(int ac, char **av)
{
    char    **tetris;
    char    *line;
    char    *tmp_line;
    int     fd;
    int     curs;

    if (ac == 2)
    {
        fd = open(av[1], O_RDONLY);
        if (fd < 0)
            ft_putstr("File does not exist !");
    }
    else
        ft_putstr("usage : ./fillit file_name");
    while (get_next_line(fd, &line))
    {
        tmp_line = line;
        curs = 0;
        while (tmp_line[curs])
        {
            if (tmp_line[curs] != '#' || tmp_line[curs] != '.')
                ft_putstr("error");
            curs++;
        }
        free(tmp_line);
    }
    return (0);
}
// comment