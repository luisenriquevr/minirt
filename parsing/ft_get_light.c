/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_light.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:06:32 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 16:22:07 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static int			ft_error_light(t_light *light)
{
	if ((light->ratio < 0.0 || light->ratio > 1.0)
	|| (light->colour.r < 0 || light->colour.r > 255)
	|| (light->colour.g < 0 || light->colour.g > 255)
	|| (light->colour.b < 0 || light->colour.b > 255))
	{
		ft_printf("Los parametros de light son incorrectos\n");
		return (0);
	}
	return (1);
}

static void			ft_add_light(t_scene **scene, t_light *light)
{
	t_list		*new_light;

	new_light = ft_lstnew(light);
	if ((*scene)->light == NULL)
		(*scene)->light = new_light;
	else
		ft_lstadd_back(&(*scene)->light, new_light);
}


void			ft_get_light(t_scene **scene, char *line)
{
	t_light 	*light;
	int			i;
	
	light = (t_light *) malloc(sizeof(t_light) * 1);
	i = 1;
	light->position = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
	light->ratio = ft_atof(&line[i]);
	i += ft_next_value(&line[i]);
	light->colour = ft_get_rgb(&line[i]);
	if (ft_error_light(light))
		ft_add_light(scene, light);
	return ;
}