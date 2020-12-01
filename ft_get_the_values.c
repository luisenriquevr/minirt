/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_the_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:47:16 by lvarela           #+#    #+#             */
/*   Updated: 2020/12/01 18:51:21 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void				ft_get_the_values(t_scene **scene, char **line)
{
	int				i;
	
	i = 0;
	write(1, "vamos values\n", 13);
	if ((*line)[i] == 'R')
		ft_get_resolution(scene, line);
	else if ((*line)[i] == 'A')
		ft_get_alight(scene, line);
	return ;
}
