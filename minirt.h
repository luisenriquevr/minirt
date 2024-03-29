/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:04:50 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/05 17:58:31 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif
# define FD_SIZE 4096

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <math.h>
# include <errno.h>
# include <fenv.h>
# include "./v_operations/v_operations.h"
# include "./parsing/parsing.h"
# include "./utils/utils.h"
# include "./maths/maths.h"
# include "./printf/libftprintf.h"


int					get_next_line(int fd, char **line);
int					main(int argc, char *argv[]);
int					ft_minirt(char *txt, int save);
t_scene				*ft_scene_reader(char *txt);


#endif