/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_the_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:47:16 by lvarela           #+#    #+#             */
/*   Updated: 2020/11/25 10:51:44 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void				ft_get_the_values(t_scene **scene, char **line)
{
	int				i;

	i = 0;
	while (*line[i++])
	{
		if ((*line)[i] == 'R')
			ft_get_resolution(scene, line);
		if ((*line)[i] == 'A')
			ft_get_alight(scene, line);
	}
	return ;
}
