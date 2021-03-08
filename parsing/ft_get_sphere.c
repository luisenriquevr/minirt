/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sphere.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:06:15 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/07 21:01:26 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static int			ft_error_sphere(t_sphere *sphere)
{
	if ((sphere->radius < 0.0) 
	|| (sphere->colour.r < 0 || sphere->colour.r > 255) 
	|| (sphere->colour.g < 0 || sphere->colour.g > 255)
	|| (sphere->colour.b < 0 || sphere->colour.b > 255))
	{
		perror("Los parmetros de la efera son incorrectos\n");
		return (0);
	}
	return (1);
}


static void		ft_add_sphere(t_scene **scene, t_sphere *sphere)
{
	t_list		*new_sphere;

	new_sphere = ft_lstnew(sphere);
	if ((*scene)->sphere == NULL)
		(*scene)->sphere == new_sphere;
	else
		ft_lstadd_back(&(*scene)->sphere, new_sphere);
}

void			ft_get_sphere(t_scene **scene, char *line)
{
	t_sphere	*sphere;
	int			i;
	
	sphere = (t_sphere *) malloc(sizeof(t_sphere) * 1);
	i = 2;
    sphere->position = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
    sphere->radius = ft_atof(&line[i]) / 2;
	i += ft_next_value(&line[i]);
    sphere->colour = ft_get_rgb(&line[i]);
	if (ft_error_sphere(sphere))
		ft_add_sphere(scene, sphere);
	return ;
}