/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_triangle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:32:10 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/12 17:46:57 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void            ft_get_triangle(t_scene **scene, char *line)
{
    t_triangle		*triangle;
	int				i;

	triangle = (t_triangle *) malloc(sizeof(t_triangle) * 1);
	i = 2;
	triangle->a = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
	triangle->b = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
	triangle->c = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
	triangle->colour = ft_get_rgb(&line[i]);
	(*scene)->triangle = triangle;
	return ;
}