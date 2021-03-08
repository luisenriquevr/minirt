/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_plane.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:39:59 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/07 21:05:07 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static int		ft_error_plane(t_plane *plane)
{
	if ((plane->orientation.x < -1 || plane->orientation.x > 1) 
	|| (plane->orientation.y < -1 || plane->orientation.y > 1) 
	|| (plane->orientation.z < -1 || plane->orientation.z > 1) 
	|| (plane->colour.r < 0 || plane->colour.r > 255) 
	|| (plane->colour.g < 0 || plane->colour.g > 255) 
	|| (plane->colour.b < 0 || plane->colour.b > 255))
	{
		perror("Los parametros del plane son incorrectos\n");
		return (0);
	}
	return (1);
}

static void		ft_add_plane(t_scene **scene, t_plane *plane)
{
	t_list		*new_plane;

	new_plane = ft_lstnew(plane);
	if ((*scene)->plane == NULL)
		(*scene)->plane = new_plane;
	else
		ft_lstadd_back(&(*scene)->plane, new_plane);
}

void			ft_get_plane(t_scene **scene, char *line)
{
	t_plane		*plane;
	int			i;

	plane = (t_plane *) malloc(sizeof(t_plane) * 1);
	i = 2;
	plane->position = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
	plane->orientation = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
	plane->colour = ft_get_rgb(&line[i]);
	if (ft_error_plane(plane))
		ft_add_plane(scene, plane);
	return ;
}