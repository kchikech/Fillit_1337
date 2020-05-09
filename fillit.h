/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 00:36:48 by hkchikec          #+#    #+#             */
/*   Updated: 2019/07/03 00:36:49 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
#define FILLIT_H
#include "libft/libft.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
# define BUFF_SIZE 600

char	*read_tetriminos_file(int fd);
int     max_tetriminos(const char *tetris_file);
int    check_chars(const char *tetris_file);
int    check_line(char **tetris);
int		related_blocks(char **tetris);
int		tetris_number(char *tetris_file);
int     newlinesnblocks_number(const char *line,int nb);
int     is_valid(int nb, char *tetris_file, char **tetris);
//char	**split(char *tetris_file, int nb);

#endif
