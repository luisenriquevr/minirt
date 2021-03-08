/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 19:21:31 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 16:51:53 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "stdlib.h"
# include "stdio.h"

float			ft_atof(const char *str);
int				ft_key_values(int key, t_scene **scene);
static void		ft_save_image(int w, int h, char *img_data);
t_colour        ft_vector_to_colour_struct(t_vector vec);
t_vector	    ft_colour_to_vector_struct(t_colour vec);
t_vector		ft_colour_to_vector(t_vector colour);
int			    ft_colour_to_int(t_colour colour);
t_colour		ft_colour_set(float r, float g, float b);
t_colour        ft_colour_mul(t_colour colour, float f);

#endif
