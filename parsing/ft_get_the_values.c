/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_the_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:47:16 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/18 19:05:19 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

void				ft_get_the_values(t_scene **scene, char *line)
{
	if (line[0] == 'R')
		ft_get_resolution(scene, line);
	else if (line[0] == 'A')
		ft_get_alight(scene, line);
	else if (line[0] == 'c' && line[1] == ' ')
		ft_get_camera(scene, line);
	else if (line[0] == 'l')
		ft_get_light(scene, line);
	else if (line[0] == 'p' && line[1] == 'l')
		ft_get_plane(scene, line);
	else if (line[0] == 's' && line[1] == 'p')
		ft_get_sphere(scene, line);
	else if (line[0] == 's' && line[1] == 'q')
		ft_get_square(scene, line);
	else if (line[0] == 'c' && line[1] == 'y')
		ft_get_cylinder(scene, line);
	else if (line[0] == 't' && line[1] == 'r')
		ft_get_triangle(scene, line);
	return ;
}
