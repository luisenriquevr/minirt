/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_the_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:47:16 by lvarela           #+#    #+#             */
/*   Updated: 2020/11/13 19:28:49 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"




void				ft_get_the_values(t_scene **scene, char **line)
{
	if ((*line)[0] == 'R')
		ft_get_resolution(scene, line);
	/*if ((*line)[0] == 'A')
		ft_get_alight(scene, line);*/
	return ;
}