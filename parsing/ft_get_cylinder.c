/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cylinder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:24:20 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/08 10:38:16 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static int		ft_error_cylinder(t_cylinder *cylinder)
{
	if ((cylinder->diameter <= 0)
	|| (cylinder->height <= 0)
	|| (cylinder->orientation.x < -1 || cylinder->orientation.x > 1)
	|| (cylinder->orientation.y < -1 || cylinder->orientation.y > 1)
	|| (cylinder->orientation.z < -1 || cylinder->orientation.z > 1)
	|| (cylinder->colour.r < 0 || cylinder->colour.r > 255)
	|| (cylinder->colour.g < 0 || cylinder->colour.g > 255)
	|| (cylinder->colour.b < 0 || cylinder->colour.b > 255))
	{
		perror("Los parametros del cylinder son incorrectos\n");
		return (0);
	}
	return (1);
}

static void		ft_add_cylinder(t_scene **scene, t_cylinder *cylinder)
{
	t_list		*new_cylinder;

	new_cylinder = ft_lstnew(cylinder);
	if ((*scene)->cylinder == NULL)
		(*scene)->cylinder = new_cylinder;
	else
		ft_lstadd_back(&(*scene)->cylinder, cylinder);
	
}

void            ft_get_cylinder(t_scene **scene, char *line)
{
    t_cylinder		*cylinder;
	int				i;

	cylinder = (t_cylinder *) malloc(sizeof(t_cylinder) * 1);
	i = 2;
	cylinder->position = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
	cylinder->orientation = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
	cylinder->diameter = ft_atof(&line[i]);
    i += ft_next_value(&line[i]);
	cylinder->height = ft_atof(&line[i]);
	i += ft_next_value(&line[i]);
	cylinder->colour = ft_get_rgb(&line[i]);
	if (ft_error_cylinder(cylinder))
		ft_add_cylinder(scene, cylinder);
	return ;
}