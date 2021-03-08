/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_triangle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:32:10 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/08 10:44:44 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static int		ft_error_triangle(t_triangle *triangle)
{
	if ((triangle->colour.r < 0 || triangle->colour.r > 255)
	|| (triangle->colour.g < 0 || triangle->colour.g > 255)
	|| (triangle->colour.b < 0 || triangle->colour.b > 255))
	{
		perror("Los parametros del triangle son incorrectos\n");
		return (0);
	}
	return (1);
}

static void		ft_add_triangle(t_scene **scene, t_triangle *triangle)
{
	t_triangle	*new_triangle;

	new_triangle = ft_lstnew(triangle);
	if ((*scene)->triangle == NULL)
		(*scene)->triangle = new_triangle;
	else
		ft_lstadd_back(&(*scene)->triangle, new_triangle);
}

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
	if (ft_error_triangle(triangle))
		ft_add_triangle(scene, triangle);
	return ;
}